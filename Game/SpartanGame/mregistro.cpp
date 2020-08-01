#include "mregistro.h"
#include "ui_mregistro.h"
#include "multiplayer.h"
#include "instrucciones.h"
#include "uno.h"
#include "ui_uno.h"
#include "dos.h"
#include "ui_dos.h"
#include "cuatro.h"
#include "ui_cuatro.h"
#include "tres.h"
#include "ui_tres.h"

void mregistro::mescribir(string a, string b) //funcion que guarda los nombres de los jugadores en multiplayer
{

    ofstream archivo;
     archivo.open("../Documentos/Multiplayerregistro.txt", ios::app);
     if (archivo.fail()){
         qDebug()<< "No se pudo abrir el archivo";
         exit(1);
     }

     archivo <<a<<","<<b<< "\n";
     archivo.close();
}

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

  QString s = ui->player1->text();
  QString v = ui->player2->text();
  string a;
  string b;
  a = s.toUtf8().constData();
  b = v.toUtf8().constData();
  mescribir(a,b);
  this->close();
  /*uno uno;
  uno.suno();
  uno.setModal(true);
  uno.exec();
  dos dos;
  dos.sdos();
  dos.setModal(true);
  dos.exec();
  cuatro cuatro;
  cuatro.scuatro();
  cuatro.setModal(true);
  cuatro.exec();

  tres tres;
  tres.mtres();
  tres.setModal(true);
  tres.exec();
  */


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
