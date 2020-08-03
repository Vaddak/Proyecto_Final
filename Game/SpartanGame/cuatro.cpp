#include "cuatro.h"
#include "ui_cuatro.h"

cuatro::cuatro(QWidget *parent) :
  QDialog(parent),
  ui(new Ui::cuatro)
{
  ui->setupUi(this);
  scene = new QGraphicsScene(0,0,1800,1000);
  scene->setBackgroundBrush(QBrush(QImage(":/Imagenes/mapa4.jpg")));
  ui->graphicsView->setScene(scene);
  pelicans.push_back(pelican1);
  scene->addItem(pelicans.back());
  pelicans.push_back(pelican2);
  scene->addItem(pelicans.back());
  view->setScene(scene);
  view->resize(1800,1000);
}

cuatro::~cuatro()
{
  delete ui;
}

//--------------------------------------------------- MODO SOLITARIO -------------------------------------------------
void cuatro::scuatro(QWidget *parent){

  //------------------- AGREGO JUGADORES ----------------------
  pelican1 = new Pelican();
  pelican1->pelican1();
  //scene->addItem(pelican1);


  //------------------- AGREGO ENEMIGOS -----------------------
  phantom1 = new phantom();
  phantom1->phantom1();
  scene->addItem(phantom1);

  phantom2 = new phantom();
  phantom2->phantom2();
  scene->addItem(phantom2);

  //------------------- AGREGO PAREDES ------------------------
    //--------------- UP -------------------
  wall1 = new floor();
  wall1->muro4(100,-50);
  scene->addItem(wall1);

  wall2 = new floor();
  wall2->muro4(600,-50);
  scene->addItem(wall2);

  wall3 = new floor();
  wall3->muro4(1100,-50);
  scene->addItem(wall3);

  wall4 = new  floor();
  wall4->muro4(1600,-50);
  scene->addItem(wall4);

    //--------------- DOWN -----------------
    wall5 = new floor();
    wall5->muro4(100,1050);
    scene->addItem(wall5);

    wall6 = new floor();
    wall6->muro4(600,1050);
    scene->addItem(wall6);

    wall7 = new floor();
    wall7->muro4(1100,1050);
    scene->addItem(wall7);

    wall8 = new  floor();
    wall8->muro4(1600,1050);
    scene->addItem(wall8);

    //--------------- LEFT -----------------
    wall9 = new floor();
    wall9->muro4(-50,280);
    wall9->setRotation(90);
    scene->addItem(wall9);

    wall10 = new floor();
    wall10->muro4(-50,780);
    wall10->setRotation(90);
    scene->addItem(wall10);

    //--------------- RIGHT ----------------
    wall11 = new floor();
    wall11->muro4(1850,280);
    wall11->setRotation(90);
    scene->addItem(wall11);

    wall12 = new floor();
    wall12->muro4(1850,780);
    wall12->setRotation(90);
    scene->addItem(wall12);
}


//-------------------------------------------------- MODO MULTIJUGADOR -----------------------------------------------
void cuatro::mcuatro(QWidget *parent){

 //------------------- AGREGO JUGADORES -----------------------
  pelican1 = new Pelican();
  pelican1->pelican1();
  //scene->addItem(pelican1);

  pelican2 = new Pelican();
  pelican2->pelican2();
 // scene->addItem(pelican2);

 //------------------- AGREGO ENEMIGOS ------------------------
  phantom1 = new phantom();
  phantom1->phantom1();
  scene->addItem(phantom1);

  phantom2 = new phantom();
  phantom2->phantom2();
  scene->addItem(phantom2);

 //------------------- AGREGO PAREDES -------------------------
  //--------------- UP -------------------
  wall1 = new floor();
  wall1->muro4(100,-50);
  scene->addItem(wall1);

  wall2 = new floor();
  wall2->muro4(600,-50);
  scene->addItem(wall2);

  wall3 = new floor();
  wall3->muro4(1100,-50);
  scene->addItem(wall3);

  wall4 = new  floor();
  wall4->muro4(1600,-50);
  scene->addItem(wall4);

  //--------------- DOWN -----------------
  wall5 = new floor();
  wall5->muro4(100,1050);
  scene->addItem(wall5);

  wall6 = new floor();
  wall6->muro4(600,1050);
  scene->addItem(wall6);

  wall7 = new floor();
  wall7->muro4(1100,1050);
  scene->addItem(wall7);

  wall8 = new  floor();
  wall8->muro4(1600,1050);
  scene->addItem(wall8);

  //--------------- LEFT -----------------
  wall9 = new floor();
  wall9->muro4(-50,280);
  wall9->setRotation(90);
  scene->addItem(wall9);

  wall10 = new floor();
  wall10->muro4(-50,780);
  wall10->setRotation(90);
  scene->addItem(wall10);

  //--------------- RIGHT ----------------
  wall11 = new floor();
  wall11->muro4(1850,280);
  wall11->setRotation(90);
  scene->addItem(wall11);

  wall12 = new floor();
  wall12->muro4(1850,780);
  wall12->setRotation(90);
  scene->addItem(wall12);
}

