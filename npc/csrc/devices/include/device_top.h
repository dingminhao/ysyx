#ifndef __DEVICE_TOP_H__
#define __DEVICE_TOP_H__
#include <string>
#include <vector>
#include "device_base.h"
class Device_top {
private:

public:
    vector <Device_base*> device_pool;
    Device_top();
    ~Device_top();
    Device_base* findDevicebyaddr(paddr_t addr);
    Device_base* findDeviceName(string name);
    Device_base* createDevice(string name);
    word_t read(paddr_t addr);
    bool atRange(paddr_t start, paddr_t end, paddr_t val);
    void write(paddr_t addr, word_t data, uint32_t len);
    bool installDevice(string className, string deviceName);
    void Device_top_Init(void);
};


#endif