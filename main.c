// TODO Change color when hitting border

#include <SDL2/SDL.h>
#include <SDL2/SDL_image.h>
#include "constants.h"
#include "draw.h"
#include "stdlib.h"
#include "time.h"
#include "logic.h"
#include "input.h"

int main(int argc, char *argv[])
{
    srand(time(NULL));
    SDL_Init(SDL_INIT_VIDEO);

    DVD dvd;

    dvd.x = rand() % (WIDTH - DVD_WIDTH);
    dvd.y = rand() % (HEIGHT - DVD_HEIGHT);

    int directions[] = {-SPEED, SPEED};
    dvd.vx = directions[rand() % 2];
    dvd.vy = directions[rand() % 2];

    SDL_Window *window = SDL_CreateWindow("DVD", SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED, WIDTH, HEIGHT, 0);
    SDL_Renderer *renderer = SDL_CreateRenderer(window, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);
    SDL_Surface *dvdLogoSurface = IMG_Load("dvd_logo.png");

    dvd.dvdLogo = SDL_CreateTextureFromSurface(renderer, dvdLogoSurface);
    SDL_FreeSurface(dvdLogoSurface);

    int done = 0;
    SDL_Event event;

    while (!done)
    {
        updatePos(&dvd);
        render(renderer, dvd);
        done = processQuit(&event);
    }

    SDL_DestroyTexture(dvd.dvdLogo);
    SDL_DestroyWindow(window);
    SDL_DestroyRenderer(renderer);

    SDL_Quit();

    return 0;
}
