#ifndef TURRENT_H
#define TURRENT_H

#include<QGraphicsPixmapItem>
#include<QObject>
#include<QGraphicsItem>
#include<QMediaPlayer>

class Turrent :public QObject, public QGraphicsPixmapItem{

            Q_OBJECT

        public:

            Turrent(QGraphicsItem * parent=0);

            void keyPressEvent(QKeyEvent * event);

        public slots:

            void spawn();

            void spawnturrentatk();

        private:

            QMediaPlayer * bulletsound;

        };


#endif // TURRENT_H
