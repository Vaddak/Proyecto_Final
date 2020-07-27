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

class Spartan:  public QObject, public QGraphicsItem
{
    Q_OBJECT
    int posx, posy;
public:

    explicit Spartan(QObject *parent = nullptr);
    QTimer *timer;
    QPixmap *pixmap;
    float filas,columnas;
    float ancho;
    float alto;
    QRectF boundingRect() const;
    void paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget);
    void up();
    void right();
    int getPosx();
    void setPosx(int px);
    int getPosy();
    void setPosy(int py);



signals:

public slots:
    void Actualizacion();

};
#endif // SPARTAN_H
