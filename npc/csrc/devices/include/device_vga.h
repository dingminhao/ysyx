#ifndef __DEVICE_VGA_H_
#define __DEVICE_VGA_H_

#include "device_base.h"

#define SCREEN_W 400
#define SCREEN_H 300

class Device_vga : public Device_base{
    typedef struct  
    {
        uint32_t screensize; // 屏幕size
        uint32_t sync; // 同步
        uint32_t* fbbuff; // 显存 存储pixel信息
        
    }Vga_config;

    Vga_config vgaregs;
    SDL_Renderer* renderer = NULL;
    SDL_Texture* texture = NULL;
    SDL_Thread* update_thread; //更新thread
    SDL_mutex* fbbuff_lock; //锁

    private:
        void init_screen(); // 初始化屏幕
        uint32_t screen_width(); // 屏幕宽度
        uint32_t screen_height(); // 屏幕高度
        uint32_t screen_size(); // 屏幕大小
        void update_screen(); // 更新屏幕

    public:
        Device_vga();
        ~Device_vga();
        void vga_update_screen();
        void init(string name);
        void write(paddr_t addr, word_t data, uint32_t len);
        word_t read(paddr_t addr);
        void update(); 

};

#endif

