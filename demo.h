#ifndef _DEMO_H_
#define _DEMO_H_

#include "include/SDL.h"
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <stdio.h>
#include <string.h>

#define TRUE 1
#define FALSE 0

#define WINDOW_WIDTH 1000
#define WINDOW_HEIGHT 500


#define COLOR_WHITE(x) SDL_SetRenderDrawColor(x, 255, 255, 255, 255);
#define COLOR_BLACK(x) SDL_SetRenderDrawColor(x, 0, 0, 0, 255);
#define COLOR_RED(x) SDL_SetRenderDrawColor(x, 255, 0, 0, 255);
#define COLOR_GREEN(x) SDL_SetRenderDrawColor(x, 0, 255, 0, 255);
#define COLOR_BLUE(x) SDL_SetRenderDrawColor(x, 0, 0, 255, 255);

#define FRAME_RENDER_DELAY 25 // Time waited after a frame to start rendering the new one
#define MAX_WALL_COUNT 128
#define MAX_BUFFER_SIZE 20
#define MAP_DATA_SEPERATOR "," // Seperator used in the map.txt file

#define PLAYER_STEP_SIZE 5 // Ammount of pixel the player can move each frame
#define PLAYER_VIEW_RANGE 1000
#define PLAYER_FOV 50 // Ammount of rays cast from the player in 1 degree increments
#define PLAYER_SPAWN_X 50
#define PLAYER_SPAWN_Y 50
#define PLAYER_SPAWN_DIR 0

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
}PLAYER_STRUCT;

int init_instance (SDL_Instance *);
void SendFrame(SDL_Renderer* ren);
int PointDistance(int x1, int y1, int x2, int y2);
void DrawPlayer(SDL_Renderer* ren, PLAYER_STRUCT player);
int PointOnLine(int x1, int y1, int x2, int y2, int tx, int ty);
void DrawWalls(SDL_Renderer* ren, SDL_Point walls[MAX_WALL_COUNT][2], int wallCount);
void DrawRays(SDL_Renderer* ren, PLAYER_STRUCT player, SDL_Point walls[MAX_WALL_COUNT][2], int wallCount);
SDL_Point CreateTarget(int x, int y, int dir, int dist);
PLAYER_STRUCT MovePlayer(PLAYER_STRUCT player);

#endif