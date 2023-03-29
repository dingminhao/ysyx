#include <am.h>
#include <nemu.h>
#define W    400  
#define H    300  
#define SYNC_ADDR (VGACTL_ADDR + 4)

void __am_gpu_init() {
}

void __am_gpu_config(AM_GPU_CONFIG_T *cfg) {
  uint32_t w_h= inl(VGACTL_ADDR);
  uint32_t h = w_h & 0xffff;
  uint32_t w = w_h >> 16;
  *cfg = (AM_GPU_CONFIG_T) {
    .present = true, .has_accel = false,
    .width = w, .height = h,
    .vmemsz = 0
  };
}

void __am_gpu_fbdraw(AM_GPU_FBDRAW_T *ctl) {
  if (ctl->sync) {
  uint32_t* fb = (uint32_t*)(uintptr_t)FB_ADDR;
  uint32_t* pixels = (uint32_t*)(ctl->pixels);
  int x = ctl->x, y = ctl->y;
  int w = ctl->w, h = ctl->h;
  for (int j = 0; j < h; j++) {
    for (int i = 0; i < w; i++) {
      fb[(y + j) * W + (x + i)] = *(pixels + j * w + i);
    }
  }

    outl(SYNC_ADDR, 1);
  }
}

void __am_gpu_status(AM_GPU_STATUS_T *status) {
  status->ready = true;
}
