#ifndef BALL_H
#define BALL_H

#include <QGraphicsRectItem>
#include <QObject>

class Ball:public QObject, public QGraphicsRectItem
{
    Q_OBJECT
public:
    Ball();
    int yPos;
    void update();
public slots:
    void move();
private:
    double xSpeed = -.3;
    double ySpeed = -.8;
    int npcscore = 0;
    int pcscore = 0;
};

#endif // BALL_H
