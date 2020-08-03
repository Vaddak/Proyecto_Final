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

class bala: public QObject, public QGraphicsPixmapItem
{
  Q_OBJECT
public:
  bala(QGraphicsItem *parent=0);

public slots:
  void move();
};



#endif // BALA_H
