#include "demo.h"

int main( int argc, char* args[] )
{
	SDL_Instance instance;

	if (init_instance(&instance) != 0)
	{
		return (1);
	}
	while ("C is fun")
	{
		SDL_SetRenderDrawColor(instance.renderer, 0, 0, 0, 0);
		SDL_RenderClear(instance.renderer);
		draw_stuff(&instance);
		SDL_RenderPresent(instance.renderer);
	}
	return (0);
}
