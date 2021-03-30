#include <SDL2/SDL.h>

int processQuit(SDL_Event *eventPtr) 
{
    while (SDL_PollEvent(eventPtr)) 
    {
        switch (eventPtr->type) 
        {
            case SDL_QUIT:
                return 1;
            break;
            case SDL_KEYDOWN:
            {
                switch (eventPtr->key.keysym.sym)
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
