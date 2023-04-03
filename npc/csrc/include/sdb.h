#ifndef __SDB_H
#define __SDB_H

#include <iostream>
#include <vector>
#include <string>
using namespace std;
extern unsigned cmd_help(const vector<string>&);
extern unsigned cmd_x(const vector<string>& input);
extern unsigned cmd_si(const vector<string>& input);
extern unsigned cmd_c(const vector<string>& input);
extern unsigned cmd_info(const vector<string>& input);
extern unsigned cmd_sdbon(const vector<string>& input);
extern unsigned cmd_sdboff(const vector<string>& input);
extern unsigned cmd_sdb(const vector<string>& input);
#endif