#include "constants.h"

void updatePos(DVD *dvd)
{
    if (dvd->x >= WIDTH - DVD_WIDTH || dvd->x <= 0) 
        dvd->vx = -dvd->vx;
    if (dvd->y >= HEIGHT - DVD_HEIGHT || dvd->y <= 0) 
        dvd->vy = -dvd->vy;
    dvd->x += dvd->vx;
    dvd->y += dvd->vy;
}
