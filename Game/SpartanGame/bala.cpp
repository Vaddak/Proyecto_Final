#include "bala.h"
#include <QTimer>
#include <QGraphicsScene>
#include <QtDebug>
#include <QGraphicsItem>
#include "uno.h"
#include "dos.h"
#include "tres.h"
#include "cuatro.h"
#include "enemy1.h"
#include "enemy2.h"
#include "enemy3.h"
#include <QMessageBox>
#include <QFont>


extern uno *one;



bala::bala(): QObject(), QGraphicsItem()
{
   //draw the bullet
   pixmap = new QPixmap(":/Imagenes/fireball.png");
   filas=0, columnas=0;
   ancho=55;
   alto=32;
    //connect
    timer =  new QTimer();
    connect(timer,SIGNAL(timeout()),this,SLOT(move()));
    timer->start(50);



}

//--------------------------- MOVIMIENTO Y ELIMINACION DE ENEMIGOS --------------------------------
void bala::move(){
  setPos(x()+17,y());

  QList<QGraphicsItem *> level1 = collidingItems();
  for(int i=0,n=level1.size();i<n;i++){
      if(typeid (*(level1[i]))==typeid (enemy1)){


          scene()->removeItem(level1[i]);
          scene()->removeItem(this);
          //delete both
          delete level1[i];
          delete this;
      }
  } //LEVEL 1------------------------------------------


  QList<QGraphicsItem *> level2 = collidingItems();
  for(int i=0,n=level2.size();i<n;i++){
      if(typeid (*(level2[i]))==typeid (enemy2)){


          scene()->removeItem(level2[i]);
          scene()->removeItem(this);
          //delete both
          delete level2[i];
          delete this;
      }
  } //LEVEL 2-----------------------------------------



}//move

//-------------------------------- DRAW THE BULLET ---------------------------------------------
QRectF bala::boundingRect() const
{
    return QRectF(-ancho/2,-alto/2,ancho,alto);
}


void bala::paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget)
{
  painter->drawPixmap(-ancho/2,-alto/2,*pixmap,columnas,0,ancho,alto);
}





