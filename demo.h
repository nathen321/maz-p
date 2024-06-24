#ifndef _DEMO_H_
#define _DEMO_H_

#include "include/SDL.h"
#include <stdio.h>
#include <math.h>
#include <stdio.h>
#include <string.h>

#define WINDOW_WIDTH 1000
#define WINDOW_HEIGHT 500

/* basic structur */
typedef struct SDL_Instance
{
	SDL_Window *window;
	SDL_Renderer *renderer;
} SDL_Instance;

typedef struct
{
    int x;
    int y;
    int dir;
}PLAYER_POSIX;

int init_instance (SDL_Instance *);
void draw_stuff(SDL_Instance *);
int poll_events();

#endif

