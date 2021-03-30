#ifndef CONSTANTS_H
#define CONSTANTS_H

#include <SDL2/SDL_image.h>

#define WIDTH 1920
#define HEIGHT 1080

#define DVD_WIDTH 300
#define DVD_HEIGHT 140

#define SPEED 10

typedef struct DVD DVD;
struct DVD
{
    int x, y, vx, vy;
    SDL_Texture *dvdLogo;
    int red, green, blue;
};

#endif
