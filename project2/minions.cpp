#include "minions.h"

#include <QTimer>

#include <QGraphicsScene>

#include <QList>

#include "game.h"

#include"enemy.h"

#include "enemyhealth.h"




extern Game * game; // there is an external global object called game



Minions::Minions(QGraphicsItem *parent): QObject(), QGraphicsPixmapItem(parent){

    // draw graphics

    setPixmap(QPixmap(":/images/patches.png"));






    // make/connect a timer to move() the bullet every so often

    QTimer * timer = new QTimer(this);

    connect(timer,SIGNAL(timeout()),this,SLOT(move()));



    // start the timer

    timer->start(50);

}



void Minions::move(){

    // get a list of all the items currently colliding with this bullet

    QList<QGraphicsItem *> colliding_items = collidingItems();
    QList<QGraphicsItem *> colliding_items1 = collidingItems();


    // if one of the colliding items is an Enemy, destroy both the bullet and the enemy

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

        for(int i=0,n=colliding_items1.size();i<n;++i){

            if(typeid(*(colliding_items1[i]))==typeid(Enemyturrent)){

                game->enemyhealth->decrease();
                scene()->removeItem(this);
                delete this;
                return;
            }

            if(game->enemyhealth->getEnemyhealth()<1){
                game->win = new Win();
                game->win->setPos(0,0);
                scene()->addItem(game->win);
        }


        }

    }



    // if there was no collision with an Enemy, move the bullet forward

    setPos(x()+1.5,y());

    // if the bullet is off the screen, destroy it

    if (pos().x()>900){

        scene()->removeItem(this);

        delete this;

    }

}
