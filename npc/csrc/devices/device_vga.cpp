#include "./include/device_vga.h"


Device_vga::Device_vga(){}
Device_vga::~Device_vga(){
    delete vgaregs.fbbuff;
}


             /*screen*/
void Device_vga::init_screen() {
    SDL_Window* window = NULL;
    char title[128];
    sprintf(title, "%s-NPC","DMH");
    SDL_Init(SDL_INIT_VIDEO);
    SDL_CreateWindowAndRenderer(
        SCREEN_W * 2,
        SCREEN_H * 2,
        0,
        &window,
        &renderer
    );
    SDL_SetWindowTitle(window, title);  //设置窗口名称
    texture = SDL_CreateTexture(renderer, SDL_PIXELFORMAT_ARGB8888, 
    SDL_TEXTUREACCESS_STATIC, SCREEN_W, SCREEN_H);

}

uint32_t Device_vga::screen_width() {
    return SCREEN_W;
}

uint32_t Device_vga::screen_height() {
    return SCREEN_H;
}

uint32_t Device_vga::screen_size() {
    return screen_width() * screen_height();
}

void Device_vga::update_screen() {
  SDL_UpdateTexture(texture, NULL, vgaregs.fbbuff, SCREEN_W * sizeof(uint32_t));
  SDL_RenderClear(renderer);
  SDL_RenderCopy(renderer, texture, NULL, NULL);
  SDL_RenderPresent(renderer);
}


         /*VGA*/
void Device_vga::vga_update_screen() {
    if(vgaregs.sync) {
        update_screen();
        vgaregs.sync = 0;
    }
}

void Device_vga::update() {
    vga_update_screen();
    vgaregs.sync = 0;
}

void Device_vga::init(string name) {
    // vga 空间赋值
    vgaregs.fbbuff = new uint32_t[screen_size()]; 

    string ctr(name);
    string fb(name);
    ctr += "ctr";
    fb += "fb";

    IOMap ctr_I;
    ctr_I.name = ctr;
    ctr_I.low = VGACTL_ADDR;
    ctr_I.high = VGACTL_ADDR + 8;

    IOMap fb_I;
    fb_I.name = fb;
    fb_I.low = FB_ADDR;
    fb_I.high = FB_ADDR + screen_size() * sizeof(uint32_t);

    device_info.push_back(ctr_I);
    device_info.push_back(fb_I);

    init_screen();
}

void Device_vga::write(paddr_t addr, word_t data, uint32_t len) {
    uint64_t offset;
    if(atRange(device_info[0].low, device_info[0].high, addr)) {
        offset = addr - device_info[0].low;
        assert(offset == 0 || offset == 4);
        if(offset == 0) { //得到width
            vgaregs.screensize = (uint32_t)data;
        } else if(offset == 4) {
            vgaregs.sync = (uint32_t)data;
        } else {
            printf("vga is wrong!");
        }
    }
    else if(atRange(device_info[1].low, device_info[1].high, addr)){
        offset = (uint64_t)vgaregs.fbbuff + addr - device_info[1].low;
        switch(len) {
            case 4:
                *(uint32_t *)offset = (uint32_t)data;
                break;

            case 8:
                *(uint64_t *)offset = (uint64_t)data;
            break;
            default:
                printf("len:%d\n", len);
                assert(0);
                break;
        }
    }
} 

word_t Device_vga::read(paddr_t addr) {
    word_t data;
    paddr_t offset;
    if(atRange(device_info[0].low, device_info[0].high, addr)) {
        offset = addr - device_info[0].low;
        assert(offset == 0 || offset == 4);
        if(offset == 0) {
            data = vgaregs.screensize;
        } else if(offset == 4) {
            data = vgaregs.sync;
        }
    } else if(atRange(device_info[1].low, device_info[1].high, addr)){
        offset = addr - device_info[1].low;
        data = *(vgaregs.fbbuff + offset);
    } else {
        printf("read Wrong!");
        assert(0);
    }
    return data;
}

