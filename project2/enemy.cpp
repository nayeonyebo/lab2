#include "enemy.h"

#include <QTimer>

#include <QGraphicsScene>

#include <QList>

#include <stdlib.h> // rand() -> really large int

#include "game.h"




extern Game * game;



Enemy::Enemy(QGraphicsItem *parent): QObject(), QGraphicsPixmapItem(parent){


    setPos(850,570);



    // drew the rect

    setPixmap(QPixmap(":/images/biblethump.png"));

    setTransformOriginPoint(50,50);



    // make/connect a timer to move() the enemy every so often

    QTimer * timer = new QTimer(this);

    connect(timer,SIGNAL(timeout()),this,SLOT(move()));



    // start the timer

    timer->start(70);

}



void Enemy::move(){

    // move enemy down

    setPos(x()-1.5,y());

    //colliding decrease health

    QList<QGraphicsItem *> colliding_items = collidingItems();

    for (int i = 0, n = colliding_items.size(); i < n; ++i){

        if (typeid(*(colliding_items[i])) == typeid(Turrent)){

            game->health->decrease();

            scene()->removeItem(this);

            delete this;
        }

        if(game->health->getHealth()<1){
            game->lose = new Lose();
            game->lose->setPos(0,0);
            scene()->addItem(game->lose);

     }
}


    // destroy enemy when it goes out of the screen

    if (pos().x()<200){




        scene()->removeItem(this);

        delete this;

    }

}
