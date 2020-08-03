#include "floor.h"

floor::floor(int x_, int y_, QGraphicsItem *parent)
{
  filas = 0;
  columnas = 0;
  setPos(posx,posy);
  ancho = 400;
  alto  = 200;
  setPos(x_,y_); //donde aparece el item
}


void floor::muro1()
{
  pixmap = new QPixmap(":/Imagenes/wall1.jpg");
}


void floor::muro2()
{
 pixmap = new QPixmap(":/Imagenes/wall2.jpg");
}


void floor::muro3()
{
 pixmap = new QPixmap(":/Imagenes/wall3.jpg");
}


void floor::muro4()
{
  pixmap = new QPixmap(":/Imagenes/wall4.jpg");
}



int floor::getPosx()
{
    return this->x();
}

void floor::setPosx(int px)
{
    posx=px;
}

int floor::getPosy()
{
    return this->y();
}

void floor::setPosy(int py)
{
  posy = py;
}




void floor::Actualizacion() //se desplaza en las posiciones para mostrar el movimiento de la boca del pacman
{
    columnas +=200;
    if(columnas >=400)
    {
        columnas =0;
    }
    this->update(-ancho/2,-alto/2,ancho,alto);
}

QRectF floor::boundingRect() const
{
    return QRectF(-ancho/2,-alto/2,ancho,alto);
}

void floor::paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget)
{
  painter->drawPixmap(-ancho/2,-alto/2,*pixmap,columnas,0,ancho,alto);
}
