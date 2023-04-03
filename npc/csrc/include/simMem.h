#ifndef __SIMMEM_H__
#define __SIMMEM_H__

#include <iostream>
#include <fstream>
#include <sys/stat.h>
#include <string.h>

using namespace std;
#define PG_ALIGN __attribute((aligned(4096)))  //内存对其
typedef uint64_t paddr_t;
typedef uint64_t word_t;

class SimMem {
public:
#define MEMSIZE 0x20000000
#define MEMBASE 0x80000000

    string imgpath;
    uint8_t pmem[MEMSIZE] PG_ALIGN = {};  //声明一个大小为128*1024*1024的内存空间
private:
    bool in_pmem(paddr_t addr);
    void out_of_bound(paddr_t addr);
    word_t pmem_read(paddr_t addr, int len);
    void pmem_write(paddr_t addr, int len, word_t data);

public:
    SimMem();
    ~SimMem();
    paddr_t getMEMBASE();
    uint8_t* guest_to_host(paddr_t paddr);
    paddr_t host_to_guest(uint8_t* haddr);
    word_t host_read(void *addr, int len);
    void host_write(void* addr, int len, word_t data);
    word_t paddr_read(paddr_t addr, int len);
    void paddr_write(paddr_t addr, int len, word_t data);
    bool loadImage(const char* img);
    size_t getImgSize(const char* img);
};

#endif