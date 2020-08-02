#ifndef PELICAN_H
#define PELICAN_H
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

class Pelican: public QObject, public QGraphicsPixmapItem
{
  Q_OBJECT

public:
  int posx;
  int posy;
  float filas=0,columnas=0;
  float ancho;
  float alto;
  QRectF boundingRect() const;
  void paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget);
  void pelican1(QGraphicsItem *parent=0);
  void pelican2(QGraphicsItem *parent=0);
  void up();
  void down();
  void left();
  void right();

private:
  QPixmap *pixmap;


};

#endif // PELICAN_H
