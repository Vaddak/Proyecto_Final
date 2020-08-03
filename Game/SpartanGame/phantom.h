#ifndef PHANTOM_H
#define PHANTOM_H
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

class phantom: public QObject, public QGraphicsPixmapItem
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
  void phantom1(QGraphicsItem *parent=0);
  void phantom2(QGraphicsItem *parent=0);



public slots:
  void movey();
  void movex();

private:
  QPixmap *pixmap;
  QTimer *timer1;
  QTimer *timer;


};
#endif // PHANTOM_H
