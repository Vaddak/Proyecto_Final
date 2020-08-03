#include "test.h"

test::test(): escala(1)
{
  float posx, posy, velx, vely, r, mass, K, e;
  posx = 32;
  posy = 150;
  r = 20;
  mass = 50;
  velx = 0;
  vely = 0;
  K = 0.08;
  e = 0.2;
  esf = new body(posx, posy, velx, vely, r, mass, K, e);
}

test::~test()
{
  delete esf;
}

QRectF test::boundingRect() const
{
  return QRectF(-1*escala*esf->get_Radio(),-1*escala*esf->get_Radio(),2*escala*esf->get_Radio(),2*escala*esf->get_Radio());
}

void test::paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget)
{
  painter->setBrush(Qt::red);
  painter->drawEllipse(boundingRect());

}

void test::setEscala(float s)
{
  escala = s;
}

void test::actualizar(float v_lim)
{
  esf->actualizar();
  setPos(esf->get_PosX(),(v_lim-esf->get_PosY()));
}

body *test::getEsf()
{
  return esf;
}
