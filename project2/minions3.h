#ifndef MINIONS3_H
#define MINIONS3_H

#include <QGraphicsPixmapItem>

#include <QGraphicsItem>

#include <QObject>



class Minions3: public QObject,public QGraphicsPixmapItem {

    Q_OBJECT

public:

    Minions3(QGraphicsItem * parent=0);

public slots:

    void move();

};

#endif // MINIONS3_H
