#include "./include/device_kb.h"

Device_kb::Device_kb(){}

Device_kb::~Device_kb(){}

void Device_kb::init(string name) {
    IOMap k;
    k.low = KBD_ADDR;
    k.name = name;
    k.high = KBD_ADDR + 4;

    device_info.push_back(k);
}


void Device_kb::write(paddr_t addr, word_t data, uint32_t len) {
}

word_t Device_kb::read(paddr_t addr) {
    int k = AM_KEY_NONE;
    if(!key_buf.empty()) {//如果环形缓冲区不为空则读出
        k = key_buf.front();
        key_buf.pop_front();
    }
    return k;
}

void Device_kb::update() {
    while(SDL_PollEvent(&event)) {
        switch (event.type) {
            case SDL_QUIT:
                exit(0);
                break;
            case SDL_KEYDOWN:
            case SDL_KEYUP: {
                uint8_t k = event.key.keysym.scancode;
                bool is_keydown = (event.key.type == SDL_KEYDOWN);
                send_key(k, is_keydown);
                break;
            }
            default: break;
        }
    }
}



void Device_kb::send_key(uint8_t scancode, bool is_keydown) {
    if(keymap[scancode] != 0) {
        int am_code = keymap[scancode] | (is_keydown ? KEYDOWN_MASK : 0);
        key_buf.push_back(am_code);
    }
}