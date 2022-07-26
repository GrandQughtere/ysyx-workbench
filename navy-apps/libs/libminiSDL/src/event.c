#include <NDL.h>
#include <SDL.h>
#include <string.h>
#include <assert.h>

#define keyname(k) #k,
uint8_t keyState[83];

static const char *keyname[] = {
  "NONE",
  _KEYS(keyname)
};

static int SDLK_keycode[] = {
  SDLK_NONE ,
  _KEYS(enumdef)
};


int SDL_PushEvent(SDL_Event *ev) {
  assert(0);
  return 0;
}

int SDL_PollEvent(SDL_Event *ev) {
  char buf[64];

  if( NDL_PollEvent(buf, sizeof(buf)) ) {
    char *src = buf;
    char keydown[5];
    char keycode[10];
    int i = 0;
    while( *src != ' ' ) {
      keydown[i] = *src ;
      i ++ ;
      src++;
    }

    keydown[i] = '\0';
    src++;  //jump the ' '
    if( strcmp( keydown, "kd" )==0 ) ev->type = SDL_KEYDOWN;
    if( strcmp( keydown, "ku" )==0 ) ev->type = SDL_KEYUP;
    
    i=0;
    while( *src != '\n' ) {
      keycode[i] = *src ;
      i++;
      src ++ ;
    }
    keycode[i] = '\0';

    for(int i=0; i<83; i++) {
      if( strcmp( keycode, keyname[i])==0 ) ev->key.keysym.sym = SDLK_keycode[i];
    }
    keyState[ev->key.keysym.sym] = (ev->type==SDL_KEYDOWN) ;

    return 1;
  }
  
  return 0;
}

int SDL_WaitEvent(SDL_Event *event) {

  while( !SDL_PollEvent(event) ) ;

  return 1;

}

int SDL_PeepEvents(SDL_Event *ev, int numevents, int action, uint32_t mask) {
  assert(0);
  return 0;
}



uint8_t* SDL_GetKeyState(int *numkeys) {

  return keyState;
}

