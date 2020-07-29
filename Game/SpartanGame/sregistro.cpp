#include "sregistro.h"
#include "ui_sregistro.h"
#include "mainwindow.h"
#include "solitario.h"
#include "ui_solitario.h"
#include <QString>
#include "uno.h"
#include "ui_uno.h"

void sregistro::sescribir(string a)
{
  ofstream archivo;
   archivo.open("../Documentos/Solitarioregistro.txt", ios::app);
   if (archivo.fail()){
       qDebug()<< "No se pudo abrir el archivo";
       exit(1);
   }

   archivo <<a<< "\n";
   archivo.close();

}

sregistro::sregistro(QWidget *parent) :
  QDialog(parent),
  ui(new Ui::sregistro)
{
  ui->setupUi(this);


  scene = new QGraphicsScene(0,0,1800,1000);
  scene->setBackgroundBrush(QBrush(QImage(":/main.jpg")));
  ui->graphicsView->setScene(scene);

}


sregistro::~sregistro()
{
  delete ui;
}

void sregistro::on_salir_clicked()
{
    this->close();
}

void sregistro::on_atras_clicked()
{
    this->close();
    solitario solitario;
    solitario.setModal(true);
    solitario.exec();
}

void sregistro::on_aceptar_clicked() //ESCRIBE EL TXT CON EL NOMBRE DE CADA JUGADOR QUE SE REGISTRE
{

  QString s = ui->player1->text();
  string a;
  a = s.toUtf8().constData();
  sescribir(a);
  this->close();
  uno uno;
  uno.setModal(true);
  uno.suno();
  uno.exec();

}
