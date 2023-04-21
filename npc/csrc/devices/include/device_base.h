#ifndef __DEVICE_H__
#define __DEVICE_H__

#include <iostream>
#include <string>
#include <vector>
#include "assert.h"
#include <SDL2/SDL.h>

using namespace std;

#define MEM_BASE 0x80000000  // 内存的初始地址
#define DEVICE_BASE 0xa0000000  // 设备的地址
#define MMIO_BASE 0xa0000000   // 内存映射的初始地址
#define SERIAL_PORT     (DEVICE_BASE + 0x00003f8) // 串口地址
#define KBD_ADDR        (DEVICE_BASE + 0x0000060) // 键盘地址
#define RTC_ADDR        (DEVICE_BASE + 0x0000048) // 时间地址
#define VGACTL_ADDR     (DEVICE_BASE + 0x0000100) // VGA地址
#define AUDIO_ADDR      (DEVICE_BASE + 0x0000200) // 音频地址
#define DISK_ADDR       (DEVICE_BASE + 0x0000300) // 磁盘地址
#define FB_ADDR         (MMIO_BASE   + 0x1000000) // 图像存储的地址
#define AUDIO_SBUF_ADDR (MMIO_BASE   + 0x1200000) 



typedef uint64_t paddr_t;
typedef uint64_t word_t;

typedef struct {
  string name;
  // we treat ioaddr_t as paddr_t here
  paddr_t low;
  paddr_t high;

} IOMap;

class Device_base {
private:
public:
    vector<IOMap> device_info; //一个设备可能有多个寄存器
    ~Device_base() {}
    virtual void write(paddr_t addr, word_t data, uint32_t len) = 0; //声明纯虚函数
    virtual word_t read(paddr_t addr) = 0;
    virtual void init(string name) = 0;
    virtual void update() = 0;
    bool atRange(paddr_t start, paddr_t end, paddr_t val);
};


#endif
