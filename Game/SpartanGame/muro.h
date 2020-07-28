#ifndef MURO_H
#define MURO_H
#include <QList>
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
#include <QPixmap>

class muro: public QGraphicsItem, public QGraphicsPixmapItem
{
  Q_OBJECT
  int w, h;
  int posx, posy;

public:
  QPixmap *uno;
  QPixmap *dos;
  QPixmap *tres;
  QPixmap *cuatro;
  muro(int w_, int h_, int x, int y);
  int getW();
  void setW(int ancho);
  int getH();
  void setH(int altura);
  int getPosx();
  void setPosx(int px);
  int getPosy();
  void setPosy(int py);
  QRectF boundingRect() const;
  void muro1();
  void muro2();
  void muro3();
  void muro4();
};


#endif // MURO_H

