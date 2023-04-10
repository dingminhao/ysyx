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
  return 0;
}

size_t fb_write(const void *buf, size_t offset, size_t len) {
  return 0;
}

void init_device() {
  Log("Initializing devices...");
  ioe_init();
}
