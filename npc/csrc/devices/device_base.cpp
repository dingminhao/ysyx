#include "./include/device_base.h"

bool Device_base::atRange(paddr_t start, paddr_t end, paddr_t val) { //对设备的位置进行判断
    if(val >= start && val <= end) return true;
    else return false;
}