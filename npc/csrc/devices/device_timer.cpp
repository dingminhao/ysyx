#include "./include/device_timer.h"

/*
typedef struct {
  const char* name;
  // we treat ioaddr_t as paddr_t here
  paddr_t low;
  paddr_t high;

} IOMap;
*/

Device_timer::Device_timer() {

}

Device_timer::~Device_timer() {

}
/*
           struct timeval {
               time_t      tv_sec;      seconds 
               suseconds_t tv_usec;     microseconds 
           };
*/



/**
 * @brief 初始化timer
 * 
 * @param name 
 */
void Device_timer::init(string name){
    IOMap d;
    d.name = name;
    d.low = RTC_ADDR;
    d.high = RTC_ADDR + 8; //timer存储为8个字节
    device_info.push_back(d); //将设备存放入该设备的存储空间
    gettimeofday(&bootime, NULL); //初始化时间
}

/**
 * @brief 读取时刷新时间
 * 
 * @param addr 
 * @return word_t 
 */
word_t Device_timer::read(paddr_t addr) { //在对设备进行读取时，先默认能够读到
    paddr_t offset = addr - device_info[0].low;
    assert(offset == 0 || offset == 4); //只能读取指定位置
    gettimeofday(&now, NULL);
    long long seconds = now.tv_sec - bootime.tv_sec;
    long long us = now.tv_usec - bootime.tv_usec;
    rtc_time = seconds * 1000000 + us;

    if(offset == 0) {
        return (uint32_t)rtc_time;
    } else {
        return (uint64_t)rtc_time >> 32; 
    }
}

 
void Device_timer::write(paddr_t addr, word_t data, uint32_t len) {

}

void Device_timer::update() {

}


