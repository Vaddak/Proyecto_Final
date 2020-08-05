#ifndef FLOOR_H
#define FLOOR_H
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
#include <QObject>
#include <QPixmap>
#include <QIcon>

class floor:  public QObject, public QGraphicsItem
{

  Q_OBJECT

  int posx, posy;

public:
  floor(int x_, int y_);
  void muro1();
  void muro2();
  void muro3();
  void muro4();
  QPixmap *pixmap;
  float filas,columnas;
  float ancho;
  float alto;
  int getPosx();
  void setPosx(int px);
  int getPosy();
  void setPosy(int py);
  QRectF boundingRect() const;
  void paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget);


signals:

public slots:
    void Actualizacion();
};

#endif // FLOOR_H
