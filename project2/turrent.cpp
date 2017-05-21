
#include "turrent.h"

#include <QGraphicsScene>

#include <QKeyEvent>

#include "minions.h"

#include "enemy.h"

#include "minions2.h"

#include<QMediaPlayer>

#include"minions3.h"

#include"minions4.h"

#include "turrentatk.h"




Turrent::Turrent(QGraphicsItem *parent): QGraphicsPixmapItem(parent){

    // set graphic

    setPixmap(QPixmap(":/images/valeera.png"));

}



void Turrent::keyPressEvent(QKeyEvent *event){


    if (event->key() == Qt::Key_1){

        // create a patches

         Minions* minions = new Minions();

        minions->setPos(x()+150,y()+120);

        QMediaPlayer * music1 = new QMediaPlayer();

        music1->setMedia(QUrl("qrc:/sounds/patches.mp3"));

        music1->play();

        scene()->addItem(minions);



        // play patches sound

        if (music1->state() == QMediaPlayer::PlayingState){

            music1->setPosition(0);

        }

        else if (music1->state() == QMediaPlayer::StoppedState){

            music1->play();

        }



    }

    else if (event->key() == Qt::Key_2){

        // create a firefly

         Minions2* minions2 = new Minions2();

        minions2->setPos(x()+150,y()+120);


        QMediaPlayer * music2 = new QMediaPlayer();

        music2->setMedia(QUrl("qrc:/sounds/firefly.mp3"));

        music2->play();
        scene()->addItem(minions2);


        // play firefly

        if (music2->state() == QMediaPlayer::PlayingState){

            music2->setPosition(0);

        }

        else if (music2->state() == QMediaPlayer::StoppedState){

            music2->play();

        }



    }

    else if (event->key() == Qt::Key_3){

        // create southsea deckhand

         Minions3* minions3 = new Minions3();

        minions3->setPos(x()+150,y()+120);

        QMediaPlayer * music3 = new QMediaPlayer();

        music3->setMedia(QUrl("qrc:/sounds/southsea.mp3"));

        music3->play();

        scene()->addItem(minions3);



        // play southsea deckhand sound

        if (music3->state() == QMediaPlayer::PlayingState){

            music3->setPosition(0);

        }

        else if (music3->state() == QMediaPlayer::StoppedState){

            music3->play();

        }

}

    else if (event->key() == Qt::Key_4){

        // create a boar

         Minions4* minions4 = new Minions4();

        minions4->setPos(x()+150,y()+120);


        QMediaPlayer * music4 = new QMediaPlayer();

        music4->setMedia(QUrl("qrc:/sounds/boar.mp3"));

        music4->play();
        scene()->addItem(minions4);


        // play boar

        if (music4->state() == QMediaPlayer::PlayingState){

            music4->setPosition(0);

        }

        else if (music4->state() == QMediaPlayer::StoppedState){

            music4->play();

        }



    }

}


void Turrent::spawn(){

    Enemy * enemy = new Enemy();

        scene()->addItem(enemy);

}

void Turrent::spawnturrentatk(){

    Turrentatk * knife = new Turrentatk();

        scene()->addItem(knife);

}

