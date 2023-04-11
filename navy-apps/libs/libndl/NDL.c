#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/time.h>
#include <assert.h>
static int evtdev = -1;
static int fbdev = -1;
static int screen_w = 0, screen_h = 0;

uint32_t NDL_GetTicks() {
  static struct timeval tv;
  static uint32_t time_ms;
  gettimeofday(&tv, NULL);
  time_ms = tv.tv_sec * 1000 + tv.tv_usec / 1000;
  return time_ms;
}

int NDL_PollEvent(char *buf, int len) {
  int fd = open("/dev/events", O_RDONLY);
  return read(fd, buf, sizeof(char) * len);
}
static int oc_w, oc_h;
void NDL_OpenCanvas(int *w, int *h) {
  char dispinfo[32];
  int dispinfo_fd = open("/proc/dispinfo", O_RDONLY);
  read(dispinfo_fd, dispinfo, sizeof(dispinfo));
  sscanf(dispinfo, "WIDTH:%d\nHEIGHT:%d\n", &oc_w, &oc_h);
  screen_w = oc_w;
  screen_h = oc_h;
  close(dispinfo_fd);
  // 将全屏幕设置为画布
  if (*w == 0 && *h == 0) {
    *w = oc_w;
    *h = oc_h;
  }


  if (getenv("NWM_APP")) {
    int fbctl = 4;
    fbdev = 5;
    screen_w = *w; screen_h = *h;
    char buf[64];
    int len = sprintf(buf, "%d %d", screen_w, screen_h);
    // let NWM resize the window and create the frame buffer
    write(fbctl, buf, len);
    while (1) {
      // 3 = evtdev
      int nread = read(3, buf, sizeof(buf) - 1);
      if (nread <= 0) continue;
      buf[nread] = '\0';
      if (strcmp(buf, "mmap ok") == 0) break;
    }
    close(fbctl);
  }
}

void NDL_DrawRect(uint32_t *pixels, int x, int y, int w, int h) {
  static int first = 0;
  static int fd;
  if (!first) {
    fd = open("/dev/fb", O_RDWR);
  }
  size_t offset = ((size_t)x << 32) | y;
  size_t len = ((size_t)w << 32) | h;
  lseek(fd, offset, SEEK_SET);
  write(fd, pixels, len);
}

void NDL_OpenAudio(int freq, int channels, int samples) {
}

void NDL_CloseAudio() {
}

int NDL_PlayAudio(void *buf, int len) {
  return 0;
}

int NDL_QueryAudio() {
  return 0;
}

int NDL_Init(uint32_t flags) {
  if (getenv("NWM_APP")) {
    evtdev = 3;
  }

  return 0;
}

void NDL_Quit() {
}
