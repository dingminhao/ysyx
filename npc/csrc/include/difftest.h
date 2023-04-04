#ifndef __Difftest_H__
#define __Difftest_H__

#include<iostream>
#include <dlfcn.h>
using namespace std;

class  Difftest
{
private:
    typedef struct{
        uint64_t gpr[32];
        uint64_t pc;
    }CPU_state;
    enum {
      DIFFTEST_TO_DUT,
      DIFFTEST_TO_REF  
    };
    typedef void (*ref_difftest_memcpy)(uint64_t addr, void *buf, size_t n, bool direction);
    typedef void (*ref_difftest_regcpy)(void *dut, bool direction);
    typedef void (*ref_difftest_exec)(uint64_t n);
    typedef void (*ref_difftest_raise_intr)(uint64_t NO);
    typedef void (*ref_difftest_init)(int);

    /*函数指针*/
    ref_difftest_memcpy diff_memcpy;
    ref_difftest_regcpy diff_regcpy;
    ref_difftest_exec   diff_exec;
    ref_difftest_raise_intr diff_raise_intr;
    ref_difftest_init diff_init;
    volatile bool is_skip_ref = false;
public:
     Difftest(/* args */);
    ~ Difftest();
    void init_difftest(const char *ref_so_file, long img_size, int port);
    CPU_state getDutregs();
    CPU_state getNemuregs();
    void difftest_step();
    void printregs(CPU_state& cpu_regs);
    bool checkregs();
    void difftest_skip_ref();
};


#endif
