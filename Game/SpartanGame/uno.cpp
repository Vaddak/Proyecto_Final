#include "uno.h"
#include "ui_uno.h"
#include "spartan.h"

uno::uno(QWidget *parent) :
  QDialog(parent),
  ui(new Ui::uno)

{
  ui->setupUi(this);
  scene = new QGraphicsScene(0,0,6000,1000);
  //scene->setBackgroundBrush(QBrush(QImage(":/Imagenes/mapa1.jpg")));
  ui->graphicsView->setScene(scene);


}


//------------------------------------------------------ MODO SOLITARIO --------------------------------------------------------------
void uno::suno(QWidget *parent)
{

  //-------------- AGREGO PERSONAJES  ----------------------------

  player1 = new Spartan(); //genera el personaje de la clase Spartan
  player1->spartan1();
  scene->addItem(player1); //lo agrego a la escena

  //----------------------- AGREGO ENEMIGOS ------------------------
  grunt1 = new covenant();
  grunt1->grunt(1200,680);
  scene->addItem(grunt1);

  grunt2 = new covenant();
  grunt2->grunt(1800,680);
  //grunt2->movegrunt();
  scene->addItem(grunt2);

  grunt3 = new covenant();
  grunt3->grunt(3000,680);
 // grunt3->movegrunt();
  scene->addItem(grunt3);

  grunt4 = new covenant();
  grunt4->grunt(4000,680);
 // grunt4->movegrunt();
  scene->addItem(grunt4);

  grunt5 = new covenant();
  grunt5->grunt(4300,680);
 // grunt5->movegrunt();
  scene->addItem(grunt5);




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

  wall10 = new floor();
  wall10->muro1(3600,900);
  scene->addItem(wall10);

  wall11 = new floor();
  wall11->muro1(4000,900);
  scene->addItem(wall11);

  wall12 = new floor();
  wall12->muro1(4400,900);
  scene->addItem(wall12);

  wall13 = new floor();
  wall13->muro1(4800,900);
  scene->addItem(wall13);

  wall14 = new floor();
  wall14->muro1(5200,900);
  scene->addItem(wall14);

  wall15 = new floor();
  wall15->muro1(5600,900);
  scene->addItem(wall15);

  wall15 = new floor();
  wall15->muro1(5800,900);
  scene->addItem(wall15);
}


//----------------------------------------------------- MODO MULTIJUGADOR ------------------------------------------------------------------------
void uno::muno(QWidget *parent)
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
  grunt1->grunt(1200,680);
  scene->addItem(grunt1);

  grunt2 = new covenant();
  grunt2->grunt(1800,680);
  scene->addItem(grunt2);

  grunt3 = new covenant();
  grunt3->grunt(3000,680);
  scene->addItem(grunt3);

  grunt4 = new covenant();
  grunt4->grunt(4000,680);
  scene->addItem(grunt4);

  grunt5 = new covenant();
  grunt5->grunt(4300,680);
  scene->addItem(grunt5);

  grunt6 = new covenant();
  grunt6->grunt(2400,680);
  scene->addItem(grunt6);

  grunt7 = new covenant();
  grunt7->grunt(5200,680);
  scene->addItem(grunt7);



  //--------------------- AGREGO EL SUELO DEL NIVEL  -----------------------------
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

  wall10 = new floor();
  wall10->muro1(3600,900);
  scene->addItem(wall10);

  wall11 = new floor();
  wall11->muro1(4000,900);
  scene->addItem(wall11);

  wall12 = new floor();
  wall12->muro1(4400,900);
  scene->addItem(wall12);

  wall13 = new floor();
  wall13->muro1(4800,900);
  scene->addItem(wall13);

  wall14 = new floor();
  wall14->muro1(5200,900);
  scene->addItem(wall14);

  wall15 = new floor();
  wall15->muro1(5600,900);
  scene->addItem(wall15);

  wall15 = new floor();
  wall15->muro1(5800,900);
  scene->addItem(wall15);
}

uno::~uno()
{
  delete ui;
}
