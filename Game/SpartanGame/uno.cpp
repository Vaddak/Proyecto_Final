#include "uno.h"
#include "ui_uno.h"
#include "spartan.h"
uno::uno(QWidget *parent) :
  QDialog(parent),
  ui(new Ui::uno)

{
  ui->setupUi(this);
  scene = new QGraphicsScene(0,0,3500,1000);
  //scene->setBackgroundBrush(QBrush(QImage(":/Imagenes/mapa1.jpg")));
  ui->graphicsView->setScene(scene);

    //-------------- AGREGO PERSONAJES  ----------------------------

  player1 = new Spartan(); //genera el personaje de la clase Spartan
  player1->spartan1();
  scene->addItem(player1); //lo agrego a la escena

  //-------------- AGREGO EL SUELO AL NIVEL -----------------------
  wall1 = new floor();
  wall1->muro1(0,900);
  scene->addItem(wall1);

  wall2 = new floor();
  wall2->muro1(400,900);
  scene->addItem(wall2);

  wall3 = new floor();
  wall3->muro1(800,900);
  scene->addItem(wall3);

  wall4 = new floor();
  wall4->muro1(1200,900);
  scene->addItem(wall4);

  wall5 = new floor();
  wall5->muro1(1600,900);
  scene->addItem(wall5);

  wall6 = new floor();
  wall6->muro1(2000,900);
  scene->addItem(wall6);

  wall7 = new floor();
  wall7->muro1(2400,900);
  scene->addItem(wall7);

  wall8 = new floor();
  wall8->muro1(2800,900);
  scene->addItem(wall8);

  wall9 = new floor();
  wall9->muro1(3200,900);
  scene->addItem(wall9);

}

uno::~uno()
{
  delete ui;
}
