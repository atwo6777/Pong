#ifndef ENEMY_H
#define ENEMY_H

#include <QGraphicsRectItem>
#include <QObject>
class Enemy:public QObject, public QGraphicsRectItem
{
    Q_OBJECT
public:
public slots:
    void move();
private:
    int direction = -1;
};

#endif // ENEMY_H
