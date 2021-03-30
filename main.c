#include <SDL2/SDL.h>
#include "constants.h"

int processQuit(SDL_Event event) 
{
    while (SDL_PollEvent(&event)) 
    {
        switch (event.type) 
        {
            case SDL_QUIT:
                return 1;
            break;
            case SDL_KEYDOWN:
            {
                switch (event.key.keysym.sym)
                {
                    case SDLK_ESCAPE:
                        return 1;
                    break;
                }
            }
        }
    }
    return 0;
}

int main(int argc, char *argv[])
{
    SDL_Window *window;
    SDL_Renderer *renderer;

    SDL_Init(SDL_INIT_VIDEO);

    window = SDL_CreateWindow("DVD", SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED, WIDTH, HEIGHT, 0);
    renderer = SDL_CreateRenderer(window, -1, SDL_RENDERER_ACCELERATED);

    int done = 0;
    SDL_Event event;

    while (!done)
    {
        done = processQuit(event);

        SDL_SetRenderDrawColor(renderer, 0, 0, 0, 255);
        SDL_RenderClear(renderer);

        SDL_SetRenderDrawColor(renderer, 255, 255, 255, 255);
        SDL_Rect rect = {(WIDTH - DVD_WIDTH) / 2  , (HEIGHT - DVD_HEIGHT) / 2, 100, 50};
        SDL_RenderFillRect(renderer, &rect);

        SDL_RenderPresent(renderer);
                    
        SDL_Delay(100);
    }

    SDL_DestroyWindow(window);
    SDL_DestroyRenderer(renderer);

    SDL_Quit();

    return 0;
}
