#include "uno.h"
#include "ui_uno.h"
#include "spartan.h"
uno::uno(QWidget *parent) :
  QDialog(parent),
  ui(new Ui::uno)
{
  ui->setupUi(this);
  scene = new QGraphicsScene(0,0,3500,1000);
  //scene->setBackgroundBrush(QBrush(QImage(":/Imagenes/mapa1.jpg")));
  ui->graphicsView->setScene(scene);

  player1 = new Spartan(); //genera el pacman de la clase sprite
  player1->spartan1();
  scene->addItem(player1); //agrega el pacman a la escena

}

uno::~uno()
{
  delete ui;
}
