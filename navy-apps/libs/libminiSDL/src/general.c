#include <NDL.h>

int SDL_Init(uint32_t flags) {
  printf("SDL_Init\n");
  return NDL_Init(flags);
}

void SDL_Quit() {
  printf("SDL_Quit\n");
  NDL_Quit();
}

char *SDL_GetError() {
  printf("SDL_GetError\n");
  return "Navy does not support SDL_GetError()";
}

int SDL_SetError(const char* fmt, ...) {
  printf("SDL_SetError\n");
  return -1;
}

int SDL_ShowCursor(int toggle) {
  printf("SDL_ShowCursor\n");
  return 0;
}

void SDL_WM_SetCaption(const char *title, const char *icon) {
  printf("SDL_WM_SetCaption\n");
}
