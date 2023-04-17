#include <common.h>

#if defined(MULTIPROGRAM) && !defined(TIME_SHARING)
# define MULTIPROGRAM_YIELD() yield()
#else
# define MULTIPROGRAM_YIELD()
#endif

#define NAME(key) \
  [AM_KEY_##key] = #key,

static const char *keyname[256] __attribute__((used)) = {
  [AM_KEY_NONE] = "NONE",
  AM_KEYS(NAME)
};

size_t serial_write(const void *buf, size_t offset, size_t len) {
  for (size_t i = 0; i < len; i++) {
    putch(*(char*)(buf + i));
  }
  return len;
}

size_t events_read(void *buf, size_t offset, size_t len) {
  assert(len > 10);
  AM_INPUT_KEYBRD_T kb = io_read(AM_INPUT_KEYBRD);

  if(kb.keydown) {
    sprintf(buf, "kd %s\n", keyname[kb.keycode]);
  } else {
    sprintf(buf, "ku %s\n", keyname[kb.keycode]);
  }

  if (kb.keycode == 0) {
    return 0;
  }
  return 1;
}

size_t dispinfo_read(void *buf, size_t offset, size_t len) {
  AM_GPU_CONFIG_T dispinfo = io_read(AM_GPU_CONFIG);
  sprintf(buf, "WIDTH:%d\nHEIGHT:%d\n", dispinfo.width, dispinfo.height);
  return 0;
}

size_t fb_write(const void *buf, size_t offset, size_t len) {
  int x = (offset >> 32);
  int y = (offset);
  int w = (len >> 32);
  int h = len;
  AM_GPU_FBDRAW_T fbctrl;
  fbctrl.pixels = (void*)buf;
  fbctrl.sync = true;
  fbctrl.x = x;
  fbctrl.y = y;
  fbctrl.w = w;
  fbctrl.h = h;
  ioe_write(AM_GPU_FBDRAW, &fbctrl);
  return len;
}

void init_device() {
  Log("Initializing devices...");
  ioe_init();
}
