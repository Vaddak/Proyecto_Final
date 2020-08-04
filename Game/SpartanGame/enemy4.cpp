#include "enemy4.h"

//------------------------------------------------ BUILD THE ENEMY -----------------------------------------------------------
enemy4::enemy4(int x_, int y_, QGraphicsItem *parent): QObject(), QGraphicsPixmapItem()
{
   setPos(x_, y_);
   pixmap = new QPixmap(":/Imagenes/yanme.png"); //izq
   pixmap->scaled(100,100);
   ancho = 150;
   alto  = 150;
   filas = 0;
   columnas = 0;



  // --------- MOVIMIENTO DE IZQUIERDA A DERECHA --------
   timer = new QTimer();
   connect(timer,SIGNAL(timeout()),this, SLOT(move()));
   timer->start(100);
}



//------------------------------------------------- MOVIMIENTO DEL ENEMIGO --------------------------------------------------------
void enemy4::move()
{
  int n = x();
  if(n>1700){
      pixmap = new QPixmap(":/Imagenes/yanme.png");
      m = true;
    }
  else if(n<200){
      pixmap = new QPixmap(":/Imagenes/yanme.png");
      m = false;
    }

  if(m==true){
      n = n - e;
      setPos(n,y());
    }
  else if(m==false){
      n = n + e;
      setPos(n,y());
    }
}


//----------------------------------------------------------- DRAW THE ENEMY -----------------------------------------------------
QRectF enemy4::boundingRect() const
{
    return QRectF(-ancho/2,-alto/2,ancho,alto);
}


void enemy4::paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget)
{
  painter->drawPixmap(-ancho/2,-alto/2,*pixmap,columnas,0,ancho,alto);
}
