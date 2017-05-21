#include "turrentatk.h"
#include "game.h"
#include<QTimer>
#include<QList>
#include "enemy.h"

extern Game * game;

Turrentatk::Turrentatk(QGraphicsItem *parent):QGraphicsPixmapItem(parent){

     //set graphics

    setPixmap(QPixmap(":/images/knife.png"));

    setPos(200,575);

    QTimer * timer = new QTimer(this);

    connect(timer,SIGNAL(timeout()),this,SLOT(move()));

    timer->start(50);
    }

void Turrentatk::move(){

    setPos(x()+1.5,y());

    QList<QGraphicsItem *> colliding_items = collidingItems();

    for (int i = 0, n = colliding_items.size(); i < n; ++i){

        if (typeid(*(colliding_items[i])) == typeid(Enemy)){


            // remove them from the scene (still on the heap)

            scene()->removeItem(colliding_items[i]);

            scene()->removeItem(this);

            // delete them from the heap to save memory

            delete colliding_items[i];

            delete this;


            // return (all code below refers to a non existint bullet)

            return;
        }
}
    if(pos().x()>300){

        scene()->removeItem(this);

        delete this;
    }
}
