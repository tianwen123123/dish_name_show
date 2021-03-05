#ifndef IMAGECHANGE_H
#define IMAGECHANGE_H


class imageChange
{
public:
    imageChange();
    char* NextImage();
    char* images[2] = {":/ret2/red2.png",":/ret2/green2.png"};
    int index;
};
#endif // IMAGECHANGE_H
