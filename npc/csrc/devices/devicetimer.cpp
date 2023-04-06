#include "./include/devicetimer.h"
#include "assert.h"


Devicetimer::Devicetimer(){

}

Devicetimer::~Devicetimer() {

}

void Devicetimer::init(const char* name) {
    deviceinfo_t t;
    t.name.append(name);
    t.addr = RTC_ADDR;
    t.len = 8;
    t.isok = true;
    deviceinfo.push_back(t);
    gettimeofday(&boottime, NULL);
}

void Devicetimer::write(paddr_t addr, word_t data, uint32_t len) {

}



word_t Devicetimer::read(paddr_t addr) {
    paddr_t offset = addr - deviceinfo[0].addr;
    assert(offset == 0 || offset == 4);
    if (offset == 0) {
        gettimeofday(&now, NULL);
        long seconds = now.tv_sec - boottime.tv_sec;
        long useconds = now.tv_usec - boottime.tv_usec;
        rtc_time = (seconds * 1000000 + (useconds + 500));
        return (uint32_t)rtc_time;
    }
    else {
        return rtc_time >> 32;
    }
    return 0;
}
