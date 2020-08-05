#include "solitario.h"
#include "ui_solitario.h"
#include "scargar.h"
#include "sregistro.h"


/* ------------------------------------------ PARTIDA EN SOLITARIO ----------------------------------------------- */

solitario::solitario(QWidget *parent) :
  QDialog(parent),
  ui(new Ui::solitario)
{
  ui->setupUi(this);
  scenesolitario = new QGraphicsScene(0,0,1800,1000);
  scenesolitario->setBackgroundBrush(QBrush(QImage(":/main.jpg")));
  ui->solitarioview->setScene(scenesolitario);
  //sonido del menu

}

solitario::~solitario()
{
  delete ui;
}

void solitario::on_salir_clicked()
{

  this->close();

}

void solitario::on_registro_clicked()
{

  this->close();
  sregistro sregistro;
  sregistro.setModal(true);
  sregistro.exec();


}



