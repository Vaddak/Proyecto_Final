#include "scargar.h"
#include "ui_scargar.h"
#include "solitario.h"

scargar::scargar(QWidget *parent) :
  QDialog(parent),
  ui(new Ui::scargar)
{
  ui->setupUi(this);
  scene = new QGraphicsScene(0,0,1800,1000);
  scene->setBackgroundBrush(QBrush(QImage(":/main.jpg")));
  ui->graphicsView->setScene(scene);
}

scargar::~scargar()
{
  delete ui;
}

void scargar::on_salir_clicked()
{
    this->close();
}

void scargar::on_atras_clicked()
{
  this->close();
  solitario solitario;
  solitario.setModal(true);
  solitario.exec();
}
