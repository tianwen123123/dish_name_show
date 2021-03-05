#include "imagechange.h"

imageChange::imageChange()
{
    int index = 1;
    this->index = index;
}

char* imageChange:: NextImage()
{
    if(index==0)
    {
        index++;
    }
    else if(index==1)
    {
        index = 0;
    }
    return images[index];
}
