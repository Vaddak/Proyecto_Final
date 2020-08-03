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
  scene->addItem(player1); //lo agrego a la escena

  player2 = new Spartan();
  player2->spartan2();
  scene->addItem(player2);


  //------------------- AGREGO ENEMIGOS ----------------------------
  grunt1 = new enemy1(1600,680);
  scene->addItem(grunt1);

  grunt2 = new enemy1(3600,680);
  scene->addItem(grunt2);

  elite1 = new enemy2(900,675);
  scene->addItem(elite1);

  elite2 = new enemy2(2000,675);
  scene->addItem(elite2);

  elite3 = new enemy2(2560,675);
  scene->addItem(elite3);

  elite4 = new enemy3(4000,675);
  scene->addItem(elite4);

  elite5 = new enemy3(4750,675);
  scene->addItem(elite5);


  //-------------- AGREGO EL SUELO AL NIVEL ----------------------
  wall1 = new floor(0,900);
  wall1->muro2();
  scene->addItem(wall1);

  wall2 = new floor(400,900);
  wall2->muro2();
  scene->addItem(wall2);

  wall3 = new floor(800,900);
  wall3->muro2();
  scene->addItem(wall3);

  wall4 = new floor(1200,900);
  wall4->muro2();
  scene->addItem(wall4);

  wall5 = new floor(1600,900);
  wall5->muro2();
  scene->addItem(wall5);

  wall6 = new floor(2000,900);
  wall6->muro2();
  scene->addItem(wall6);

  wall7 = new floor(2400,900);
  wall7->muro2();
  scene->addItem(wall7);

  wall8 = new floor(2800,900);
  wall8->muro2();
  scene->addItem(wall8);

  wall9 = new floor(3200,900);
  wall9->muro2();
  scene->addItem(wall9);

  wall10 = new floor(3600,900);
  wall10->muro2();
  scene->addItem(wall10);

  wall11 = new floor(4000,900);
  wall11->muro2();
  scene->addItem(wall11);

  wall12 = new floor(4400,900);
  wall12->muro2();
  scene->addItem(wall12);

  wall13 = new floor(4800,900);
  wall13->muro2();
  scene->addItem(wall13);

  wall14 = new floor(5200,900);
  wall14->muro2();
  scene->addItem(wall14);

  wall15 = new floor(5600,900);
  wall15->muro2();
  scene->addItem(wall15);

  wall15 = new floor(5800,900);
  wall15->muro2();
  scene->addItem(wall15);
}


// ----------------------------------------------------------- MODO SOLITARIO ------------------------------------------------------
void dos::sdos(QWidget *parent)
{
  //-------------- AGREGO PERSONAJES  ----------------------------
  player1 = new Spartan(); //genera el personaje de la clase Spartan
  scene->addItem(player1); //lo agrego a la escena


  //------------------- AGREGO ENEMIGOS ----------------------------
  grunt1 = new enemy1(1600,680);
  scene->addItem(grunt1);

  grunt2 = new enemy1(3600,680);
  scene->addItem(grunt2);

  elite1 = new enemy2(900,675);
  scene->addItem(elite1);

  elite3 = new enemy2(2560,675);
  scene->addItem(elite3);

  elite5 = new enemy3(4750,675);
  scene->addItem(elite5);



  //-------------- AGREGO EL SUELO AL NIVEL -----------------------
  wall1 = new floor(0,900);
  wall1->muro2();
  scene->addItem(wall1);

  wall2 = new floor(400,900);
  wall2->muro2();
  scene->addItem(wall2);

  wall3 = new floor(800,900);
  wall3->muro2();
  scene->addItem(wall3);

  wall4 = new floor(1200,900);
  wall4->muro2();
  scene->addItem(wall4);

  wall5 = new floor(1600,900);
  wall5->muro2();
  scene->addItem(wall5);

  wall6 = new floor(2000,900);
  wall6->muro2();
  scene->addItem(wall6);

  wall7 = new floor(2400,900);
  wall7->muro2();
  scene->addItem(wall7);

  wall8 = new floor(2800,900);
  wall8->muro2();
  scene->addItem(wall8);

  wall9 = new floor(3200,900);
  wall9->muro2();
  scene->addItem(wall9);

  wall10 = new floor(3600,900);
  wall10->muro2();
  scene->addItem(wall10);

  wall11 = new floor(4000,900);
  wall11->muro2();
  scene->addItem(wall11);

  wall12 = new floor(4400,900);
  wall12->muro2();
  scene->addItem(wall12);

  wall13 = new floor(4800,900);
  wall13->muro2();
  scene->addItem(wall13);

  wall14 = new floor(5200,900);
  wall14->muro2();
  scene->addItem(wall14);

  wall15 = new floor(5600,900);
  wall15->muro2();
  scene->addItem(wall15);

  wall15 = new floor(5800,900);
  wall15->muro2();
  scene->addItem(wall15);
}

dos::~dos()
{
  delete ui;
}

