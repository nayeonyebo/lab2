#ifndef MINIONS2_H
#define MINIONS2_H

#include <QGraphicsPixmapItem>

#include <QGraphicsItem>

#include <QObject>



class Minions2: public QObject,public QGraphicsPixmapItem {

    Q_OBJECT

public:

    Minions2(QGraphicsItem * parent=0);

public slots:

    void move();

};

#endif // MINIONS2_H
