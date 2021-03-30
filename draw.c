#include "SDL2/SDL.h"
#include "constants.h"

void render(SDL_Renderer *renderer)
{
    SDL_SetRenderDrawColor(renderer, 0, 0, 0, 255);
    SDL_RenderClear(renderer);

    SDL_SetRenderDrawColor(renderer, 255, 255, 255, 255);
    SDL_Rect rect = {(WIDTH - DVD_WIDTH) / 2  , (HEIGHT - DVD_HEIGHT) / 2, 100, 50};
    SDL_RenderFillRect(renderer, &rect);

    SDL_RenderPresent(renderer);
}

