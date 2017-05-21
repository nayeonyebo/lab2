#include "win.h"

#include <QGraphicsScene>


Win::Win(QGraphicsItem *parent): QGraphicsPixmapItem(parent){

    // set graphic

    setPixmap(QPixmap(":/images/win.jpg"));

}
