#include "health.h"
#include <QFont>



Health::Health(QGraphicsItem *parent): QGraphicsTextItem(parent){

    health = 30;


    // draw the text

    setPlainText(QString("Health: ") + QString::number(health)); // Health: 30

    setDefaultTextColor(Qt::red);

    setFont(QFont("times",18));

}



void Health::decrease(){

    health--;

    setPlainText(QString("Health: ") + QString::number(health)); // Health: 2

}



int Health::getHealth(){

    return health;

}
