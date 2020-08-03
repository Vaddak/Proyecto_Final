#include "bala.h"
#include "enemy1.h"
#include "uno.h"
#include "tres.h"
#include "score.h"
#include "bullet.h"
#include <QTimer>
#include <QGraphicsScene>
#include <QtDebug>
#include <QGraphicsItem>

extern uno *game;

bala::bala(QGraphicsItem *parent): QObject(), QGraphicsPixmapItem()
{
    //draw the bullet
    setPixmap(QPixmap(":/Imagenes/fireball.png"));

    //connect
    QTimer *timer =  new QTimer();
    connect(timer,SIGNAL(timeout()),this,SLOT(move()));

    timer->start(50);

}

void bala::move(){

  QList<QGraphicsItem *> colliding_items = collidingItems();
  for(int i=0,n=colliding_items.size();i<n;i++){
      if(typeid (*(colliding_items[i]))==typeid (enemy1)){

          //
          game->score->increase();
          //remove the both
          scene()->removeItem(colliding_items[i]);
          scene()->removeItem(this);
          //delete both
          delete colliding_items[i];
          delete this;
      }
  }
    //move bullet
    setPos(x()+17,y());
    if (pos().y()+pixmap().height() <0){
        scene()->removeItem(this);
        delete this;

    }
}
