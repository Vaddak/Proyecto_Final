#include "muro.h"

muro::muro(int w_, int h_, int x, int y)
{
    w = w_;
    h = h_;
    posx = x;
    posy = y;

}

int muro::getW()
{
    return w;
}


int muro::getH()
{
    return h;
}


void muro::setW(int ancho)
{
    w = ancho;
}


void muro::setH(int altura)
{
    h = altura;
}


int muro::getPosx()
{
    return posx;
}

void muro::setPosx(int px)
{
    posx=px;
}

int muro::getPosy()
{
    return posy;
}

void muro::setPosy(int py)
{
    posy = py;
}

QRectF muro::boundingRect() const
{
  return QRectF(posx,-posy,w,h);
}


void muro::muro1()
{
  uno = new QPixmap(":/Imagenes/spartan2.png"); //Cargo la imagen del spartan
}


void muro::muro2()
{

}


void muro::muro3()
{

}


void muro::muro4()
{

}

