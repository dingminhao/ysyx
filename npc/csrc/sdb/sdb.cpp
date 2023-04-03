#include "../include/sdb.h"
#include "stdio.h"
#include "../include/sim_top.h"


extern Sim_top* St;
unsigned cmd_help(const vector<string>&) {
    std::cout << "Welcome to the example console. This command does not really\n"
        << "do anything aside from printing this statement. Thus it does\n"
        << "not need to look into the arguments that are passed to it.\n";
    return 0;
}

unsigned cmd_x(const vector<string>& input) {
    if(input.size() != 3) {
        cout << "输入无效" << endl;
        return 1;
    }
    uint32_t len;
    paddr_t addr;
    sscanf(input[1].c_str(), "%d", &len);
    sscanf(input[2].c_str(), "%lx", &addr);
    St->scanMem(addr, len);
    return 0;
}

unsigned cmd_si(const vector<string>& input) {
    uint32_t n;
    if (input.size() == 2) {
        n = atoi(input[2].c_str());
        St->excute(n);
    } else St->excute(1);
    return 0;
}


unsigned cmd_c(const vector<string>& input) {
    if(input.size() != 1) {
        cout << "输入无效" << endl;
        return 1;
    }
    St->excute();
    return 0;
}

unsigned cmd_info(const vector<string>& input) {
    if(input.size() != 2) {
        cout << "输入无效" << endl;
        return 1;
    }
    char val[20];
    strcpy(val, input[1].c_str());
    if(!strcmp(val, "r")) {
        St->printRegisterFile();
        return 0;
    }
    if(!strcmp(val, "w")) {
        return 0;
    }
    return 0;
}



unsigned cmd_sdbon(const vector<string>& input) {
    if(input.size() != 2) {
        cout << "输入无效" << endl;
        return 1;
    }
    St->sdbOn(input[1].c_str());
    return 0;
}

unsigned cmd_sdboff(const vector<string>& input) {
    if(input.size() != 2) {
        cout << "输入无效" << endl;
        return 1;
    }
    St->sdbOff(input[1].c_str());
    return 0;
}



unsigned cmd_sdb(const vector<string>& input) {
    if(input[1].size() < 2) {
        cout << "sdb is wrong!" << endl;
    }

    if(input[1] == "status") St->sdbStatus();
    else if(input[1] == "on") {
        if(input.size() != 3) {
            cout << "输入无效" << endl;
        return 1;
        }
        St->sdbOn(input[2].c_str());
    } else if(input[1] == "off") {
        if(input.size() != 3) {
            cout << "输入无效" << endl;
            return 1;
        }
        St->sdbOff(input[2].c_str());
    } else {
        cout << "cmd_sdb is wrong!" << endl;
        return 1;
    }
    return 0;
}

