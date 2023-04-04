#ifndef __SIMTOP_H_
#define __SIMTOP_H__

#include <verilated.h>          
#include <verilated_vcd_c.h>    
#include <iostream>
#include <fstream>
#include "Vysyx_top.h"
#include <Vysyx_top__Dpi.h>
#include "verilated_dpi.h"
#include <vector>
#include "simMem.h"
#include "itrace.h"
#include <iomanip>
#include "difftest.h"



class Sim_top {
private:
    Vysyx_top* top;
    VerilatedContext* contextp;
    VerilatedVcdC* tfp;
    uint64_t* reg;
    uint64_t pc;

    struct  sdb_tool {
        string name;
        bool isok;
    };
    /*sdbToollist sdb的列表*/
    vector<sdb_tool> sdbToollist = {
        {.name = "difftest",.isok = false},
        {"wp",false},
        {"wave",true},
        {"reg",false},
        {"itrace",false},
        {"mtrace",false},
        {"ftrace",false},
        {"dtrace",false}
    };

private:
    void stepCycle(bool val);
    void changeCLK();
    void dampWave();
public:
    uint32_t top_status;
    enum {
        TOP_STOP,
        TOP_RUNNING
    };
    SimMem* mem;
    Itrace itrace;
    Difftest diff;
    Sim_top();
    ~Sim_top();
    Vysyx_top* getTop();
    void reset();
    int npcTrap();
    uint64_t getRegVal(int idx);
    uint64_t getRegVal(const char* str);
    const char* getRegName(int idx);
    void printRegisterFile();
    void scanMem(paddr_t addr, uint32_t len);
    void excute(int32_t t);
    void excute();
    void sdbOn(const char* sdbname);
    void sdbOff(const char* sdbname);
    void sdbStatus();
    void sdbRun(void);
    bool isSdbOk(const char* sdbname);
};
#endif