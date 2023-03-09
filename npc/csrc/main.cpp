#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

#include "Vlight.h"
#include "verilated.h"
#include "verilated_vcd_c.h"

#define MAX_TIME 50000000
vluint64_t sim_time = 0;

void dut_reset (Vlight *dut, vluint64_t &sim_time){
    dut->rst = 0;
    if(sim_time >= 1 && sim_time < 10){
        dut->rst = 1;
    }
}


int main(int argc, char* argv[]) {
	Verilated::commandArgs(argc, argv);
	Vlight *dut = new Vlight;
	// 生成vcd文件
	Verilated::traceEverOn(true);
	VerilatedVcdC *m_trace = new VerilatedVcdC;
	dut->trace(m_trace, 0);
	m_trace->open("waveform.vcd");
	
	while(sim_time < MAX_TIME)
	{
		dut_reset(dut, sim_time);
		dut->clk ^= 1;
		dut->eval();
		m_trace->dump(sim_time);
		sim_time = sim_time + 1;
	}
	m_trace->close();
	delete dut;
	
	return 0;
}
