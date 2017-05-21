#ifndef MINIONS_H
#define MINIONS_H

#include <QGraphicsPixmapItem>

#include <QGraphicsItem>

#include <QObject>



class Minions: public QObject,public QGraphicsPixmapItem {

    Q_OBJECT

public:

    Minions(QGraphicsItem * parent=0);

public slots:

    void move();

};
#endif // MINIONS_H
