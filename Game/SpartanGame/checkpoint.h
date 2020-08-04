#ifndef CHECKPOINT_H
#define CHECKPOINT_H
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

class checkpoint: public QObject, public QGraphicsItem
{
  Q_OBJECT

public:
  int posx;
  int posy;
  float ancho;
  float filas=0,columnas=0;
  float alto;
  QRectF boundingRect() const;
  void paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget);
  checkpoint();
  QPixmap *pixmap;



};

#endif // CHECKPOINT_H
