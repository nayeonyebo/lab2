#include "lose.h"

#include <QGraphicsScene>


Lose::Lose(QGraphicsItem *parent): QGraphicsPixmapItem(parent){

    // set graphic

    setPixmap(QPixmap(":/images/lose.jpg"));

}
