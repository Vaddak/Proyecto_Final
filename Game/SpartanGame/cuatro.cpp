#include "cuatro.h"
#include "ui_cuatro.h"
#include "win.h"
#include "ui_win.h"

cuatro::cuatro(QWidget *parent) :
  QDialog(parent),
  ui(new Ui::cuatro)
{
  ui->setupUi(this);
  scene = new QGraphicsScene(0,0,1800,1000);
  scene->setBackgroundBrush(QBrush(QImage(":/Imagenes/mapa4.jpg")));
  ui->graphicsView->setScene(scene);
  score = new Score();
  score->level4();
  sound->setMedia(QUrl("qrc:/Music/song4.mp3"));
  sound->play();

  //----------------------------- PUNTO DE CONTROL -----------------------------
  guilty = new checkpoint();
  scene->addItem(guilty);


  //------------------- AGREGO PAREDES -------------------------
   //--------------- UP -------------------
   wall1 = new floor(0,-20);
   wall1->muro4();
   scene->addItem(wall1);

   wall2 = new floor(400,-20);
   wall2->muro4();
   scene->addItem(wall2);

   wall3 = new floor(800,-20);
   wall3->muro4();
   scene->addItem(wall3);

   wall4 = new  floor(1200,-20);
   wall4->muro4();
   scene->addItem(wall4);

   wall4 = new  floor(1600,-20);
   wall4->muro4();
   scene->addItem(wall4);

   //--------------- DOWN -----------------
   wall5 = new floor(0,1050);
   wall5->muro4();
   scene->addItem(wall5);

   wall6 = new floor(400,1050);
   wall6->muro4();
   scene->addItem(wall6);

   wall7 = new floor(800,1050);
   wall7->muro4();
   scene->addItem(wall7);

   wall8 = new  floor(1200,1050);
   wall8->muro4();
   scene->addItem(wall8);

   wall8 = new  floor(1600,1050);
   wall8->muro4();
   scene->addItem(wall8);

   //--------------- LEFT -----------------
   wall9 = new floor(-70,200);
   wall9->muro4();
   wall9->setRotation(90);
   scene->addItem(wall9);

   wall10 = new floor(-70,600);
   wall10->muro4();
   wall10->setRotation(90);
   scene->addItem(wall10);

   wall10 = new floor(-70,800);
   wall10->muro4();
   wall10->setRotation(90);
   scene->addItem(wall10);

   //--------------- RIGHT ----------------
   wall11 = new floor(1840,200);
   wall11->muro4();
   wall11->setRotation(90);
   scene->addItem(wall11);

   wall12 = new floor(1840,600);
   wall12->muro4();
   wall12->setRotation(90);
   scene->addItem(wall12);

   wall12 = new floor(1840,800);
   wall12->muro4();
   wall12->setRotation(90);
   scene->addItem(wall12);



}

cuatro::~cuatro()
{
  delete ui;
}

//--------------------------------------------------- MODO SOLITARIO -------------------------------------------------
void cuatro::scuatro(QWidget *parent){

  //------------------- AGREGO JUGADORES ----------------------
  pelican1 = new Pelican(200,400);
  scene->addItem(pelican1);
  pelicans.push_back(pelican1);
  scene->addItem(pelicans.back());


  //------------------- AGREGO ENEMIGOS -----------------------
  phantom1 = new phantom();
  phantom1->phantom1();
  scene->addItem(phantom1);
}



//-------------------------------------------------- MODO MULTIJUGADOR -----------------------------------------------
void cuatro::mcuatro(QWidget *parent){

 //------------------- AGREGO JUGADORES -----------------------
  pelican1 = new Pelican(200,400);
  scene->addItem(pelican1);
  pelicans.push_back(pelican1);
  scene->addItem(pelicans.back());

  pelican2 = new Pelican(400,600);
  pelican2->paint2();
  scene->addItem(pelican2);
  pelicans.push_back(pelican2);
  scene->addItem(pelicans.back());

 //------------------- AGREGO ENEMIGOS ------------------------
  phantom1 = new phantom();
  phantom1->phantom1();
  scene->addItem(phantom1);

  phantom2 = new phantom();
  phantom2->phantom2();
  scene->addItem(phantom2);


}


