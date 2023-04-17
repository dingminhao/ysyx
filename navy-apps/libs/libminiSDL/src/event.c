#include <NDL.h>
#include <SDL.h>
#include <string.h>
#define keyname(k) #k,

static const char *keyname[] = {
  "NONE",
  _KEYS(keyname)
};

int SDL_PushEvent(SDL_Event *ev) {
  
  printf("SDL_PushEvent\n");
  return 0;
}

int SDL_PollEvent(SDL_Event *ev) {
  char key_info[32];
  if (!NDL_PollEvent(key_info, sizeof(key_info)))
    return 0;

  char key_state[3];
  char key_num[15];
  sscanf(key_info, "%s %s", key_state, key_num);
  ev->type = (!strcmp(key_state, "kd")) ? SDL_KEYDOWN : SDL_KEYUP;
  for(int i = 0; i < 83; i++) {
    if(!strcmp(key_num, keyname[i])) {
      
      ev->key.keysym.sym = i;
      break;
    }
  }
  return 1;
}

int SDL_WaitEvent(SDL_Event *event) {
  
  char key_info[32];
  while(!NDL_PollEvent(key_info, sizeof(key_info))) return 0;
  
  char key_state[3];
  char key_num[15];
  sscanf(key_info, "%s %s", key_state, key_num);
  event->type = (!strcmp(key_state, "kd")) ? SDL_KEYDOWN : SDL_KEYUP;
  for(int i = 0; i < 83; i++) {
    if(!strcmp(key_num, keyname[i])) {
      
      event->key.keysym.sym = i;
      break;
    }
  }
  return 1;
}

int SDL_PeepEvents(SDL_Event *ev, int numevents, int action, uint32_t mask) {
  printf("SDL_PeepEvents\n");
  return 0;
}

uint8_t* SDL_GetKeyState(int *numkeys) {
  printf("SDL_GetKeyState\n");
  return NULL;
}
