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
  scene->addItem(pelican1);


  //------------------- AGREGO ENEMIGOS -----------------------

  //------------------- AGREGO PAREDES ------------------------
    //--------------- UP -------------------
    wall1 = new floor();
    wall1->muro4(0,0);
    scene->addItem(wall1);

    wall2 = new floor();
    wall2->muro4(500,0);
    scene->addItem(wall2);

    wall3 = new floor();
    wall3->muro4(1000,0);
    scene->addItem(wall3);

    wall4 = new  floor();
    wall4->muro4(1500,0);
    scene->addItem(wall4);

    //--------------- DOWN -----------------
    wall5 = new floor();
    wall5->muro4(0,1000);
    scene->addItem(wall5);

    wall6 = new floor();
    wall6->muro4(500,1000);
    scene->addItem(wall6);

    wall7 = new floor();
    wall7->muro4(1000,1000);
    scene->addItem(wall7);

    wall8 = new  floor();
    wall8->muro4(1500,1000);
    scene->addItem(wall8);

    //--------------- LEFT -----------------
    wall9 = new floor();
    wall9->muro4(0,0);
    wall9->setRotation(90);
    scene->addItem(wall9);

    wall10 = new floor();
    wall10->muro4(0,500);
    wall10->setRotation(90);
    scene->addItem(wall10);

    //--------------- RIGHT ----------------
    wall11 = new floor();
    wall11->muro4(1800,0);
    wall11->setRotation(90);
    scene->addItem(wall11);

    wall12 = new floor();
    wall12->muro4(1800,500);
    wall12->setRotation(90);
    scene->addItem(wall12);
}


//-------------------------------------------------- MODO MULTIJUGADOR -----------------------------------------------
void cuatro::mcuatro(QWidget *parent){

 //------------------- AGREGO JUGADORES -----------------------
  pelican1 = new Pelican();
  pelican1->pelican1();
  scene->addItem(pelican1);

  pelican2 = new Pelican();
  pelican2->pelican2();
  scene->addItem(pelican2);

 //------------------- AGREGO ENEMIGOS ------------------------

 //------------------- AGREGO PAREDES -------------------------
  //--------------- UP -------------------
  wall1 = new floor();
  wall1->muro4(0,0);
  scene->addItem(wall1);

  wall2 = new floor();
  wall2->muro4(500,0);
  scene->addItem(wall2);

  wall3 = new floor();
  wall3->muro4(1000,0);
  scene->addItem(wall3);

  wall4 = new  floor();
  wall4->muro4(1500,0);
  scene->addItem(wall4);

  //--------------- DOWN -----------------
  wall5 = new floor();
  wall5->muro4(0,1000);
  scene->addItem(wall5);

  wall6 = new floor();
  wall6->muro4(500,1000);
  scene->addItem(wall6);

  wall7 = new floor();
  wall7->muro4(1000,1000);
  scene->addItem(wall7);

  wall8 = new  floor();
  wall8->muro4(1500,1000);
  scene->addItem(wall8);

  //--------------- LEFT -----------------
  wall9 = new floor();
  wall9->muro4(0,0);
  wall9->setRotation(90);
  scene->addItem(wall9);

  wall10 = new floor();
  wall10->muro4(0,500);
  wall10->setRotation(90);
  scene->addItem(wall10);

  //--------------- RIGHT ----------------
  wall11 = new floor();
  wall11->muro4(1800,0);
  wall11->setRotation(90);
  scene->addItem(wall11);

  wall12 = new floor();
  wall12->muro4(1800,500);
  wall12->setRotation(90);
  scene->addItem(wall12);
}
