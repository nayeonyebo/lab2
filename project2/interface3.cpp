#include "interface3.h"

#include <QGraphicsScene>

Interface3::Interface3(QGraphicsItem *parent): QGraphicsPixmapItem(parent){

    // set graphic


    setPixmap(QPixmap(":/images/southsea.png"));


}
