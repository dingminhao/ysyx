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


int inst_rom[65536];

void read_inst(char *file) {
  FILE *fp = fopen(file, "rb");
  fseek(fp, 0, SEEK_END);
  size_t size = ftell(fp);
  fseek(fp, 0, SEEK_SET);
  size = fread(inst_rom, size, 1, fp);
}

uint32_t paddr_read(uint64_t addr, int len){
  int index = (addr - 0x80000000)/4;
  return inst_rom[index];
}

int main(int argc, char **argv)
{
  read_inst(argv[1]);
  Verilated::commandArgs(argc, argv);
  Verilated::traceEverOn(true);

	top = new Vysyx_top;
  tfp = new VerilatedVcdC;

  top->trace(tfp, 5);
  tfp->open("top.vcd");
	int i = 0;
	while( !Verilated::gotFinish() && main_time < sim_time)
	{
	  if( main_time % 10 == 0 ) top->clk = 0;
	  if( main_time % 10 == 5 ) top->clk = 1;
		
	  if( main_time < 10 )
	  {
		  top->rst = 1;
	  }
	  else
	  {
      if( main_time % 10 == 5 ) {
      //  printf("%ld, %lx,", main_time, top->in_addr);
        top->inst = paddr_read(top->in_addr, 4);
        printf("%08x\n", top->inst);
        i++;
      }
	    top->rst = 0;
	  }

	  top->eval();
	  tfp->dump(main_time);
	  main_time++;
    if((i >5 && top->inst == 0)) break;
	}
		
  // clean
  tfp->close();
  delete top;
  delete tfp;
  exit(0);
  return 0;
}
