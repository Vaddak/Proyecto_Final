#include "checkpoint.h"


checkpoint::checkpoint(): QObject(), QGraphicsItem()
{
  setPos(1750,700);
  pixmap = new QPixmap(":/Imagenes/save.png");
  pixmap->scaled(100,100);
  ancho = 90;
  alto  = 90;
  filas = 0;
  columnas = 0;
}



QRectF checkpoint::boundingRect() const
{
    return QRectF(-ancho/2,-alto/2,ancho,alto);
}


void checkpoint::paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget)
{
  painter->drawPixmap(-ancho/2,-alto/2,*pixmap,columnas,0,ancho,alto);
}