//---------------------------- PLAYERS MOVING ----------------------------------------
void cuatro::keyPressEvent(QKeyEvent *event)
{
  if(pelicans.size()>0 && pelicans.size()<2){
      if(event->key()==Qt::Key_W){
          pelicans.at(0)->setPos(pelicans.at(0)->x(),pelicans.at(0)->y()-10);
          view->centerOn(pelicans.at(0)->x(),pelicans.at(0)->y()); //se centra en la posicion x,y del personaje

        }
      if(event->key()==Qt::Key_S){
          pelicans.at(0)->setPos(pelicans.at(0)->x(),pelicans.at(0)->y()+10);
          view->centerOn(pelicans.at(0)->x(),pelicans.at(0)->y()); //se centra en la posicion x,y del personaje

        }
      if(event->key()==Qt::Key_A){
          pelicans.at(0)->setPos(pelicans.at(0)->x()-10,pelicans.at(0)->y());
          view->centerOn(pelicans.at(0)->x(),pelicans.at(0)->y()); //se centra en la posicion x,y del personaje

        }
      if(event->key()==Qt::Key_D){
          pelicans.at(0)->setPos(pelicans.at(0)->x()+10,pelicans.at(0)->y());
          view->centerOn(pelicans.at(0)->x(),pelicans.at(0)->y()); //se centra en la posicion x,y del personaje

        }
    }
  else if(pelicans.size()==2){
      Pelican * a = pelicans.at(1); //creo una variable para reemplazar
      if(event->key()==Qt::Key_W){
          pelicans.at(0)->setPos(pelicans.at(0)->x(),pelicans.at(0)->y()-10);
          view->centerOn(pelicans.at(0)->x(),pelicans.at(0)->y()); //se centra en la posicion x,y del personaje

        }
      if(event->key()==Qt::Key_S){
          pelicans.at(0)->setPos(pelicans.at(0)->x(),pelicans.at(0)->y()+10);
          view->centerOn(pelicans.at(0)->x(),pelicans.at(0)->y()); //se centra en la posicion x,y del personaje

        }
      if(event->key()==Qt::Key_A){
          pelicans.at(0)->setPos(pelicans.at(0)->x()-10,pelicans.at(0)->y());
          view->centerOn(pelicans.at(0)->x(),pelicans.at(0)->y()); //se centra en la posicion x,y del personaje

        }
      if(event->key()==Qt::Key_D){
          pelicans.at(0)->setPos(pelicans.at(0)->x()+10,pelicans.at(0)->y());
          view->centerOn(pelicans.at(0)->x(),pelicans.at(0)->y()); //se centra en la posicion x,y del personaje

        }
      if(event->key()==Qt::Key_U){
          pelicans.at(1)->setPos(a->x(),a->y()-10);
          view->centerOn(a->x(),a->y()); //se centra en la posicion x,y del personaje

        }
      if(event->key()==Qt::Key_M){
          pelicans.at(1)->setPos(pelicans.at(0)->x(),pelicans.at(0)->y()+10);
          view->centerOn((a)->x(),a->y()); //se centra en la posicion x,y del personaje

        }
      if(event->key()==Qt::Key_H){
          pelicans.at(1)->setPos(a->x()-10,a->y());
          view->centerOn(a->x(),a->y()); //se centra en la posicion x,y del personaje

        }
      if(event->key()==Qt::Key_K){
          pelicans.at(1)->setPos(pelicans.at(0)->x()+10,pelicans.at(0)->y());
          view->centerOn(a->x(),a->y()); //se centra en la posicion x,y del personaje

        }
    }

}



