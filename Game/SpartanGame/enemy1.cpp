#include "enemy1.h"


//------------------------------------------------ BUILD THE ENEMY -----------------------------------------------------------
enemy1::enemy1(int x_, int y_): QObject(), QGraphicsItem()
{
   setPos(x_, y_);
   pixmap = new QPixmap(":/Imagenes/grunt1.png"); //izq
   pixmap->scaled(100,100);
   ancho = 242;
   alto  = 250;
   filas = 0;
   columnas = 0;

   // -------------------- SPRITE -----------------------
   timer1 = new QTimer();
   QTimer *tim = new QTimer();
   tim->start(100);
   connect(tim,SIGNAL(timeout()),this,SLOT(gruntact()));


   // --------- MOVIMIENTO DE IZQUIERDA A DERECHA ---------
   timer = new QTimer();
   connect(timer,SIGNAL(timeout()),this, SLOT(move()));
   timer->start(100);
}



//------------------------------------------------- MOVE THE ENEMY --------------------------------------------------------
void enemy1::gruntact()
{
  columnas +=276;
  if(columnas >=800)
  {
      columnas =0;
  }
  this->update(-ancho/2,-alto/2,ancho,alto);
}


void enemy1::move()
{
  int n = x();
  if(n>1700){
      pixmap = new QPixmap(":/Imagenes/grunt1.png");
      m = true;
    }
  else if(n<500){
      pixmap = new QPixmap(":/Imagenes/grunt1right.png");
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


//------------------------------------------------- DRAW THE ENEMY --------------------------------------------------------
QRectF enemy1::boundingRect() const
{
    return QRectF(-ancho/2,-alto/2,ancho,alto);
}


void enemy1::paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget)
{
  painter->drawPixmap(-ancho/2,-alto/2,*pixmap,columnas,0,ancho,alto);
}
