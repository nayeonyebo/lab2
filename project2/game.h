#ifndef GAME_H
#define GAME_H

#include <QGraphicsView>

#include <QWidget>

#include <QGraphicsScene>

#include "turrent.h"

#include "enemyturrent.h"

#include "health.h"

#include "enemyhealth.h"

#include "turrentatk.h"

#include "interface.h"

#include "interface2.h"

#include "interface3.h"

#include "interface4.h"

#include "win.h"

#include "lose.h"



class Game: public QGraphicsView{

public:

    Game(QWidget * parent=0);



    QGraphicsScene * scene;

    Turrent * turrent;

    Enemyturrent * enemyturrent;

    Health * health;

    Enemyhealth * enemyhealth;

    Interface * interface;

    Interface2 * interface2;

    Interface3 * interface3;

    Interface4 * interface4;

    Win * win;

    Lose * lose;



};

#endif // GAME_H
