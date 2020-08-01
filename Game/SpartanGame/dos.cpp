#include "dos.h"
#include "ui_dos.h"

dos::dos(QWidget *parent) :
  QDialog(parent),
  ui(new Ui::dos)
{
  ui->setupUi(this);
  scene = new QGraphicsScene(0,0,6000,1000);
  scene->setBackgroundBrush(QBrush(QImage(":/Imagenes/mapa2.jpg")));
  ui->graphicsView->setScene(scene);


}




// ----------------------------------------------------------- MODO MULTIJUGADOR ------------------------------------------------------
void dos::mdos(QWidget *parent)
{
  //-------------- AGREGO PERSONAJES  ----------------------------
  player1 = new Spartan(); //genera el personaje de la clase Spartan
  player1->spartan1();
  scene->addItem(player1); //lo agrego a la escena

  player2 = new Spartan();
  player2->spartan2();
  scene->addItem(player2);


  //------------------- AGREGO ENEMIGOS ----------------------------
  grunt1 = new covenant();
  grunt1->grunt(1600,680);
  scene->addItem(grunt1);

  grunt2 = new covenant();
  grunt2->grunt(3600,680);
  scene->addItem(grunt2);

  elite1 = new covenant();
  elite1->elitered(800,670);
  scene->addItem(elite1);

  elite2 = new covenant();
  elite2->eliteblue(2000,670);
  scene->addItem(elite2);

  elite3 = new covenant();
  elite3->eliteblue(2560,670);
  scene->addItem(elite3);

  elite4 = new covenant();
  elite4->elitered(4000,670);
  scene->addItem(elite4);

  elite5 = new covenant();
  elite5->elitered(4800,670);
  scene->addItem(elite5);


  //-------------- AGREGO EL SUELO AL NIVEL ----------------------
  wall1 = new floor();
  wall1->muro2(0,900);
  scene->addItem(wall1);

  wall2 = new floor();
  wall2->muro2(400,900);
  scene->addItem(wall2);

  wall3 = new floor();
  wall3->muro2(800,900);
  scene->addItem(wall3);

  wall4 = new floor();
  wall4->muro2(1200,900);
  scene->addItem(wall4);

  wall5 = new floor();
  wall5->muro2(1600,900);
  scene->addItem(wall5);

  wall6 = new floor();
  wall6->muro2(2000,900);
  scene->addItem(wall6);

  wall7 = new floor();
  wall7->muro2(2400,900);
  scene->addItem(wall7);

  wall8 = new floor();
  wall8->muro2(2800,900);
  scene->addItem(wall8);

  wall9 = new floor();
  wall9->muro2(3200,900);
  scene->addItem(wall9);

  wall10 = new floor();
  wall10->muro2(3600,900);
  scene->addItem(wall10);

  wall11 = new floor();
  wall11->muro2(4000,900);
  scene->addItem(wall11);

  wall12 = new floor();
  wall12->muro2(4400,900);
  scene->addItem(wall12);

  wall13 = new floor();
  wall13->muro2(4800,900);
  scene->addItem(wall13);

  wall14 = new floor();
  wall14->muro2(5200,900);
  scene->addItem(wall14);

  wall15 = new floor();
  wall15->muro2(5600,900);
  scene->addItem(wall15);

  wall15 = new floor();
  wall15->muro2(5800,900);
  scene->addItem(wall15);
}


// ----------------------------------------------------------- MODO SOLITARIO ------------------------------------------------------
void dos::sdos(QWidget *parent)
{
  //-------------- AGREGO PERSONAJES  ----------------------------
  player1 = new Spartan(); //genera el personaje de la clase Spartan
  player1->spartan1();
  scene->addItem(player1); //lo agrego a la escena


  //------------------- AGREGO ENEMIGOS ----------------------------
  grunt1 = new covenant();
  grunt1->grunt(1600,680);
  scene->addItem(grunt1);

  grunt2 = new covenant();
  grunt2->grunt(3600,680);
  scene->addItem(grunt2);

  elite2 = new covenant();
  elite2->eliteblue(2000,670);
  scene->addItem(elite2);

  elite4 = new covenant();
  elite4->elitered(4000,670);
  scene->addItem(elite4);

  elite5 = new covenant();
  elite5->elitered(4800,670);
  scene->addItem(elite5);



  //-------------- AGREGO EL SUELO AL NIVEL -----------------------
  wall1 = new floor();
  wall1->muro2(0,900);
  scene->addItem(wall1);

  wall2 = new floor();
  wall2->muro2(400,900);
  scene->addItem(wall2);

  wall3 = new floor();
  wall3->muro2(800,900);
  scene->addItem(wall3);

  wall4 = new floor();
  wall4->muro2(1200,900);
  scene->addItem(wall4);

  wall5 = new floor();
  wall5->muro2(1600,900);
  scene->addItem(wall5);

  wall6 = new floor();
  wall6->muro2(2000,900);
  scene->addItem(wall6);

  wall7 = new floor();
  wall7->muro2(2400,900);
  scene->addItem(wall7);

  wall8 = new floor();
  wall8->muro2(2800,900);
  scene->addItem(wall8);

  wall9 = new floor();
  wall9->muro2(3200,900);
  scene->addItem(wall9);

  wall10 = new floor();
  wall10->muro2(3600,900);
  scene->addItem(wall10);

  wall11 = new floor();
  wall11->muro2(4000,900);
  scene->addItem(wall11);

  wall12 = new floor();
  wall12->muro2(4400,900);
  scene->addItem(wall12);

  wall13 = new floor();
  wall13->muro2(4800,900);
  scene->addItem(wall13);

  wall14 = new floor();
  wall14->muro2(5200,900);
  scene->addItem(wall14);

  wall15 = new floor();
  wall15->muro2(5600,900);
  scene->addItem(wall15);

  wall15 = new floor();
  wall15->muro2(5800,900);
  scene->addItem(wall15);
}

dos::~dos()
{
  delete ui;
}

