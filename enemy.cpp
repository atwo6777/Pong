#include "enemy.h"







void Enemy::move()
{
    if(y() <= -99)
        direction *= -1;
    else if( y() >= 170)
        direction *= -1;

    setPos(x(),y()+direction);
}
