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
    else if(event->key() == Qt::Key_F1)
        printf("This is the game of Pong\nThe game plays similarly to the classic game.\nMove up or down using the directional arrow keys up and down.\nPress F1 to have instructions sent to the screen.\n");
}

