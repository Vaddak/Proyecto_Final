#include "uno.h"
#include "ui_uno.h"
#include "spartan.h"
#include <QDebug>
uno::uno(QWidget *parent) :
  QDialog(parent),
  ui(new Ui::uno)

{
  ui->setupUi(this);
  scene = new QGraphicsScene(0,0,1800,1000);
  //scene->setBackgroundBrush(QBrush(QImage(":/Imagenes/mapa1.jpg")));
  ui->graphicsView->setScene(scene);
  score = new Score;
  scene->addItem(score);


}


//------------------------------------------------------ MODO SOLITARIO --------------------------------------------------------------
void uno::suno(QWidget *parent)
{

  //-------------- AGREGO PERSONAJES  ----------------------------

  player1 = new Spartan(); //genera el personaje de la clase Spartan
  scene->addItem(player1); //lo agrego a la escena
  spartans.push_back(player1);
  scene->addItem(spartans.back());

  //----------------------- AGREGO ENEMIGOS ------------------------
  grunt1 = new enemy1(1200,680);
  grunts.push_back(grunt1);
  scene->addItem(grunts.back());

  grunt2 = new enemy1(1300,680);
  grunts.push_back(grunt2);
  scene->addItem(grunts.back());

  grunt3 = new enemy1(1000,680);
  grunts.push_back(grunt3);
  scene->addItem(grunts.back());

  grunt4 = new enemy1(900,680);
  grunts.push_back(grunt4);
  scene->addItem(grunts.back());




  //-------------- AGREGO EL SUELO AL NIVEL -----------------------
  wall1 = new floor(0,900);
  wall1->muro1();
  scene->addItem(wall1);

  wall2 = new floor(400,900);
  wall2->muro1();
  scene->addItem(wall2);

  wall3 = new floor(800,900);
  wall3->muro1();
  scene->addItem(wall3);

  wall4 = new floor(1200,900);
  wall4->muro1();
  scene->addItem(wall4);

  wall5 = new floor(1600,900);
  wall5->muro1();
  scene->addItem(wall5);


}


//----------------------------------------------------- MODO MULTIJUGADOR ------------------------------------------------------------------------
void uno::muno(QWidget *parent)
{



  //------------------ AGREGO PERSONAJES  ----------------------------
  player1 = new Spartan(); //genera el personaje de la clase Spartan
  scene->addItem(player1); //lo agrego a la escena
  spartans.push_back(player1);
  scene->addItem(spartans.back());

  player2 = new Spartan();
  player2->spartan2();
  scene->addItem(player2);
  spartans.push_back(player2);
  scene->addItem(spartans.back());

  //-------------------------- AGREGO ENEMIGOS ----------------------------------
  grunt1 = new enemy1(1200,680);
  grunts.push_back(grunt1);
  scene->addItem(grunts.back());

  grunt2 = new enemy1(1300,680);
  grunts.push_back(grunt2);
  scene->addItem(grunts.back());

  grunt3 = new enemy1(1000,680);
  grunts.push_back(grunt3);
  scene->addItem(grunts.back());

  grunt4 = new enemy1(900,680);
  grunts.push_back(grunt4);
  scene->addItem(grunts.back());




  //--------------------- AGREGO EL SUELO DEL NIVEL  -----------------------------
  wall1 = new floor(0,900);
  wall1->muro1();
  scene->addItem(wall1);

  wall2 = new floor(400,900);
  wall2->muro1();
  scene->addItem(wall2);

  wall3 = new floor(800,900);
  wall3->muro1();
  scene->addItem(wall3);

  wall4 = new floor(1200,900);
  wall4->muro1();
  scene->addItem(wall4);

  wall5 = new floor(1600,900);
  wall5->muro1();
  scene->addItem(wall5);


}

void uno::keyPressEvent(QKeyEvent *event)
{
  bala *bullet = new bala();

  if(spartans.size()>0 && spartans.size()<2){
      if(event->key()==Qt::Key_W){
         //salto
        }

      if(event->key()==Qt::Key_D){
         spartans.at(0)->right();
         ui->graphicsView->centerOn(spartans.at(0));
        }

      if(event->key()==Qt::Key_F){
          bullet->setPos(spartans.at(0)->x(),spartans.at(0)->y());
          scene->addItem(bullet);
          if(bullet->collidesWithItem(grunt1)){
              scene->removeItem(grunt1);
              qDebug()<<"bala creada";
            }
          for(int i=0; i<grunts.size();i++){
              if(bullet->collidesWithItem(grunts.at(i))){
                  scene->removeItem(grunts.at(i));
                  grunts.removeOne(grunts.at(i));
                  qDebug()<<"bala creada";
                  score->increase();
                  if(score->getScore()==5){
                      close();
                    }
                }
            }

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
          scene->addItem(bullet);
          if(bullet->collidesWithItem(grunt1)){
              scene->removeItem(grunt1);
              qDebug()<<"bala creada";
            }
          bullet->setPos(spartans.at(0)->x(),spartans.at(0)->y());
          for(int i=0; i<grunts.size();i++){
              if(bullet->collidesWithItem(grunts.at(i))){
                  scene->removeItem(grunts.at(i));
                  grunts.removeOne(grunts.at(i));
                  qDebug()<<"bala creada";
                  score->increase();
                  if(score->getScore()==5){
                      close();
                    }
                }
            }
        }

      if(event->key()==Qt::Key_I){
          //salto
        }
      if(event->key()==Qt::Key_P){
          scene->addItem(bullet);
          bullet->setPos(spartans.at(0)->x(),spartans.at(0)->y());
          for(int i=0; i<grunts.size();i++){
              if(bullet->collidesWithItem(grunts.at(i))){
                  scene->removeItem(grunts.at(i));

                  grunts.removeOne(grunts.at(i));
                  qDebug()<<"bala creada";
                  score->increase();
                  if(score->getScore()==5){
                      close();
                    }
                }
             }
          }
        }
      if(event->key()==Qt::Key_L){
          spartans.at(1)->right();
          ui->graphicsView->centerOn(spartans.at(0));
        }
    }


uno::~uno()
{
  delete ui;
}
