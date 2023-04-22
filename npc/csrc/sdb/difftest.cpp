#include "../include/difftest.h"
#include "../include/debug.h"
#include "../include/sim_top.h"

extern Sim_top* St;

Difftest::Difftest() {
    cout << "difftest start" << endl;
}
Difftest::~Difftest() {
    cout << "difftest end!" << endl;
}

void Difftest::init_difftest(const char *ref_so_file, long img_size, int port) {
  assert(ref_so_file != NULL);
  void *handle;
  handle = dlopen(ref_so_file, RTLD_LAZY);
  assert(handle);

  diff_memcpy = (ref_difftest_memcpy)dlsym(handle, "difftest_memcpy");
  assert(diff_memcpy);

  diff_regcpy = (ref_difftest_regcpy)dlsym(handle, "difftest_regcpy");
  assert(diff_regcpy);

  diff_exec = (ref_difftest_exec)dlsym(handle, "difftest_exec");
  assert(diff_exec);

  diff_raise_intr = (ref_difftest_raise_intr)dlsym(handle, "difftest_raise_intr");
  assert(diff_raise_intr);

  diff_init = (ref_difftest_init)dlsym(handle, "difftest_init");
  assert(diff_init);

  diff_init(port);
  uint64_t membase = St->mem->getMEMBASE();
  diff_memcpy(membase, St->mem->guest_to_host(membase), img_size, DIFFTEST_TO_REF);
  /*赋初值*/
  CPU_state regs = getDutregs();
  diff_regcpy(&regs, DIFFTEST_TO_REF);
}

Difftest::CPU_state Difftest::getDutregs() {
    CPU_state regs;
    for(int i = 0; i < 32; i++) {
        regs.gpr[i] = St->getRegVal(i);
    }
    regs.pc = St->getRegVal("pc");
    return regs;
}

Difftest::CPU_state Difftest::getNemuregs() {
    CPU_state regs;
    diff_regcpy(&regs, DIFFTEST_TO_DUT);
    return regs;
}

bool Difftest::checkregs() {
    CPU_state regs_nemu = getNemuregs();
    CPU_state regs_dut  = getDutregs();
    for(int i = 0; i < 32; i++) {
        if(regs_nemu.gpr[i] != regs_dut.gpr[i] || regs_nemu.pc != regs_dut.pc) {
            cout << "regerror" << endl;
            cout << "----------------nemu-----------------" << endl;
            printregs(regs_nemu);
            cout << "----------------dut------------------" << endl;
            printregs(regs_dut);
            return false;
        }
        if(regs_nemu.pc != regs_dut.pc) {
            cout << "pc error" << endl;
            cout << "----------------nemu-----------------" << endl;
            printregs(regs_nemu);
            cout << "----------------dut------------------" << endl;
            printregs(regs_dut);
            return false;
        }
    }
    return true;
}

void Difftest::difftest_step() {
    if (is_skip_ref == true) {
        CPU_state dutregs = getDutregs();
        diff_regcpy(&dutregs, DIFFTEST_TO_REF);
        is_skip_ref = false;
        return;
    }

    diff_exec(1);
    if (!checkregs()) {
        /* 停止指令执行 */
        St->top_status = St->TOP_STOP;
    }
}


void Difftest::printregs(CPU_state& cpu_regs) {
    /* 格式化输出 */
    for (size_t i = 0; i < 16; i++) {
        cout << setw(5) << left << St->getRegName(i)
            << setw(20) << left << hex << cpu_regs.gpr[i]
            << setw(5) << left << St->getRegName(i + 16)
            << setw(20) << left << cpu_regs.gpr[i + 16]
            << endl;
    }
    cout << "\npc:" << "\t" << hex << cpu_regs.pc << endl;
}

void Difftest::difftest_skip_ref() {
    is_skip_ref = true;
}
