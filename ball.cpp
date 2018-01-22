#include "ball.h"

Ball::Ball()
{

}

void Ball::update()
{
    xSpeed *= -1;
    ySpeed *= -1;
}



void Ball::move()
{
    if( ySpeed >= 0 && ySpeed < 2)
        ySpeed += .0001;
    else if( ySpeed < 0 && ySpeed > -2)
        ySpeed -= .0001;

    if( xSpeed >= 0 && xSpeed < 2)
        xSpeed += .0001;
    else if( xSpeed < 0 && xSpeed > -2)
        xSpeed -= .0001;


    setPos(x()+xSpeed,y()+ySpeed);
    yPos = y();
    if( x() <= 0)
    {
        npcscore++;
        setPos(200,150);
        xSpeed = -1*xSpeed;
    }
    else if( x() >= 400 )
    {
        pcscore++;
        setPos(200,150+ySpeed);
        xSpeed = -1*xSpeed;
    }
   else
    {
        if(y() <= 0)
            ySpeed = -1*ySpeed;
        else if( y() >= 290)
            ySpeed = -1*ySpeed;

     //       xSpeed = -1 * xSpeed + .001;
      //      ySpeed = -1 * ySpeed + .001;
    }

}
