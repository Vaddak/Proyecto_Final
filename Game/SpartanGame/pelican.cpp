#include "pelican.h"

//---------------------  CONSTRUCTORES ----------------------------------------
void Pelican::pelican1(QGraphicsItem *parent)
{
  setPos(400, 400);
  pixmap = new QPixmap(":/Imagenes/pelican1.png");
  pixmap->scaled(100,100);
  ancho = 500;
  alto  = 200;
  filas = 0;
  columnas = 0;
}


void Pelican::pelican2(QGraphicsItem *parent)
{
  setPos(400, 400);
  pixmap = new QPixmap(":/Imagenes/pelican2.png");
  pixmap->scaled(100,100);
  ancho = 519;
  alto  = 200;
  filas = 0;
  columnas = 0;
}


//---------------------- MOVIMIENTO DEL PELICAN -----------------------------------------
void Pelican::up()
{
  this->setPos(x(),y()-30);
}

void Pelican::down()
{
  this->setPos(x(),y()+30);
}

void Pelican::left()
{
  this->setPos(x()-30,y());
}

void Pelican::right()
{
  this->setPos(x()+30,y());
}


//--------------------- DIBUJAR EL PELICAN ---------------------------------------------
QRectF Pelican::boundingRect() const
{
    return QRectF(-ancho/2,-alto/2,ancho,alto);
}


void Pelican::paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget)
{
  painter->drawPixmap(-ancho/2,-alto/2,*pixmap,columnas,0,ancho,alto);
}




