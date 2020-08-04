#ifndef BALA_H
#define BALA_H
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
#include "score.h"

class bala: public QObject, public QGraphicsItem
{
  Q_OBJECT
public:
  bala();
  QPixmap *pixmap;
  float filas=0,columnas=0;
  float ancho;
  QTimer *timer;
  float alto;
  QRectF boundingRect() const;
  void paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget = nullptr);
  int contador=0;
  bool m=false;





public slots:
  void move();



};



#endif // BALA_H
