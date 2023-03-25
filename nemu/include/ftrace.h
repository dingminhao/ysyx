#ifndef _FTRACE_H
#define _FTRACE_H
#include <common.h>
#include <stddef.h>
#include <elf.h>

typedef struct ftrace
{
    char func_name[64];
    paddr_t start;
    size_t size; 
} func_info;

void init_elf(const char* elf_file, paddr_t global_offset);

func_info* check_func(paddr_t addr);

#endif