//--------------------------------------------------MOVIMIENTO Y DISPARO DE JUGADORES-----------------------------------------------------------
void cuatro::keyPressEvent(QKeyEvent *event)
{
  //-----------------------SOLITARIO----------------------------
  if(pelicans.size()>0 && pelicans.size()<2){
      if(event->key()==Qt::Key_W){
         pelicans.at(0)->up();
         if(pelicans.at(0)->collidesWithItem(wall1) || pelicans.at(0)->collidesWithItem(wall2) || pelicans.at(0)->collidesWithItem(wall3) || pelicans.at(0)->collidesWithItem(wall4)){
             pelicans.at(0)->down();
           }
        }

      if(event->key()==Qt::Key_D){
          pelicans.at(0)->right();
          if(pelicans.at(0)->collidesWithItem(wall11) || pelicans.at(0)->collidesWithItem(wall12)){
              pelicans.at(0)->left();
            }
          if(pelicans.at(0)->collidesWithItem(guilty)){
              sound->stop();
              this->close();
              win win;
              win.setModal(true);
              win.exec();
            }
         }

      if(event->key()==Qt::Key_S){
          pelicans.at(0)->down();
          if(pelicans.at(0)->collidesWithItem(wall5) || pelicans.at(0)->collidesWithItem(wall6) || pelicans.at(0)->collidesWithItem(wall7) || pelicans.at(0)->collidesWithItem(wall8)){
              pelicans.at(0)->up();
            }
        }

      if(event->key()==Qt::Key_A){
          pelicans.at(0)->left();
          if(pelicans.at(0)->collidesWithItem(wall9) || pelicans.at(0)->collidesWithItem(wall10)){
              pelicans.at(0)->right();
            }
        }

      if(event->key()==Qt::Key_F){
          bala *bullet = new bala();
          scene->addItem(bullet);
          bullet->setPos(pelicans.at(0)->x(),pelicans.at(0)->y());
       }
    }



 //-----------------------MULTIPLAYER----------------------------
  else if(pelicans.size()==2){

      if(event->key()==Qt::Key_W){
         pelicans.at(0)->up();
         if(pelicans.at(0)->collidesWithItem(wall1) || pelicans.at(0)->collidesWithItem(wall2) || pelicans.at(0)->collidesWithItem(wall3) || pelicans.at(0)->collidesWithItem(wall4)){
             pelicans.at(0)->down();
           }
        }

      if(event->key()==Qt::Key_D){
          pelicans.at(0)->right();
          if(pelicans.at(0)->collidesWithItem(wall11) || pelicans.at(0)->collidesWithItem(wall12)){
              pelicans.at(0)->left();
            }
          if(pelicans.at(0)->collidesWithItem(guilty)){
              sound->stop();
              this->close();
              win win;
              win.setModal(true);
              win.exec();
            }
         }

      if(event->key()==Qt::Key_S){
          pelicans.at(0)->down();
          if(pelicans.at(0)->collidesWithItem(wall5) || pelicans.at(0)->collidesWithItem(wall6) || pelicans.at(0)->collidesWithItem(wall7) || pelicans.at(0)->collidesWithItem(wall8)){
              pelicans.at(0)->up();
            }
        }

      if(event->key()==Qt::Key_A){
          pelicans.at(0)->left();
          if(pelicans.at(0)->collidesWithItem(wall9) || pelicans.at(0)->collidesWithItem(wall10)){
              pelicans.at(0)->right();
            }
        }

      if(event->key()==Qt::Key_F){
          bala *bullet = new bala();
          scene->addItem(bullet);
          bullet->setPos(pelicans.at(0)->x(),pelicans.at(0)->y());
       }


      if(event->key()==Qt::Key_I){
          pelicans.at(1)->up();
          if(pelicans.at(1)->collidesWithItem(wall1) || pelicans.at(1)->collidesWithItem(wall2) || pelicans.at(1)->collidesWithItem(wall3) || pelicans.at(1)->collidesWithItem(wall4)){
              pelicans.at(1)->down();
            }
        }

      if(event->key()==Qt::Key_J){
          pelicans.at(1)->left();
          if(pelicans.at(1)->collidesWithItem(wall9) || pelicans.at(1)->collidesWithItem(wall10)){
              pelicans.at(0)->right();
            }
        }

      if(event->key()==Qt::Key_K){
          pelicans.at(1)->down();
          if(pelicans.at(1)->collidesWithItem(wall5) || pelicans.at(1)->collidesWithItem(wall6) || pelicans.at(1)->collidesWithItem(wall7) || pelicans.at(1)->collidesWithItem(wall8)){
              pelicans.at(1)->up();
            }
        }


      if(event->key()==Qt::Key_P){
          bala *bullet = new bala();
          scene->addItem(bullet);
          bullet->setPos(pelicans.at(1)->x(),pelicans.at(1)->y());
        }


      if(event->key()==Qt::Key_L){
          pelicans.at(1)->right();
          if(pelicans.at(1)->collidesWithItem(wall11) || pelicans.at(1)->collidesWithItem(wall12)){
              pelicans.at(1)->left();
            }
          if(pelicans.at(0)->collidesWithItem(guilty)){
              sound->stop();
              this->close();
              win win;
              win.setModal(true);
              win.exec();
            }
        }

    }



}


