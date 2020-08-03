#ifndef TEST_H
#define TEST_H
#include <QPainter>
#include <QGraphicsItem>
#include <QGraphicsScene>
#include "body.h"

class test: public QGraphicsItem
{
public:
  test();
  ~test();
  QRectF boundingRect() const;
  void paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget = nullptr);
  void setEscala(float s);
  void actualizar(float v_lim);
  body *getEsf();

private:
  body *esf;
  float escala;
};

#endif // TEST_H
