#ifndef __DEVICE_TIMER_H__
#define __DEVICE_TIMER_H__
#include "device_base.h"
#include "sys/time.h"

class Device_timer : public Device_base {
private:
    timeval bootime; //启动时间
    timeval now; // 实际时间
    uint64_t rtc_time;
public:
    Device_timer();
    ~Device_timer();
    void write(paddr_t addr, word_t data, uint32_t len);
    word_t read(paddr_t addr);
    void update(); 
    void init(string name); // 设备初始化
};



#endif