#include "phantom.h"


//------------------------------------------------ BUILD THE ENEMY -----------------------------------------------------------
phantom::phantom(): QObject(), QGraphicsItem()
{
  ancho = 300;
  alto  = 200;
  filas = 0;
  columnas = 0;

  // --------- MOVIMIENTO DE ARRIBA A ABAJO  -----------
  timer1 = new QTimer();
  connect(timer1,SIGNAL(timeout()),this,SLOT(movey()));
  timer1->start(100);

 // --------- MOVIMIENTO DE IZQUIERDA A DERECHA --------
  timer = new QTimer();
  connect(timer,SIGNAL(timeout()),this, SLOT(movex()));
  timer->start(100);


}
void phantom::phantom1()
{
   setPos(1000, 200);
   pixmap = new QPixmap(":/Imagenes/phantom1.png");
   pixmap->scaled(100,100);
}

void phantom::phantom2()
{
  setPos(1300, 500);
  pixmap = new QPixmap(":/Imagenes/phantom2.png");
  pixmap->scaled(100,100);
}



//------------------------------------------------- MOVIMIENTO DEL ENEMIGO --------------------------------------------------------
void phantom::movey()
{
  int n = y();
  if(n>1100){
      m = true;
    }
  else if(n<150){
      m = false;
    }

  if(m==true){
      n = n - e;
      setPos(x(),n);
    }
  else if(m==false){
      n = n + e;
      setPos(x(),n);
    }
}


void phantom::movex()
{
  int n = x();
  if(n>1590){
      m = true;
    }
  else if(n<1000){
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

QRectF phantom::boundingRect() const
{
    return QRectF(-ancho/2,-alto/2,ancho,alto);
}


void phantom::paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget)
{
  painter->drawPixmap(-ancho/2,-alto/2,*pixmap,columnas,0,ancho,alto);
}

