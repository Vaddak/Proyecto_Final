#include "tres.h"
#include "ui_tres.h"
#include "spartan.h"
#include "QDebug"

tres::tres(QWidget *parent) :
  QDialog(parent),
  ui(new Ui::tres)

{
  ui->setupUi(this);
  scene = new QGraphicsScene(0,0,1800,1000);
  scene->setBackgroundBrush(QBrush(QImage(":/Imagenes/mapa3.jpg")));
  ui->graphicsView->setScene(scene);
  score = new Score();
  scene->addItem(score);

/*
  time = new QTimer();
  connect(time,SIGNAL(timeout()),this,SLOT(vista()));
  time->start(10);
  */

}


//------------------------------------------------------ MODO SOLITARIO --------------------------------------------------------------
void tres::stres(QWidget *parent)
{

  //-------------- AGREGO PERSONAJES  ----------------------------

  player1 = new Spartan(); //genera el personaje de la clase Spartan
  scene->addItem(player1); //lo agrego a la escena
  spartans.push_back(player1);
  scene->addItem(spartans.back());
  ui->graphicsView->centerOn(spartans.at(0));



  //----------------------- AGREGO ENEMIGOS ------------------------

  grunt2 = new enemy1(4400,680);
  scene->addItem(grunt2);

  elite1 = new enemy2(1100,675);
  scene->addItem(elite1);

  elite2 = new enemy2(1685,675);
  scene->addItem(elite2);

  elite3 = new enemy3(2000,675);
  scene->addItem(elite3);

  elite5 = new enemy3(2900,675);
  scene->addItem(elite5);

  yanme2 = new enemy4(4800,100);
  scene->addItem(yanme2);

  //-------------- AGREGO EL SUELO AL NIVEL -----------------------
  wall1 = new floor(0,900);
  wall1->muro3();
  scene->addItem(wall1);

  wall2 = new floor(400,900);
  wall2->muro3();
  scene->addItem(wall2);

  wall3 = new floor(800,900);
  wall3->muro3();
  scene->addItem(wall3);

  wall4 = new floor(1200,900);
  wall4->muro3();
  scene->addItem(wall4);

  wall5 = new floor(1600,900);
  wall5->muro3();
  scene->addItem(wall5);

  wall6 = new floor(2000,900);
  wall6->muro3();
  scene->addItem(wall6);

  wall7 = new floor(2400,900);
  wall7->muro3();
  scene->addItem(wall7);

  wall8 = new floor(2800,900);
  wall8->muro3();
  scene->addItem(wall8);

  wall9 = new floor(3200,900);
  wall9->muro3();
  scene->addItem(wall9);

  wall10 = new floor(3600,900);
  wall10->muro3();
  scene->addItem(wall10);

  wall11 = new floor(4000,900);
  wall11->muro3();
  scene->addItem(wall11);

  wall12 = new floor(4400,900);
  wall12->muro3();
  scene->addItem(wall12);

  wall13 = new floor(4800,900);
  wall13->muro3();
  scene->addItem(wall13);

  wall14 = new floor(5200,900);
  wall14->muro3();
  scene->addItem(wall14);

  wall15 = new floor(5600,900);
  wall15->muro3();
  scene->addItem(wall15);

  wall15 = new floor(5800,900);
  wall15->muro3();
  scene->addItem(wall15);
}


//----------------------------------------------------- MODO MULTIJUGADOR ------------------------------------------------------------------------
void tres::mtres(QWidget *parent)
{
  //------------------ AGREGO PERSONAJES  ----------------------------
  player1 = new Spartan(); //genera el personaje de la clase Spartan
  scene->addItem(player1); //lo agrego a la escena
  spartans.push_back(player1);
  scene->addItem(spartans.back());
  ui->graphicsView->centerOn(spartans.at(0));

  player2 = new Spartan();
  player2->spartan2();
  scene->addItem(player2);  
  spartans.push_back(player2);
  scene->addItem(spartans.back());


  //-------------------------- AGREGO ENEMIGOS ----------------------------------
  grunt1 = new enemy1(2400,680);
  scene->addItem(grunt1);

  grunt2 = new enemy1(4400,680);
  scene->addItem(grunt2);

  elite1 = new enemy2(1100,675);
  scene->addItem(elite1);

  elite2 = new enemy2(1685,675);
  scene->addItem(elite2);

  elite3 = new enemy3(2000,675);
  scene->addItem(elite3);

  elite4 = new enemy3(2500,675);
  scene->addItem(elite4);

  elite5 = new enemy3(2900,675);
  scene->addItem(elite5);

  yanme1 = new enemy4(762,120);
  scene->addItem(yanme1);

  yanme2 = new enemy4(4800,100);
  scene->addItem(yanme2);


  //--------------------- AGREGO EL SUELO DEL NIVEL  -----------------------------
  wall1 = new floor(0,900);
  wall1->muro3();
  scene->addItem(wall1);

  wall2 = new floor(400,900);
  wall2->muro3();
  scene->addItem(wall2);

  wall3 = new floor(800,900);
  wall3->muro3();
  scene->addItem(wall3);

  wall4 = new floor(1200,900);
  wall4->muro3();
  scene->addItem(wall4);

  wall5 = new floor(1600,900);
  wall5->muro3();
  scene->addItem(wall5);

  wall6 = new floor(2000,900);
  wall6->muro3();
  scene->addItem(wall6);

  wall7 = new floor(2400,900);
  wall7->muro3();
  scene->addItem(wall7);

  wall8 = new floor(2800,900);
  wall8->muro3();
  scene->addItem(wall8);

  wall9 = new floor(3200,900);
  wall9->muro3();
  scene->addItem(wall9);

  wall10 = new floor(3600,900);
  wall10->muro3();
  scene->addItem(wall10);

  wall11 = new floor(4000,900);
  wall11->muro3();
  scene->addItem(wall11);

  wall12 = new floor(4400,900);
  wall12->muro3();
  scene->addItem(wall12);

  wall13 = new floor(4800,900);
  wall13->muro3();
  scene->addItem(wall13);

  wall14 = new floor(5200,900);
  wall14->muro3();
  scene->addItem(wall14);

  wall15 = new floor(5600,900);
  wall15->muro3();
  scene->addItem(wall15);

  wall15 = new floor(5800,900);
  wall15->muro3();
  scene->addItem(wall15);
}

void tres::keyPressEvent(QKeyEvent *event)
{
  if(spartans.size()>0 && spartans.size()<2){
      if(event->key()==Qt::Key_W){
         //salto
        }

      if(event->key()==Qt::Key_D){
         spartans.at(0)->right();
         ui->graphicsView->centerOn(spartans.at(0));
        }

      if(event->key()==Qt::Key_F){


        }
    }

  else if(spartans.size()==2){
      Spartan * a = spartans.at(1); //creo una variable para reemplazar
      if(event->key()==Qt::Key_W){
          //salto
        }

      if(event->key()==Qt::Key_D){
         spartans.at(0)->right();
         ui->graphicsView->centerOn(spartans.at(0));

        }

      if(event->key()==Qt::Key_F){ //disparo

        }

      if(event->key()==Qt::Key_I){
          //salto
        }
      if(event->key()==Qt::Key_P){

        }
      if(event->key()==Qt::Key_L){
          spartans.at(1)->right();
          ui->graphicsView->centerOn(spartans.at(0));


        }
    }
}

tres::~tres()
{
  delete ui;
}

void tres::vista()
{
  ui->graphicsView->centerOn(spartans.at(0));

}
