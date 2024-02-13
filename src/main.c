#include <SDL2/SDL.h>
#include <SDL2/SDL_render.h>
#include <SDL2/SDL_video.h>
#include <stdio.h>
#include "../lib/lua/src/lua.h"
#include "../lib/lua/src/lualib.h"
#include "../lib/lua/src/lauxlib.h"

#define FALSE 0
#define TRUE 1
#define WINDOW_WIDTH 800
#define WINDOW_HEIGHT 600

SDL_Window* window = NULL;
SDL_Renderer* renderer =  NULL;

void initialize_window(void){
    if (SDL_Init(SDL_INIT_EVERYTHING) != 0){
        fprintf(stderr, "Eroro initializing SDL. \n");
        return FALSE;
    }
    window = SDL_CreateWindow(
            NULL,
            SDL_WINDOWPOS_CENTERED,
            SDL_WINDOWPOS_CENTERED,
            WINDOW_WIDTH,
            WINDOW_HEIGHT,
            SDL_WINDOW_BORDERLESS
            );
    if (!window) {
        fprintf(stderr, "Error creating SDL window. \n");
        return FALSE;
    }
    renderer = SDL_CreateRenderer(window, -1, 0);
    if (!renderer) {
        fprintf(stderr, "Error creating SDL renderer");
        return FALSE;
    }
    return TRUE;
}

int main(int argc, char *argv[]){
    is_running = initialize_window();
    
    while (is_running) {
        proces_input();
        update();
        render();
    }
}
