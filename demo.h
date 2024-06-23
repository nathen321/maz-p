#ifndef _DEMO_H_
#define _DEMO_H_

#include <SDL2/SDL.h>
#include <stdio.h>

/* basic structur */
typedef struct SDL_Instance
{
	SDL_Window *window;
	SDL_Renderer *renderer;
} SDL_Instance;

int init_instance (SDL_Instance *);
void draw_stuff(SDL_Instance *);

#endif

