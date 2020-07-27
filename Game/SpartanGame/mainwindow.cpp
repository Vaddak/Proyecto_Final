#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "solitario.h"
#include "scargar.h"
#include "multiplayer.h"



MainWindow::MainWindow(QWidget *parent)
  : QMainWindow(parent)
  , ui(new Ui::MainWindow)
{
  ui->setupUi(this);
  /*scene = new QGraphicsScene(0,0,800,1200);//La escena ocupa todo el escritorio
  //scene->setBackgroundBrush(QPixmap(":/imagenes/fondomapa.jpg")); //Imagen de fondo
  ui->graphicsView->setScene(scene);
  view->show(); */
  //scene->setSceneRect(0,0,2000,2000);

  //view->setScene(scene);
  //view->show();
  scene = new QGraphicsScene(0,0,1800,1000);
  scene->setBackgroundBrush(QBrush(QImage(":/main.jpg")));
  ui->graphicsView->setScene(scene);
  //sonido del menu
  player1 = new Spartan(); //genera el pacman de la clase sprite
  scene->addItem(player1); //agrega el pacman a la escena

  sound->setMedia(QUrl("qrc:/Music/theme.mp3"));

  sound->play();



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
  sound->stop();
  this->close();


}

void MainWindow::on_multiplayer_clicked()
{

  this->close(); //cierro la ventana
  multiplayer multiplayer;
  multiplayer.setModal(true);
  multiplayer.exec();


}
