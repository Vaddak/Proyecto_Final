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

  //----------------------- AGREGO ENEMIGOS ------------------------
  elite1 = new enemy3(1100,675);
  scene->addItem(elite1);

  elite2 = new enemy3(900,675);
  scene->addItem(elite2);

  elite3 = new enemy3(750,675);
  scene->addItem(elite3);

  elite4 = new enemy3(1300,675);
  scene->addItem(elite4);

  elite5 = new enemy3(1600,675);
  scene->addItem(elite5);

  elite6 = new enemy3(1700,675);
  scene->addItem(elite6);

  yanme1 = new enemy4(762,120);
  scene->addItem(yanme1);

  yanme2 = new enemy4(500,100);
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

