#include "covenant.h"


//--------------------------------- CONSTRUCTOR DE CADA ENEMIGO -------------------------------------------
/*covenant::covenant(QGraphicsItem *parent)
{
  setPos(800,670);
  connect(timermove,SIGNAL(timeout()),this,SLOT(second()));
  timermove->start(1000);

  if(segundo==5){
      connect(timermov,SIGNAL(timeout()),this,SLOT(gruntright()));
    }
  else if(segundo>5 && segundo<=10){
      connect(timermov,SIGNAL(timeout()),this,SLOT(gruntleft()));
    }
   timermov->start(800);
}
*/
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




}

//--------------------------------------------------- YANME  --------------------------------------------------------------
void covenant::yanme(int x_, int y_)
{
  setPos(x_, y_);
  pixmap = new QPixmap(":/Imagenes/yanme.png");  
  time = new QTimer();
  connect(time,SIGNAL(timeout()),this,SLOT(yanmemove()));
  time->start(100);
};


void covenant::eliteblue(int x_, int y_, QGraphicsItem *parent)
{
  timer = new QTimer();
  filas = 0;
  columnas = 0;
 // setPos(posx,posy);
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

void covenant::second(){
  if(segundo==10){
      segundo = 0;
    }
  segundo += 1;

}


//--------------------------------------------------------------- MOVIMIENTO DE ENEMIGOS ---------------------------------------------------------------


//----------------- MOVIMIENTO DE GRUNTS ----------------------
void covenant::gruntright()
{
  pixmap = new QPixmap(":/Imagenes/grunt1right.png");
  pixmap->scaled(100,100);
  setPos(x()+50,y());
}


void covenant::gruntleft()
{
  pixmap = new QPixmap(":/Imagenes/grunt1.png");
  pixmap->scaled(100,100);
  setPos(x()-50,y());
}




//----------------- MOVIMIENTO DE YANME ----------------------
void covenant::yanmemove()
{
  int n = x();

  if(n>4800){
      m = true;
    }
  else if(n<800){
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







};










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



