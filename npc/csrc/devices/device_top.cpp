#include "./include/device_base.h"
#include "./include/device_kb.h"
#include "./include/device_timer.h"
#include "./include/device_top.h"
#include "./include/device_uart.h"
#include "./include/device_vga.h"
#include "../include/sim_top.h"

extern Sim_top* St;

Device_top::Device_top() {
    Device_top_Init();
}

Device_top::~Device_top() {}


word_t Device_top::read(paddr_t addr) {
    Device_base* base = findDevicebyaddr(addr);
    if(base == nullptr) {
        cout << hex << addr << " is out of the device addr!" << endl;
        assert(base != nullptr);
        return 0;
    }
    word_t data = base->read(addr);
    return data;
}

void Device_top::write(paddr_t addr, word_t data, uint32_t len) {
    assert(len >= 1 && len <= 8);
    Device_base* base = findDevicebyaddr(addr);
    if(base == nullptr) {
        cout << hex << addr << " is out of the device addr!" << endl;
        assert(base != nullptr);
        return;
    }
    base->write(addr, data, len);
}

/**
 * @brief 开一个进程定期更新设备
 * 
 * @param ptr 
 * @return int 
 */
static int thread_func(void* ptr) {
    while(1) {
        SDL_Delay(100);
        Device_top* t = (Device_top *)ptr;
        for(auto& iter : t->device_pool) {
            iter->update();
        }
    }
}


void Device_top::Device_top_Init(void) {
    bool ret;
    ret = installDevice("uart", "uart_0");
    assert(ret == true);
    ret = installDevice("timer", "timer_0");
    assert(ret == true);
    ret = installDevice("vga", "vga0");
    assert(ret == true);
    ret = installDevice("kb", "kb_0");
    assert(ret == true);
    cout << "devices init successfully!" << endl;
    
    SDL_CreateThread(thread_func, "Update", this);
}


Device_base* Device_top::createDevice(string name) {
    if(name == "uart") {
        return new Device_uart;
    } else if(name == "timer") {
        return new Device_timer;
    } else if(name == "vga") {
        return new Device_vga;
    } else if(name == "kb") {
        return new Device_kb;
    } else {
        cout << name <<" is not a Device" << endl;
        return nullptr;
    }
}

bool Device_top::installDevice(string classname, string deviceName) {
    if(findDeviceName(classname) != nullptr) {
        return false;
    }
    Device_base* base = createDevice(classname); //通过类名创建设备
    if(base == nullptr) {
        cout << "There is not" << classname << endl;
        return false;
    }
    if(deviceName.empty()){
        cout << "deviceName has not set!" << endl;
        deviceName = classname;
    }
    base->init(deviceName);
    device_pool.push_back(base);
    return true;
}


Device_base* Device_top::findDeviceName(string name) {
    return nullptr;
}

Device_base* Device_top::findDevicebyaddr(paddr_t addr) {
    paddr_t start, end;
    for(auto& iter : device_pool) {
        for(auto& reg_iter : iter->device_info) {
            start = reg_iter.low;
            end = reg_iter.high;
            if(atRange(start, end - 1, addr)) {
                St->diff.difftest_skip_ref();
                return iter;
            }
        }
    }
    return nullptr;
}

bool Device_top::atRange(paddr_t start, paddr_t end, paddr_t val) { //对设备的位置进行判断
    if(val >= start && val <= end) return true;
    else return false;
}