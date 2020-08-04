#include "enemy2.h"

//------------------------------------------------ BUILD THE ENEMY -----------------------------------------------------------
enemy2::enemy2(int x_, int y_): QObject(), QGraphicsItem()
{
   setPos(x_, y_);
   pixmap = new QPixmap(":/Imagenes/elite1.png"); //izq
   pixmap->scaled(100,100);
   ancho = 243;
   alto  = 300;
   filas = 0;
   columnas = 0;

   // -------------------- SPRITE -----------------------
   timer1 = new QTimer();
   QTimer *tim = new QTimer();
   tim->start(100);
   connect(tim,SIGNAL(timeout()),this,SLOT(eliteact()));


  // --------- MOVIMIENTO DE IZQUIERDA A DERECHA --------
   timer = new QTimer();
   connect(timer,SIGNAL(timeout()),this, SLOT(move()));
   timer->start(100);
}



//------------------------------------------------- MOVE THE ENEMY --------------------------------------------------------

void enemy2::eliteact()
{
  columnas +=250;
  if(columnas >=730)
  {
      columnas =0;
  }
  this->update(-ancho/2,-alto/2,ancho,alto);
}


void enemy2::move()
{
  int n = x();
  if(n>1750){
      pixmap = new QPixmap(":/Imagenes/elite1.png");
      pixmap->scaled(100,100);
      m = true;
    }
  else if(n<500){
      pixmap = new QPixmap(":/Imagenes/elite1right.png");
      pixmap->scaled(100,100);
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


//---------------------------------------------------- DRAW THE ENEMY ------------------------------------------------------------
QRectF enemy2::boundingRect() const
{
    return QRectF(-ancho/2,-alto/2,ancho,alto);
}


void enemy2::paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget)
{
  painter->drawPixmap(-ancho/2,-alto/2,*pixmap,columnas,0,ancho,alto);
}
