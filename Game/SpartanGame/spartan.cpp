#include "spartan.h"

Spartan::Spartan(QObject *parent) : QObject(parent)
{

    timer = new QTimer();
    filas = 0;
    columnas = 0;
    setPos(posx,posy);
    pixmap = new QPixmap(":/Imagenes/p1.jpg"); //Cargo la imagen del pacman



    //dimensiones de c/U de las imagenes
    ancho = 56;
    alto  = 56;
    timer->start(80);// modifica la velocidad en que itera entre las imagenes
    connect(timer,&QTimer::timeout,this,&Spartan::Actualizacion);
    setPos(350,350); //donde aparece el pacman

}

int Spartan::getPosx()
{
    return this->x();
}

void Spartan::setPosx(int px)
{
    posx=px;
}

int Spartan::getPosy()
{
    return this->y();
}

void Spartan::setPosy(int py)
{
  posy = py;
}




void Spartan::Actualizacion() //se desplaza en las posiciones para mostrar el movimiento de la boca del pacman
{
    columnas +=50;
    if(columnas >=200)
    {
        columnas =0;
    }
    this->update(-ancho/2,-alto/2,ancho,alto);
}

QRectF Spartan::boundingRect() const
{
    return QRectF(-ancho/2,-alto/2,ancho,alto);
}

void Spartan::paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget)
{
  painter->drawPixmap(-ancho/2,-alto/2,*pixmap,columnas,0,ancho,alto);
}




void Spartan::up() //movimiento hacia arriba del pacman
{
  this->setPos(x(),y()-5);
}



void Spartan::right() //movimiento hacia izquierda del pacman
{
  this->setPos(x()+5,y());
}
