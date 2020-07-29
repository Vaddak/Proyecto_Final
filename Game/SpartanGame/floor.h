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
#include <QPixmap>
#include <QIcon>

class floor:  public QObject, public QGraphicsPixmapItem
{

  Q_OBJECT
  int posx, posy;

public:

  void muro1(int x_, int y_, QGraphicsItem *parent = 0);
  void muro2(int x_, int y_, QGraphicsItem *parent = 0);
  void muro3(int x_, int y_, QGraphicsItem *parent = 0);
  void muro4(int x_, int y_, QGraphicsItem *parent = 0);
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
