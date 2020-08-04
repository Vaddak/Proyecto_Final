#include "spartan.h"

Spartan::Spartan(): QObject(), QGraphicsItem()
{
  setPos(100,678); //donde aparece el personaje
  timer = new QTimer();
  filas = 0;
  columnas = 0;
  pixmap = new QPixmap(":/Imagenes/spartan1.png"); //Cargo la imagen del spartan
  //dimensiones de c/U de las imagenes del sprite
  ancho = 280;
  alto  = 288;
  connect(timer,&QTimer::timeout,this,&Spartan::Actualizacion);
  timer->start(110);// modifica la velocidad en que itera entre las imagenes
}



void Spartan::spartan2()
{  
 pixmap = new QPixmap(":/Imagenes/spartan2.png");
 pixmap->scaled(100,100);
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




void Spartan::Actualizacion() //se desplaza en las posiciones para mostrar el movimiento de la boca del personaje
{
    columnas +=300;
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
  //salto
}



void Spartan::right() //desplazamiento del spartan
{
  this->setPos(x()+15,y());
}

void Spartan::shoot()
{

}
