#include "interface2.h"

#include <QGraphicsScene>

Interface2::Interface2(QGraphicsItem *parent): QGraphicsPixmapItem(parent){

    // set graphic


    setPixmap(QPixmap(":/images/firefly.png"));


}
