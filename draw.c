#include "SDL2/SDL.h"
#include "constants.h"

void render(SDL_Renderer *renderer, DVD dvd)
{
    SDL_SetRenderDrawColor(renderer, 0, 0, 0, 255);
    SDL_RenderClear(renderer);

    SDL_SetRenderDrawColor(renderer, 255, 255, 255, 255);
    SDL_Rect rect = {dvd.x, dvd.y, DVD_WIDTH, DVD_HEIGHT};
    SDL_RenderFillRect(renderer, &rect);

    SDL_RenderPresent(renderer);
}

