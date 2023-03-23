#include <verilated.h>          
#include <verilated_vcd_c.h>    
#include <iostream>
#include <fstream>
#include "Vysyx_top.h"

using namespace std;

static Vysyx_top* top;
static VerilatedVcdC * tfp;
static vluint64_t main_time = 0;
static const vluint64_t sim_time = 1000;

// inst.bin
// inst 0: 1 + zero = reg1 1+0=1
// inst 1: 2 + zero = reg1 2+0=2
// inst 2: 1 + reg1 = reg1 1+2=3
int inst_rom[65536];


uint32_t paddr_read(uint64_t addr, int len){
  int index = (addr - 0x80000000)/4;
  if(index >= 0 && index <= 5)
    return inst_rom[index];
  return 0;
}

int main(int argc, char **argv)
{
  inst_rom[0] = 0x00108093;
  inst_rom[1] = 0x00108093;
  inst_rom[2] = 0x00108093;
  inst_rom[3] = 0x00108093;
  inst_rom[4] = 0x00108093;
  inst_rom[5] = 0x00108093;
  // initialization
  Verilated::commandArgs(argc, argv);
  Verilated::traceEverOn(true);

	top = new Vysyx_top;
  tfp = new VerilatedVcdC;

  top->trace(tfp, 5);
  tfp->open("top.vcd");
	int i = 0;
	while( !Verilated::gotFinish() && main_time < sim_time && i < 6)
	{
	  if( main_time % 10 == 0 ) top->clk = 0;
	  if( main_time % 10 == 5 ) top->clk = 1;
		  
	  if( main_time < 10 )
	  {
		top->rst = 1;
	  }
	  else
	  {
	    top->rst = 0;
		if( main_time % 10 == 0 ) {
		  top->inst = paddr_read(top->in_addr, 4);
      i++;
      printf("%08x\n",top->inst);
      }
	  }
	  top->eval();
	  tfp->dump(main_time);
	  main_time++;
	}
		
  // clean
  tfp->close();
  delete top;
  delete tfp;
  exit(0);
  return 0;
}
