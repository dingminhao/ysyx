#include <verilated.h>          
#include <verilated_vcd_c.h>    
#include <iostream>
#include <fstream>
#include "Vysyx_top.h"
#include <Vysyx_top__Dpi.h>
#include "verilated_dpi.h"
#include "include/sim_top.h"
#include "include/simMem.h"
#include "cppreadline/Console.hpp"
#include "include/sdb.h"
using namespace std;
namespace cr = CppReadline;
using ret = cr::Console::ReturnCode;

const char* nemu = "/home/dmh/ysyx-workbench/nemu/build/riscv64-nemu-interpreter-so";

Sim_top* St;
int main(int argc, char* argv[]) {
  const char* path = "";
  cout << "argc:" << argc << endl;
  path = argv[1];

  St = new Sim_top;
  St->mem->imgpath.append(path);
  St->mem->loadImage(St->mem->imgpath.c_str());

  size_t imgsize = St->mem->getImgSize(St->mem->imgpath.c_str());
  St->reset();
  St->diff.init_difftest(nemu, imgsize, 0);

  cr::Console c(">:");
  c.registerCommand("info", cmd_info);
  c.registerCommand("x", cmd_x);
  c.registerCommand("si", cmd_si);
  c.registerCommand("c", cmd_c);
  c.registerCommand("help", cmd_help);
  c.registerCommand("sdbon", cmd_sdbon);
  c.registerCommand("sdboff", cmd_sdboff);
  c.registerCommand("sdb", cmd_sdb);
  int retCode;
  // do {
  //   retCode = c.readLine();
  //   if(retCode == ret::Ok)
  //       c.setGreeting(">");
  //   else {
  //     c.setGreeting("!>");
  //   }

  //   if(retCode == 1) {
  //     cout << "retcode 1 error" <<endl;
  //   }
  //   if(retCode == 2) {
  //     cout << "retcode 2 error" <<endl;
  //   }
    
  // } while(retCode != ret::Quit);
  St->excute(-1);
  int hitgood = St->npcTrap();
  delete St;
  return hitgood;
}