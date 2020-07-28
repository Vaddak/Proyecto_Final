#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include <QList>
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <QMainWindow>
#include <QPainter>
#include <QGraphicsItem>
#include <QGraphicsRectItem>
#include <QRectF>
#include <fstream>
#include <QDesktopWidget>
#include <QDebug>
#include <QGraphicsScene>
#include <QKeyEvent>
#include <QMessageBox>
#include <QGraphicsView>
#include <QTimer>
#include <QPixmap>
#include <QFont>
#include <QIcon>
#include "instrucciones.h"
#include <QMediaPlayer>
#include <QtMultimedia/QMediaPlayer>
#include <string.h>
#include "spartan.h"
#include "muro.h"

using namespace std;

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

using namespace std;
class MainWindow : public QMainWindow
{
  Q_OBJECT

public:
  MainWindow(QWidget *parent = nullptr);
 // void keyPressEvent(QKeyEvent * event);
  ~MainWindow();

private slots:

  //void on_graphicsView_rubberBandChanged(const QRect &viewportRect, const QPointF &fromScenePoint, const QPointF &toScenePoint);

  void on_solitario_clicked();

  void on_salir_clicked();

  void on_multiplayer_clicked();

private: //Creo los objetos
  Ui::MainWindow *ui;
  //QGraphicsScene *scene = new QGraphicsScene(this); //creo la escena
  QGraphicsScene *scene;
  QMediaPlayer *sound = new QMediaPlayer();


 // QGraphicsView *view;
 // QGraphicsView *view = new QGraphicsView(this);




};
#endif // MAINWINDOW_H
