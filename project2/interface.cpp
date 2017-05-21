#include "interface.h"

#include <QGraphicsScene>


Interface::Interface(QGraphicsItem *parent): QGraphicsPixmapItem(parent){

    // set graphic


    setPixmap(QPixmap(":/images/patches.png"));

}
