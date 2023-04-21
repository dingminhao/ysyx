#include <am.h>
#include "npc.h"
#include <stdio.h>
#define KEYDOWN_MASK 0x8000


void __am_input_keybrd(AM_INPUT_KEYBRD_T *kbd) {
  uint32_t key = inl(KBD_ADDR);
  if(key != AM_KEY_NONE) {
    kbd->keycode = ~KEYDOWN_MASK & key;
    kbd->keydown = KEYDOWN_MASK & key;
  } else {
    kbd->keycode = AM_KEY_NONE;
    kbd->keydown = KEYDOWN_MASK & key;
  }
  
}








#define W    400  
#define H    300  
#define SYNC_ADDR (VGACTL_ADDR + 4)
void __am_gpu_init() {
    // int i;
    // int w = W;
    // int h = H;
    // uint32_t* fb = (uint32_t*)(uintptr_t)FB_ADDR;
    // for (i = 0; i < w * h; i++) {
    //     fb[i] = i;
    // }
    // outl(SYNC_ADDR, 1);
}

void __am_gpu_config(AM_GPU_CONFIG_T* cfg) {
    *cfg = (AM_GPU_CONFIG_T){
      .present = true, .has_accel = false,
      .width = W, .height = H,
      .vmemsz = W * H * sizeof(uint32_t)
    };
}

void __am_gpu_fbdraw(AM_GPU_FBDRAW_T* ctl) {

    uint32_t* fb = (uint32_t*)(uintptr_t)FB_ADDR;
    uint32_t* pixels = (uint32_t*)(ctl->pixels);
    int x = ctl->x, y = ctl->y;
    int w = ctl->w, h = ctl->h;
    for (int j = 0; j < h; j++) {
        for (int i = 0; i < w; i++) {
            fb[(y + j) * W + (x + i)] = *(pixels + j * w + i);
        }
    }

    if (ctl->sync) {
        outl(SYNC_ADDR, 1);
    }
}

void __am_gpu_status(AM_GPU_STATUS_T* status) {
    status->ready = true;
}
