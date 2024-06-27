#include "demo.h"

int main( int argc, char* args[] )
{
	SDL_Instance instance;
	PLAYER_STRUCT player = { PLAYER_SPAWN_X, PLAYER_SPAWN_Y, PLAYER_SPAWN_DIR };
	SDL_Point walls[MAX_WALL_COUNT][2];
	int wallsCount = 0;
	int running = TRUE;

	if (init_instance(&instance) != 0)
	{
		return (1);
	}
	while ("C is fun")
	{
		SDL_SetRenderDrawColor(instance.renderer, 0, 0, 0, 0);
		SDL_RenderClear(instance.renderer);
		if (poll_events() == 1)
			break;
		SDL_RenderPresent(instance.renderer);
	}
	SDL_DestroyRenderer(instance.renderer);
	SDL_DestroyWindow(instance.window);
	SDL_Quit();

	return (0);
}
