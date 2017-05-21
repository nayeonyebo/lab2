
#include "enemyturrent.h"

#include <QGraphicsScene>


Enemyturrent::Enemyturrent(QGraphicsItem *parent): QGraphicsPixmapItem(parent){

    // set graphic

    setPixmap(QPixmap(":/images/guldan.png"));

}
