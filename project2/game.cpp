#include "game.h"

#include <QTimer>

#include <QGraphicsTextItem>

#include <QFont>

#include <QMediaPlayer>

#include <QBrush>

#include <QImage>




Game::Game(QWidget *parent){

    // create the scene

    scene = new QGraphicsScene();

    scene->setSceneRect(0,0,1200,692); // make the scene 1200x1000 instead of infinity by infinity (default)

    setBackgroundBrush(QBrush(QImage(":/images/hbg.jpg")));



    // make the newly created scene the scene to visualize (since Game is a QGraphicsView Widget,

    // it can be used to visualize scenes)

    setScene(scene);

    setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);

    setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);

    setFixedSize(1200,692);



    // create the player

    turrent = new Turrent();

    turrent->setPos(0,450); // TODO generalize to always be in the left of screen

    // make the player focusable and set it to be the current focus

    turrent->setFlag(QGraphicsItem::ItemIsFocusable);

    turrent->setFocus();

    // add the player to the scene

    scene->addItem(turrent);


    //create the enemyturrent

    enemyturrent= new Enemyturrent();

    enemyturrent->setPos(920,460);

    scene->addItem(enemyturrent);





    // spawn enemies

    QTimer * timer = new QTimer();

    QObject::connect(timer,SIGNAL(timeout()),turrent,SLOT(spawn()));

    timer->start(5000);

    //turrentattack

    QTimer * timer1= new QTimer();

    QObject::connect(timer1,SIGNAL(timeout()),turrent,SLOT(spawnturrentatk()));

    timer1->start(6500);


    //create health/enemyhealth

    health = new Health();

    health->setPos(0,425);

    scene->addItem(health);

    enemyhealth = new Enemyhealth();

    enemyhealth->setPos(1075,425);

    scene->addItem(enemyhealth);

    //create interface/description

    interface = new Interface();

    interface->setPos(0,0);

    scene->addItem(interface);

    interface2 = new Interface2();

    interface2->setPos(80,0);

    scene->addItem(interface2);

    interface3 = new Interface3();

    interface3->setPos(160,0);

    scene->addItem(interface3);

    interface4 = new Interface4();

    interface4->setPos(270,0);

    scene->addItem(interface4);



    // play background music

    QMediaPlayer * music = new QMediaPlayer();

    music->setMedia(QUrl("qrc:/sounds/Main_Title.ogg"));

    music->play();


    show();

}
