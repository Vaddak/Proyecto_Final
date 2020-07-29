#include "tres.h"
#include "ui_tres.h"

tres::tres(QWidget *parent) :
  QDialog(parent),
  ui(new Ui::tres)
{
  ui->setupUi(this);
  scene = new QGraphicsScene(0,0,3500,1000);
  ui->graphicsView->setScene(scene);


}



// ----------------------------------------------------------- MODO MULTIJUGADOR ------------------------------------------------------
void tres::mtres(QWidget *parent)
{
  //-------------- AGREGO PERSONAJES  ----------------------------
  player1 = new Spartan(); //genera el personaje de la clase Spartan
  player1->spartan1();
  scene->addItem(player1); //lo agrego a la escena

  player2 = new Spartan();
  player2->spartan2();
  scene->addItem(player2);


  //-------------- AGREGO EL SUELO AL NIVEL ----------------------
  wall1 = new floor();
  wall1->muro3(0,900);
  scene->addItem(wall1);

  wall2 = new floor();
  wall2->muro3(400,900);
  scene->addItem(wall2);

  wall3 = new floor();
  wall3->muro3(800,900);
  scene->addItem(wall3);

  wall4 = new floor();
  wall4->muro3(1200,900);
  scene->addItem(wall4);

  wall5 = new floor();
  wall5->muro2(1600,900);
  scene->addItem(wall5);

  wall6 = new floor();
  wall6->muro3(2000,900);
  scene->addItem(wall6);

  wall7 = new floor();
  wall7->muro3(2400,900);
  scene->addItem(wall7);

  wall8 = new floor();
  wall8->muro3(2800,900);
  scene->addItem(wall8);

  wall9 = new floor();
  wall9->muro3(3200,900);
  scene->addItem(wall9);
}


// ----------------------------------------------------------- MODO SOLITARIO ------------------------------------------------------
void tres::stres(QWidget *parent)
{
  //-------------- AGREGO PERSONAJES  ----------------------------
  player1 = new Spartan(); //genera el personaje de la clase Spartan
  player1->spartan1();
  scene->addItem(player1); //lo agrego a la escena


  //-------------- AGREGO EL SUELO AL NIVEL -----------------------
  wall1 = new floor();
  wall1->muro3(0,900);
  scene->addItem(wall1);

  wall2 = new floor();
  wall2->muro3(400,900);
  scene->addItem(wall2);

  wall3 = new floor();
  wall3->muro3(800,900);
  scene->addItem(wall3);

  wall4 = new floor();
  wall4->muro3(1200,900);
  scene->addItem(wall4);

  wall5 = new floor();
  wall5->muro2(1600,900);
  scene->addItem(wall5);

  wall6 = new floor();
  wall6->muro3(2000,900);
  scene->addItem(wall6);

  wall7 = new floor();
  wall7->muro3(2400,900);
  scene->addItem(wall7);

  wall8 = new floor();
  wall8->muro3(2800,900);
  scene->addItem(wall8);

  wall9 = new floor();
  wall9->muro3(3200,900);
  scene->addItem(wall9);
}

tres::~tres()
{
  delete ui;
}
