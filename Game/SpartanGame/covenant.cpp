#include "covenant.h"



void covenant::grunt(int x_, int y_, QGraphicsItem *parent)
{
  timer = new QTimer();
  timermove = new QTimer();
  timermov = new QTimer();
  filas = 0;
  columnas = 0;
  setPos(posx,posy);
  pixmap = new QPixmap(":/Imagenes/grunt1.png");
  pixmap->scaled(100,100);
  ancho = 243;
  alto  = 250;
  timer->start(250);
  connect(timer,&QTimer::timeout,this,&covenant::gruntact);
  setPos(x_,y_);

  timermov->start(500);
  while(timermov){
  connect(timermov,&QTimer::timeout,this,&covenant::gruntright);
 // timermov->setInterval(500);
  break;
    }

  /*timermove->start(1000);
  connect(timermove,&QTimer::timeout,this,&covenant::gruntleft);
  timermove->setInterval(1000);*/



}


void covenant::yanme(int x_, int y_, QGraphicsItem *parent)
{
  setPos(posx,posy);
  pixmap = new QPixmap(":/Imagenes/yanme.png");
  setPos(x_, y_);
}


void covenant::eliteblue(int x_, int y_, QGraphicsItem *parent)
{
  timer = new QTimer();
  filas = 0;
  columnas = 0;
  setPos(posx,posy);
 pixmap = new QPixmap(":/Imagenes/elite1.png"); //Cargo la imagen del grunt
 pixmap->scaled(100,100);
  //dimensiones de c/U de las imagenes del sprite
  ancho = 243;
  alto  = 300;
  timer->start(100);// modifica la velocidad en que itera entre las imagenes
  connect(timer,&QTimer::timeout,this,&covenant::eliteact);
  setPos(x_,y_); //donde aparece el personaje   
}



void covenant::elitered(int x_, int y_, QGraphicsItem *parent)
{
  timer = new QTimer();
  filas = 0;
  columnas = 0;
  setPos(posx,posy);
 pixmap = new QPixmap(":/Imagenes/elite2.png"); //Cargo la imagen del grunt
 // pixmap->scaled(100,100);
  //dimensiones de c/U de las imagenes del sprite
  ancho = 243;
  alto  = 300;
  timer->start(100);// modifica la velocidad en que itera entre las imagenes
  connect(timer,&QTimer::timeout,this,&covenant::eliteact);
  setPos(x_,y_); //donde aparece el personaje

}



//--------------------------------------------------------------- MOVIMIENTO DE ENEMIGOS ---------------------------------------------------------------


//----------------- MOVIMIENTO DE GRUNTS ----------------------
void covenant::gruntright()
{
  pixmap = new QPixmap(":/Imagenes/grunt1right.png");
  pixmap->scaled(100,100);
  setPos(x()+200,y());
  pixmap = new QPixmap(":/Imagenes/grunt1.png");
  pixmap->scaled(100,100);
  setPos(x()-200,y());
}


void covenant::gruntleft()
{
  pixmap = new QPixmap(":/Imagenes/grunt1.png");
  pixmap->scaled(100,100);
  setPos(x()-200,y());
}










int covenant::getPosx()
{
    return this->x();
}

void covenant::setPosx(int px)
{
    posx=px;
}

int covenant::getPosy()
{
    return this->y();
}



void  covenant::setPosy(int py)
{
  posy = py;
}



QRectF covenant::boundingRect() const
{
    return QRectF(-ancho/2,-alto/2,ancho,alto);
}

void covenant::paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget)
{
  painter->drawPixmap(-ancho/2,-alto/2,*pixmap,columnas,0,ancho,alto);
}



void covenant::gruntact()
{
  columnas +=270;
  if(columnas >=800)
  {
      columnas =0;
  }
  this->update(-ancho/2,-alto/2,ancho,alto);
}



void covenant::eliteact()
{
  columnas +=250;
  if(columnas >=730)
  {
      columnas =0;
  }
  this->update(-ancho/2,-alto/2,ancho,alto);
}



