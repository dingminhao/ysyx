#include "./include/device_uart.h"

Device_uart::Device_uart() {}

Device_uart::~Device_uart() {}


void Device_uart::init(string name) {
    IOMap d;
    d.name = name;
    d.low = SERIAL_PORT;
    d.high = SERIAL_PORT + 4;

    device_info.push_back(d); // 将设备放进去
}

void Device_uart::update() {

}

word_t Device_uart::read(paddr_t addr) {
    return 0;
}

void Device_uart::write(paddr_t addr, word_t data, uint32_t len) {
    putchar(data);
}






