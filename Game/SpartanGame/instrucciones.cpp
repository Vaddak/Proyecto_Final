#include "instrucciones.h"
#include "ui_instrucciones.h"

instrucciones::instrucciones(QWidget *parent) :
  QDialog(parent),
  ui(new Ui::instrucciones)
{
  ui->setupUi(this);
  scene = new QGraphicsScene(0,0,1200,900);
  scene->setBackgroundBrush(QBrush(QImage(":/instrucciones.png")));
  ui->graphicsView->setScene(scene);

  //sonido del menu


}

instrucciones::~instrucciones()
{
  delete ui;
}

void instrucciones::on_salir_clicked()
{
    this->close();
}
