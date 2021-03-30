#include "constants.h"

void updatePos(int* xPtr, int *yPtr, int *vxPtr, int *vyPtr)
{
    if (*xPtr >= WIDTH - DVD_WIDTH || *xPtr <= 0) 
        *vxPtr = -*vxPtr;
    if (*yPtr >= HEIGHT - DVD_HEIGHT || *yPtr <= 0) 
        *vyPtr = -*vyPtr;
    *xPtr += *vxPtr;
    *yPtr += *vyPtr;
}
