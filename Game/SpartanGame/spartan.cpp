#include "spartan.h"

/*Spartan::Spartan(QGraphicsItem *parent) : QObject(), QGraphicsPixmapItem(parent)
{

    timer = new QTimer();
    filas = 0;
    columnas = 0;
    setPos(posx,posy);
   pixmap = new QPixmap(":/Imagenes/spartan1.png"); //Cargo la imagen del spartan
    //dimensiones de c/U de las imagenes del sprite
    ancho = 288;
    alto  = 288;
    timer->start(80);// modifica la velocidad en que itera entre las imagenes
    connect(timer,&QTimer::timeout,this,&Spartan::Actualizacion);
    setPos(350,700); //donde aparece el personaje
}  */

void Spartan::spartan1(QGraphicsItem *parent)
{
  timer = new QTimer();
  filas = 0;
  columnas = 0;
  setPos(posx,posy);
 pixmap = new QPixmap(":/Imagenes/spartan1.png"); //Cargo la imagen del spartan
 pixmap->scaled(100,100);
  //dimensiones de c/U de las imagenes del sprite
  ancho = 288;
  alto  = 288;
  timer->start(110);// modifica la velocidad en que itera entre las imagenes
  connect(timer,&QTimer::timeout,this,&Spartan::Actualizacion);
  setPos(80,690); //donde aparece el personaje
}


void Spartan::spartan2(QGraphicsItem *parent)
{
  timer = new QTimer();
  filas = 0;
  columnas = 0;
  setPos(posx,posy);
 pixmap = new QPixmap(":/Imagenes/spartan2.png"); //Cargo la imagen del spartan
  //dimensiones de c/U de las imagenes del sprite
  ancho = 288;
  alto  = 288;
  timer->start(110);// modifica la velocidad en que itera entre las imagenes
  connect(timer,&QTimer::timeout,this,&Spartan::Actualizacion);
  setPos(90,690); //donde aparece el personaje

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
    columnas +=288;
    if(columnas >=866)
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



void Spartan::up() //salto del spartan
{
  this->setPos(x(),y()-5);
}



void Spartan::right() //desplazamiento del spartan
{
  this->setPos(x()+5,y());
}
