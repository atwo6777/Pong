#include "player.h"
#include <QDebug>
#include <QKeyEvent>
#include <QLabel>

void Player::keyPressEvent(QKeyEvent *event)
{


    if(event->key() == Qt::Key_Up && y() > 10)
        setPos(x(),y()-10);
    else if(event->key() == Qt::Key_Down && y()+30 < 290 )
        setPos(x(),y()+10);
}

