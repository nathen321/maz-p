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
		if (poll_events() == 1)
			break;
		SDL_RenderPresent(instance.renderer);
	}
	SDL_DestroyRenderer(instance.renderer);
	SDL_DestroyWindow(instance.window);
	SDL_Quit();

	return (0);
}
