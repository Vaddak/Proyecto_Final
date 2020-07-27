#include "mregistro.h"
#include "ui_mregistro.h"
#include "multiplayer.h"
#include "instrucciones.h"

mregistro::mregistro(QWidget *parent) :
  QDialog(parent),
  ui(new Ui::mregistro)
{
  ui->setupUi(this);
  scene = new QGraphicsScene(0,0,1800,1000);
  scene->setBackgroundBrush(QBrush(QImage(":/main.jpg")));
  ui->graphicsView->setScene(scene);
}

mregistro::~mregistro()
{
  delete ui;
}

void mregistro::on_aceptar_clicked()
{
  this->close();
  instrucciones instrucciones;
  instrucciones.setModal(true);
  instrucciones.exec();
}



void mregistro::on_atras_clicked()
{
  this->close(); //cierro la ventana
  multiplayer multiplayer;
  multiplayer.setModal(true);
  multiplayer.exec();
}

void mregistro::on_salir_clicked()
{
    this->close();
}
