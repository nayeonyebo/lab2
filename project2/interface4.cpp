#include "interface4.h"

#include <QGraphicsScene>


Interface4::Interface4(QGraphicsItem *parent): QGraphicsPixmapItem(parent){

    // set graphic


    setPixmap(QPixmap(":/images/boar.png"));

}
