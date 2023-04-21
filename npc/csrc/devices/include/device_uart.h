#ifndef __DEVICE_UART_H__
#define __DEVICE_UART_H__

#include "device_base.h"

class Device_uart : public Device_base {
private:
public:
    Device_uart();
    ~Device_uart();
    void write(paddr_t addr, word_t data, uint32_t len);
    word_t read(paddr_t addr);
    void update(); 
    void init(string name); // 设备初始化
};



#endif