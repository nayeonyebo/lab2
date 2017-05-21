#ifndef MINIONS4_H
#define MINIONS4_H

#include <QGraphicsPixmapItem>

#include <QGraphicsItem>

#include <QObject>



class Minions4: public QObject,public QGraphicsPixmapItem {

    Q_OBJECT

public:

    Minions4(QGraphicsItem * parent=0);

public slots:

    void move();

};

#endif // MINIONS4_H
