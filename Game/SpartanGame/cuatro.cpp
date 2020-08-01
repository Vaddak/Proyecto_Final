#include "cuatro.h"
#include "ui_cuatro.h"

cuatro::cuatro(QWidget *parent) :
  QDialog(parent),
  ui(new Ui::cuatro)
{
  ui->setupUi(this);
  scene = new QGraphicsScene(0,0,1800,1000);
  scene->setBackgroundBrush(QBrush(QImage(":/Imagenes/mapa4.jpg")));
  ui->graphicsView->setScene(scene);
}

cuatro::~cuatro()
{
  delete ui;
}
