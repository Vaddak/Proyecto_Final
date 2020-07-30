#include "covenant.h"



void covenant::grunt(int x_, int y_, QGraphicsItem *parent)
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
  connect(timer,&QTimer::timeout,this,&covenant::Actualizacion);
  setPos(x_,y_); //donde aparece el personaje
}
