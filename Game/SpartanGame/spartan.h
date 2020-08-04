#ifndef SPARTAN_H
#define SPARTAN_H
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
#include "bala.h"
class Spartan:  public QObject, public QGraphicsItem
{
    Q_OBJECT
    int posx, posy;
public:

    Spartan();
    void spartan2();
    QTimer *timer;
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
    void up();
    void right();
    void shoot();




signals:

public slots:
    void Actualizacion();

};

#endif // SPARTAN_H
