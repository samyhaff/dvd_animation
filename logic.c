#include "constants.h"
#include <stdlib.h>

void updatePos(DVD *dvd)
{
    if (dvd->x >= WIDTH - DVD_WIDTH || dvd->x <= 0) 
    {
        dvd->vx = -dvd->vx;
        dvd->red = rand() % 256;
        dvd->green = rand() % 256;
        dvd->blue = rand() % 256;
    }
    if (dvd->y >= HEIGHT - DVD_HEIGHT || dvd->y <= 0) 
    {
        dvd->vy = -dvd->vy;
        dvd->red = rand() % 256;
        dvd->green = rand() % 256;
        dvd->blue = rand() % 256;
    }
    dvd->x += dvd->vx;
    dvd->y += dvd->vy;
}
