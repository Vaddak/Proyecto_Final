#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "solitario.h"
#include "scargar.h"
#include "multiplayer.h"
#include "instrucciones.h"
#include "uno.h"
#include "ui_uno.h"


MainWindow::MainWindow(QWidget *parent)
  : QMainWindow(parent)
  , ui(new Ui::MainWindow)
{
  ui->setupUi(this);
  scene = new QGraphicsScene(0,0,1800,1000);
  scene->setBackgroundBrush(QBrush(QImage(":/main.jpg")));
  ui->graphicsView->setScene(scene);

  //sonido del menu

  instrucciones instrucciones;
  instrucciones.setModal(true);
  instrucciones.exec();



}


MainWindow::~MainWindow()
{
  delete ui;
}



void MainWindow::on_solitario_clicked() //implementacion del boton para acceder al modo de juego "solitario"
{

  this->close();
  solitario solitario; //creo la variable
  solitario.setModal(true); //booleano que pone en true toda la ventana y las funciones de la misma al hundir el boton
  solitario.exec(); //cuando aprete el boton se ejecuta


}


void MainWindow::on_salir_clicked()
{

  this->close();


}

void MainWindow::on_multiplayer_clicked()
{

  this->close(); //cierro la ventana
  /*multiplayer multiplayer;
  multiplayer.setModal(true);
  multiplayer.exec();
*/
  uno uno;
  uno.suno();
  uno.setModal(true);
  uno.exec();

}
