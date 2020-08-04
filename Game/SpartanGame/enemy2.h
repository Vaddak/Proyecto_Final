#ifndef ENEMY2_H
#define ENEMY2_H
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <QMainWindow>
#include <QPainter>
#include <QGraphicsItem>
#include <QGraphicsRectItem>
#include <QRectF>
#include <QGraphicsScene>
#include <QKeyEvent>
#include <QGraphicsView>
#include <QTimer>
#include <QPixmap>
#include <QIcon>
#include <QGraphicsPixmapItem>
#include <QObject>

class enemy2: public QObject, public QGraphicsItem
{
  Q_OBJECT

public:
  int posx;
  int posy;
  int segundo=0;
  int e = 50;
  bool m = true;
  float filas=0,columnas=0;
  float ancho;
  float alto;
  QRectF boundingRect() const;
  void paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget);
  enemy2(int x_, int y_);



public slots:
  void eliteact();
  void move();

private:
  QPixmap *pixmap;
  QTimer *timer1;
  QTimer *timer;


};

#endif // ENEMY2_H
