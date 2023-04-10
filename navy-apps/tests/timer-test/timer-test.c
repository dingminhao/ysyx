#include <stdio.h>
#include <unistd.h>
#include <sys/time.h>
uint32_t NDL_GetTicks() {
  static struct timeval tv;
  static uint32_t time_ms;
  gettimeofday(&tv, NULL);
  time_ms = tv.tv_sec * 1000 + tv.tv_usec / 1000;
  return time_ms;
}
int main() {
  __uint32_t last, now;
  now = NDL_GetTicks();
  last = now;
  int i;
  while (1) {
    now = NDL_GetTicks();
    if (now - last >= 1000) {
      last = now;
      printf("timer-test:%d\n", i++);
    }
  }
  return 0;
}
