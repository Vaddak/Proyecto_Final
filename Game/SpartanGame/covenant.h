#ifndef COVENANT_H
#define COVENANT_H
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


class covenant:  public QObject, public QGraphicsPixmapItem
{
  Q_OBJECT
  int posx;
  int posy;
  int segundo=0;
  int e = 30;
  bool m = true;;

public:
 // covenant(QGraphicsItem *parent=0);
  void grunt(int x_, int y_, QGraphicsItem *parent = 0);
  void yanme(int x_, int y_);
  void eliteblue(int x_, int y_, QGraphicsItem *parent = 0);
  void elitered(int x_, int y_, QGraphicsItem *parent = 0);
  void elitebright();
  void elitebleft();
  void eliterleft();
  void eliterright();

  float filas,columnas;
  float ancho;
  float alto;
  int getPosx();
  void setPosx(int px);
  int getPosy();
  void setPosy(int py);
  QRectF boundingRect() const;
  void paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget);
  QTimer *timer, *timermove, *timermov, *time;
  QPixmap *pixmap;

  signals:

  public slots:
      void second();
      void yanmemove();
      void gruntact();
      void eliteact();
      void gruntright();
      void gruntleft();
};

#endif // COVENANT_H








