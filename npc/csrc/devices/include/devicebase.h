#ifndef __DEVICEBASE_H__
#define __DEVICEBASE_H__

#include <iostream>
#include <string>
#include <vector>

using namespace std;

#define DEVICE_BASE 0xa000000
#define MIMO_BASE 0xa0000000
#define SERIAL_PORT     (DEVICE_BASE + 0x00003f8)  //串口的映射地址
#define KBD_ADDR        (DEVICE_BASE + 0x0000060)  //键盘的映射地址
#define RTC_ADDR        (DEVICE_BASE + 0x0000048)  //时钟的映射地址
#define VGACTL_ADDR     (DEVICE_BASE + 0x0000100)  //图像的映射地址
#define AUDIO_ADDR      (DEVICE_BASE + 0x0000200)  //音频的映射地址
#define DISK_ADDR       (DEVICE_BASE + 0x0000300)  //磁盘的映射地址
#define FB_ADDR         (MMIO_BASE   + 0x1000000)  
#define AUDIO_SBUF_ADDR (MMIO_BASE   + 0x1200000)  //音频

typedef uint64_t paddr_t;
typedef uint64_t word_t;
struct deviceinfo_t
{
    string name;
    paddr_t addr;
    word_t len;
    bool isok;
};
class Devicebase {
private:
public:
        vector<deviceinfo_t> deviceinfo;
        virtual ~Devicebase() {};
        virtual void write(paddr_t addr, word_t data, uint32_t len) = 0;
        virtual word_t read(paddr_t addr) = 0;
        virtual void init(const char* name) = 0;
        virtual void update() = 0;
        bool atRange(paddr_t s, paddr_t e, paddr_t val);

}

#endif

    

















#endif