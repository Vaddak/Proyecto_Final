#include "multiplayer.h"
#include "ui_multiplayer.h"
#include "mainwindow.h"
#include "mregistro.h"

multiplayer::multiplayer(QWidget *parent) :
  QDialog(parent),
  ui(new Ui::multiplayer)
{
  ui->setupUi(this);
  scene = new QGraphicsScene(0,0,1800,1000);
  scene->setBackgroundBrush(QBrush(QImage(":/main.jpg")));
  ui->graphicsView->setScene(scene);

}

multiplayer::~multiplayer()
{
  delete ui;
}

void multiplayer::on_registro_clicked()
{
  this->close(); //cierro la ventana
  mregistro mregistro;
  mregistro.setModal(true);
  mregistro.exec();
}

void multiplayer::on_salir_clicked()
{
    this->close();
}


