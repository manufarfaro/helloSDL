/********************************************
 * helloSDL - A first approach to SDL2 on C *
 ********************************************/

#include <stdio.h>
#include "SDL2/SDL.h"


const int SCREEN_WIDTH = 640;
const int SCREEN_HEIGHT = 480;
const char* APP_TITLE = "Hello SDL!";

int main(int argc, char* args[]){
  // The window
  SDL_Window* window = NULL;

  // The window's Surface
  SDL_Surface* screenSurface = NULL;

  // SDL Init
  if ( SDL_Init( SDL_INIT_VIDEO ) < 0 ){
    printf( "SDL Could not initalize! SDL Error: %s \n", SDL_GetError() );
  } else {

    // Create Window
    window = SDL_CreateWindow( APP_TITLE, SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED, SCREEN_WIDTH, SCREEN_HEIGHT, SDL_WINDOW_SHOWN );

    if ( window == NULL ){
      printf ( "Window could not be created. SDL Error: %s", SDL_GetError() );
    } else {
      screenSurface = SDL_GetWindowSurface( window );

      SDL_FillRect(screenSurface, NULL, SDL_MapRGBA(screenSurface->format, 107, 141, 214, 0));

      SDL_UpdateWindowSurface( window );

      SDL_Delay(5000);
    }
  }
}
