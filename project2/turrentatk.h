#ifndef TURRENTATK_H
#define TURRENTATK_H

#include<QGraphicsPixmapItem>
#include<QGraphicsItem>
#include<QObject>

class Turrentatk:public QObject,public QGraphicsPixmapItem{
    Q_OBJECT
public:

    Turrentatk(QGraphicsItem *parent=0);

public slots:

    void move();
};

#endif // TURRENTATK_H
