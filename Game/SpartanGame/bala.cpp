#include "bala.h"
#include "score.h"
#include "bullet.h"
#include <QTimer>
#include <QGraphicsScene>
#include <QtDebug>
#include <QGraphicsItem>
#include "uno.h"
#include "enemy1.h"

extern uno *one;

bala::bala(): QObject(), QGraphicsItem()
{
    //draw the bullet
   pixmap = new QPixmap(":/Imagenes/fireball.png");
   filas=0,columnas=0;
   ancho=55;
   alto=32;
    //connect
    timer =  new QTimer();
    connect(timer,SIGNAL(timeout()),this,SLOT(move()));
    timer->start(50);

}

void bala::move(){

  QList<QGraphicsItem *> colliding_items = collidingItems();
  for(int i=0,n=colliding_items.size();i<n;i++){
      if(typeid (*(colliding_items[i]))==typeid (enemy1)){

          one->score->increase();
          scene()->removeItem(colliding_items[i]);
          scene()->removeItem(this);
          //delete both
          delete colliding_items[i];
          delete this;
      }
  }
    setPos(x()+17,y());



}


QRectF bala::boundingRect() const
{
    return QRectF(-ancho/2,-alto/2,ancho,alto);
}


void bala::paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget)
{
  painter->drawPixmap(-ancho/2,-alto/2,*pixmap,columnas,0,ancho,alto);
}
