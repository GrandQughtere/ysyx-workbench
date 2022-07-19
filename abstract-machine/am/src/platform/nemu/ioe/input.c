#include <am.h>
#include <nemu.h>

#define KEYDOWN_MASK 0x8000

void __am_input_keybrd(AM_INPUT_KEYBRD_T *kbd) {

//  if( kbd->keycode != AM_KEY_NONE )

    //uint32_t code = inl(KBD_ADDR);
    
      uint32_t code = inl(KBD_ADDR);
      if( code == AM_KEY_NONE ) {
        kbd->keycode = AM_KEY_NONE;
        kbd->keydown = false;
      }
      else {
        kbd->keycode = 1;
        kbd->keydown = code & KEYDOWN_MASK;
      }

   // }

    //kbd->keydown = false;
    //kbd->keycode = AM_KEY_NONE;
    
}

