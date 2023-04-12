#include "./include/sim_top.h"
using namespace std;
/*
    Vtop* top;
    VerilatedContext* contextp;
    VerilatedVcdC* tfp;
    uint64_t* reg;
    uint64_t pc;
*/
#define Reg_Num 32
extern uint64_t* cpu_gpr;
extern uint64_t cpu_pc;

static const char* regs[] = {
    "$0", "ra", "sp", "gp", "tp", "t0", "t1", "t2",
    "s0", "s1", "a0", "a1", "a2", "a3", "a4", "a5",
    "a6", "a7", "s2", "s3", "s4", "s5", "s6", "s7",
    "s8", "s9", "s10", "s11", "t3", "t4", "t5", "t6" };

Sim_top::Sim_top() {
    cout << "sim_top start!" << endl;
    mem = new SimMem;
    /* 进行trace */
    contextp = new VerilatedContext;
    top = new Vysyx_top;
    tfp = new VerilatedVcdC;
    contextp->traceEverOn(true);
    top->trace(tfp, 5);
    tfp->open("top.vcd");

    this -> top_status = TOP_RUNNING;
}

/**
 * @brief Destroy the Sim_top::Simtop object
 * 
 */
Sim_top::~Sim_top() {
    tfp->close();
    delete tfp;
    delete top;
    cout << "SimtopEnd!" << endl;
}

/**
 * @brief 扫描内存病进行显示
 * 
 * @param addr 输入地址
 * @param len  扫描的长度 4*len字节被输出
 */
void Sim_top::scanMem(paddr_t addr, uint32_t len) {
    for (size_t i = 0; i < len; i++) {
        printf("addr:0x%08lx\tData: %08lx\n", addr,
            mem->paddr_read(addr, 4));
            addr +=4;
    }

}

void Sim_top::excute() {
    top_status = TOP_RUNNING;
    while((!top->contextp()->gotFinish())) {
        if(top_status != TOP_RUNNING) {
            cout << "top_status:STOP" <<endl;
            break;
        }
        stepCycle(false);
    }
}

void Sim_top::excute(int32_t t) {
    bool val;
    val = (t == 1);
    top_status = TOP_RUNNING;
    while((!top->contextp()->gotFinish()) && (t--)) {
        if(top_status != TOP_RUNNING) {
            cout << "top_status:STOP" << endl;
            break;
        }
        stepCycle(val);
    }
}


int Sim_top::npcTrap() {
    uint64_t a0 = reg[10];
    if(!a0) {
        cout << "PC:" << hex << pc << "\tHIT GOOD" << endl;
        return 0; 
    } else {
        cout << "PC:" << hex << pc << "\tBAD TRAP" <<endl;
    }
    return 1;
}




/*        寄存器相关        */

/**
 * @brief 得到寄存器的返回值
 * 
 * @param idx 寄存器数
 * @return const char* 只读 
 */
const char* Sim_top::getRegName(int idx) {
    return regs[idx];
}



uint64_t Sim_top::getRegVal(int idx) {
    this->reg = cpu_gpr;
    return reg[idx];
}

/**
 * @brief 得到指定寄存器的值也可以得到pc
 * 
 * @param str 范围（pc，regs）
 * @return uint64_t 
 */
uint64_t Sim_top::getRegVal(const char* str) {
    uint64_t val;
    if(!strcmp(str,"pc")) {
        val = this->pc;
        return val;
    }
    for(int i = 0; i < Reg_Num; i++) {
        if(!strcmp(str, regs[i])) {
            val = reg[i];
            return val;
        }
    }
    return -1;
}

/**
 * @brief 打印所有寄存器的值包括pc
 * 
 */
void Sim_top::printRegisterFile() {
    for(int i = 0; i < 16; i++) {
        cout << setw(5) << left << getRegName(i)
        << setw(20) << left << hex << getRegVal(i)
        << setw(5) << left << getRegName(i + 16)
        << setw(20) << left << getRegVal(i + 16)
        << endl;
    }
    cout << "\npc:" << "\t" << hex << cpu_pc << endl;
}







/*                  时钟周期与波形跟踪           */
/**
 * @brief cpu 时钟跳动一个周期 两次change clk
 *
 * @param val 是否打印寄存器值
 */
void Sim_top::stepCycle(bool val) {
    if(top_status != TOP_RUNNING) {
        return ;
    }
    changeCLK(); //上升沿
    
    /*上升沿的时候需要dampwave  下降的时候也需要*/
    if(isSdbOk("wave")) {
        this->dampWave();
    }
    if(val) {
        printf("PC : %08lx\t  inst : %08lx\n", this->pc, this->mem->paddr_read(this->pc, 4));
    }
    changeCLK();
    sdbRun();
}
/**
 * @brief 翻转时钟
 * 
 */
void Sim_top::changeCLK() {
    top->clk = !top->clk;
    top->eval();
    this->reg = cpu_gpr;
    this->pc = cpu_pc;
}

/**
 * @brief 将波形记录下来
 * 
 */
void Sim_top::dampWave() {
    contextp->timeInc(1);
    tfp->dump(contextp->time());
}

/**
 * @brief 五个时钟周期赋值rst为0
 * 
 */
void Sim_top::reset() {
    int i = 5;
    top->rst = 1;
    while(i--) {
        stepCycle(false);
    }
    top->rst = 0;
}




/*                SDB调试         */

/**
 * @brief 打开sdb调试工具
 *
 * @param sdbname 工具名称
 */
void Sim_top::sdbOn (const char* sdbname) {
    if(!strcmp(sdbname,"all")) {     //如果为all，将所有的sdb关掉
        for(auto& iter : sdbToollist) {
            iter.isok = true;
        }
        return ;
    }

    for(auto& iter : sdbToollist) {
        if(!strcmp(iter.name.c_str(),sdbname)){
            iter.isok = true;
            return;
        }

    }
    cout << "cant find" << sdbname << endl;
}

/**
 * @brief 关闭sdb调试工具
 *
 * @param sdbname 工具名称
 */
void Sim_top::sdbOff(const char* sdbname) {
    if(!strcmp(sdbname,"all")) {     //如果为all，将所有的sdb关掉
        for(auto& iter : sdbToollist) {
            iter.isok = false;
        }
        return ;
    }
    for(auto& iter : sdbToollist) {
        if(!strcmp(iter.name.c_str(), sdbname)) {
            iter.isok = false;
            return;
        }
    }
    cout << "cant find" << sdbname << endl;
    return ;
}

bool Sim_top::isSdbOk(const char* sdbname) {
    for(auto& iter : sdbToollist) {
        if(!strcmp(sdbname, iter.name.c_str())) {
            return iter.isok;
        }
    }
    cout << "cant find" << sdbname << endl;
    return false;
}

void Sim_top::sdbRun(void) {
    if(isSdbOk("difftest") && top->rst != 1) {
        this->diff.difftest_step();
    }
    if(isSdbOk("wp")) {

    }
    if(isSdbOk("wave")) {
        this->dampWave();
    }
    if(isSdbOk("reg")) {

    }
    if(isSdbOk("itrace")) {
        this->itrace.llvmDis();
    }
}

void Sim_top::sdbStatus() {
    //对sdb的状态进行遍历
    for (auto iter : sdbToollist) {
        cout << iter.name << ": " << iter.isok << endl;
    }
}