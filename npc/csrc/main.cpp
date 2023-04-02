#include <verilated.h>          
#include <verilated_vcd_c.h>    
#include <iostream>
#include <fstream>
#include "Vysyx_top.h"
#include <Vysyx_top__Dpi.h>
#include "verilated_dpi.h"
using namespace std;

static Vysyx_top* top;
static VerilatedVcdC * tfp;
static vluint64_t main_time = 0;
static const vluint64_t sim_time = 1000;
int inst_rom[65536];
bool e_break = false;
// uint64_t *cpu_gpr;

int npcTrap() {
    uint64_t a0 = cpu_gpr[10];
    if (a0 == 0) {
        cout << "\tHIT GOOD" << endl;
        return 0;
    }
    else {
        cout << "\tBAD TRAP" << endl;
    }
    return 1;
}
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


void pmem_read(long long raddr, long long* rdata) {
  if(raddr == 0) {
    return ;
  }
  *rdata = paddr_read(raddr, 4);
}

void ebreak(svLogic eebreak){
  e_break = eebreak;
  printf("%d", eebreak);
}

// extern "C" void set_gpr_ptr(const svOpenArrayHandle r) {
//   cpu_gpr = (uint64_t *)(((VerilatedDpiOpenVar*)r)->datap());
// }
void dump_gpr() {
  int i;
  for (i = 0; i < 32; i++) {
    printf("gpr[%d] = 0x%lx\n", i, cpu_gpr[i]);
  }
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
	    top->rst = 0;
	  }
    
	  top->eval();
	  tfp->dump(main_time);
	  main_time++;
    if(e_break) break;
    
	}
		
  // clean
  tfp->close();
  delete top;
  delete tfp;
  npcTrap();
  exit(0);
  return 0;
}
