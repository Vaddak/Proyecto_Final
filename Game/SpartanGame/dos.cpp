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
  score = new Score();



  //------------------- AGREGO ENEMIGOS ----------------------------
  elite1 = new enemy2(900,675);
  scene->addItem(elite1);
  elites.push_back(elite1);
  scene->addItem(elites.back());

  elite3 = new enemy2(1200,675);
  scene->addItem(elite3);
  elites.push_back(elite3);
  scene->addItem(elites.back());

  elite2 = new enemy2(1500,675);
  scene->addItem(elite2);
  elites.push_back(elite2);
  scene->addItem(elites.back());

  elite4 = new enemy2(1300,675);
  scene->addItem(elite4);
  elites.push_back(elite4);
  scene->addItem(elites.back());



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

}





// ----------------------------------------------------------- MODO MULTIJUGADOR ------------------------------------------------------
void dos::mdos(QWidget *parent)
{
  //-------------- AGREGO PERSONAJES  ----------------------------
  player1 = new Spartan(); //genera el personaje de la clase Spartan
  scene->addItem(player1); //lo agrego a la escena
  spartans.push_back(player1);
  scene->addItem(spartans.back());

  player2 = new Spartan();
  player2->spartan2();
  scene->addItem(player2);
  spartans.push_back(player2);
  scene->addItem(spartans.back());



}


// ----------------------------------------------------------- MODO SOLITARIO ------------------------------------------------------
void dos::sdos(QWidget *parent)
{
  //-------------- AGREGO PERSONAJES  ----------------------------
  player1 = new Spartan(); //genera el personaje de la clase Spartan
  scene->addItem(player1); //lo agrego a la escena
  spartans.push_back(player1);
  scene->addItem(spartans.back());


}

void dos::keyPressEvent(QKeyEvent *event)
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

          for(int i=0; i<elites.size();i++){
              if(bullet->collidesWithItem(elites.at(i))){
                  scene->removeItem(elites.at(i));
                  elites.removeOne(elites.at(i));
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
          bullet->setPos(spartans.at(0)->x(),spartans.at(0)->y());
          scene->addItem(bullet);
          for(int i=0; i<elites.size();i++){
              if(bullet->collidesWithItem(elites.at(i))){
                  scene->removeItem(elites.at(i));
                  elites.removeOne(elites.at(i));
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
          for(int i=0; i<elites.size();i++){
              if(bullet->collidesWithItem(elites.at(i))){
                  scene->removeItem(elites.at(i));
                  elites.removeOne(elites.at(i));
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


dos::~dos()
{
  delete ui;
}

