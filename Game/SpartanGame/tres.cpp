#include "tres.h"
#include "ui_tres.h"
#include "spartan.h"

tres::tres(QWidget *parent) :
  QDialog(parent),
  ui(new Ui::tres)

{
  ui->setupUi(this);
  scene = new QGraphicsScene(0,0,6000,1000);
  scene->setBackgroundBrush(QBrush(QImage(":/Imagenes/mapa3.jpg")));
  ui->graphicsView->setScene(scene);


}


//------------------------------------------------------ MODO SOLITARIO --------------------------------------------------------------
void tres::stres(QWidget *parent)
{

  //-------------- AGREGO PERSONAJES  ----------------------------

  player1 = new Spartan(); //genera el personaje de la clase Spartan
  player1->spartan1();
  scene->addItem(player1); //lo agrego a la escena

  //----------------------- AGREGO ENEMIGOS ------------------------
  grunt1 = new covenant();
  grunt1->grunt(2400,680);
  scene->addItem(grunt1);

  elite1 = new covenant();
  elite1->elitered(4400,670);
  scene->addItem(elite1);

  elite2 = new covenant();
  elite2->eliteblue(1680,670);
  scene->addItem(elite2);

  elite3 = new covenant();
  elite3->elitered(2000,670);
  scene->addItem(elite3);

  elite4 = new covenant();
  elite4->elitered(2500,670);
  scene->addItem(elite4);

  yanme1 = new covenant();
  yanme1->yanme(1600,123);
  scene->addItem(yanme1);

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
  wall5->muro3(1600,900);
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

  wall10 = new floor();
  wall10->muro3(3600,900);
  scene->addItem(wall10);

  wall11 = new floor();
  wall11->muro3(4000,900);
  scene->addItem(wall11);

  wall12 = new floor();
  wall12->muro3(4400,900);
  scene->addItem(wall12);

  wall13 = new floor();
  wall13->muro3(4800,900);
  scene->addItem(wall13);

  wall14 = new floor();
  wall14->muro3(5200,900);
  scene->addItem(wall14);

  wall15 = new floor();
  wall15->muro3(5600,900);
  scene->addItem(wall15);

  wall15 = new floor();
  wall15->muro3(5800,900);
  scene->addItem(wall15);
}



//----------------------------------------------------- MODO MULTIJUGADOR ------------------------------------------------------------------------
void tres::mtres(QWidget *parent)
{
  //------------------ AGREGO PERSONAJES  ----------------------------
  player1 = new Spartan(); //genera el personaje de la clase Spartan
  player1->spartan1();
  scene->addItem(player1); //lo agrego a la escena

  player2 = new Spartan();
  player2->spartan2();
  scene->addItem(player2);

  //-------------------------- AGREGO ENEMIGOS ----------------------------------

  grunt1 = new covenant();
  grunt1->grunt(2400,680);
  scene->addItem(grunt1);

  grunt2 = new covenant();
  grunt2->grunt(4400,680);
  scene->addItem(grunt2);

  elite1 = new covenant();
  elite1->elitered(900,670);
  scene->addItem(elite1);

  elite2 = new covenant();
  elite2->eliteblue(1680,670);
  scene->addItem(elite2);

  elite3 = new covenant();
  elite3->elitered(2000,670);
  scene->addItem(elite3);

  elite4 = new covenant();
  elite4->elitered(2500,670);
  scene->addItem(elite4);

  elite5 = new covenant();
  elite5->eliteblue(2900,670);
  scene->addItem(elite5);

  yanme1 = new covenant();
  yanme1->yanme(1600,123);
  scene->addItem(yanme1);

  yanme2 = new covenant();
  yanme2->yanme(4900,200);
  scene->addItem(yanme2);

  //--------------------- AGREGO EL SUELO DEL NIVEL  -----------------------------
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
  wall5->muro3(1600,900);
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

  wall10 = new floor();
  wall10->muro3(3600,900);
  scene->addItem(wall10);

  wall11 = new floor();
  wall11->muro3(4000,900);
  scene->addItem(wall11);

  wall12 = new floor();
  wall12->muro3(4400,900);
  scene->addItem(wall12);

  wall13 = new floor();
  wall13->muro3(4800,900);
  scene->addItem(wall13);

  wall14 = new floor();
  wall14->muro3(5200,900);
  scene->addItem(wall14);

  wall15 = new floor();
  wall15->muro3(5600,900);
  scene->addItem(wall15);

  wall15 = new floor();
  wall15->muro3(5800,900);
  scene->addItem(wall15);
}

tres::~tres()
{
  delete ui;
}
