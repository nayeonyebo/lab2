#include "enemyhealth.h"
#include <QFont>



Enemyhealth::Enemyhealth(QGraphicsItem *parent): QGraphicsTextItem(parent){

    enemyhealth = 30;


    // draw the text

    setPlainText(QString("Health: ") + QString::number(enemyhealth)); // Health: 30

    setDefaultTextColor(Qt::red);

    setFont(QFont("times",18));

}



void Enemyhealth::decrease(){

    enemyhealth--;

    setPlainText(QString("Health: ") + QString::number(enemyhealth)); // Health: 29

}



int Enemyhealth::getEnemyhealth(){

    return enemyhealth;

}
