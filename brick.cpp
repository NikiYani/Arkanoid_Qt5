#include <iostream>
#include "brick.h"

using namespace std;

Brick::Brick(int x, int y)
{
    image.load("_Images/brick.png");
    destroyed = false;
    rect = image.rect();
    rect.translate(x, y);
}

Brick::~Brick()
{
    cout << ("Brick deleted") << endl;
}

QRect Brick::getRect()
{
    return rect;
}

void Brick::setRect(QRect rect)
{
    this->rect = rect;
}

QImage& Brick::getImage()
{
    return image;
}

bool Brick::isDestroyed()
{
    return destroyed;
}

void Brick::setDestroyed(bool destroyed)
{
    this->destroyed = destroyed;
}
