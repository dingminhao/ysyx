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