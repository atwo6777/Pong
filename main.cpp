#include <QApplication>
#include "player.h"
#include <QGraphicsView>
#include <QKeyEvent>
#include "enemy.h"
#include <QTimer>
#include "ball.h"
#include <QLabel>
#include <QGraphicsScene>

int main(int argc, char *argv[ ])
{
    //Control the paddle on the right hand side of the screen using your mouse. Points are scored when your opponent misses the ball. The first player to reach 5 points wins the game.\n");
    /*QMainWindow mainWindow;
        QLabel *label = new QLabel(&mainWindow);
        label->setText("first line\nsecond line");
        mainWindow.show();
*/

    QApplication a(argc, argv);

    QGraphicsScene *scene = new QGraphicsScene();


    Player *paddle = new Player();
    paddle->boundingRect();
    paddle->setRect(0,0,4,30);

    Enemy *npc = new Enemy();
    npc->boundingRect();
    npc->setRect(1,100,4,30);

    Ball *ball = new Ball();
    ball->boundingRect();
    ball->setRect(0,0,4,6);

    scene->addItem(paddle);
    scene->addItem(npc);
    scene->addItem(ball);

    paddle->setFlag(QGraphicsItem::ItemIsFocusable);
    paddle->setFocus();

    QGraphicsView *view = new QGraphicsView(scene);

    view->setFixedSize(400,300);
    scene->setSceneRect(0,0,400,300);
    view->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    view->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);

    paddle->setPos(view->width()-10,view->height()/2);
    npc->setPos(10,paddle->y());
    ball->setPos(view->width()/2,view->height()/2);

    view->show();

    QTimer *timer = new QTimer();
    QObject::connect(timer,SIGNAL(timeout()),npc,SLOT(move()));

    timer->start(10);

    QTimer *gametimer = new QTimer();
    if( ball->collidesWithItem(npc) || ball->collidesWithItem(paddle))
        ball->update();
    QObject::connect(gametimer,SIGNAL(timeout()),ball,SLOT(move()));
    gametimer->start(10);


    return a.exec();
}
