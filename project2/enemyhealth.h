#ifndef ENEMYHEALTH_H
#define ENEMYHEALTH_H

#include <QGraphicsTextItem>

class Enemyhealth: public QGraphicsTextItem{

public:

    Enemyhealth(QGraphicsItem * parent=0);

    void decrease();

    int getEnemyhealth();

private:

    int enemyhealth;

};

#endif // ENEMYHEALTH_H
