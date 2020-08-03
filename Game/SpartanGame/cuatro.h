#ifndef CUATRO_H
#define CUATRO_H
#include "mainwindow.h"
#include <QDialog>
#include "pelican.h"
#include "phantom.h"
#include "floor.h"
namespace Ui {
  class cuatro;
}

class cuatro : public QDialog
{
  Q_OBJECT

public:
  explicit cuatro(QWidget *parent = nullptr);
  void scuatro(QWidget *parent = nullptr);
  void mcuatro(QWidget *parent = nullptr);
  void keyPressEvent(QKeyEvent *event);

  ~cuatro();

private:
  QList<Pelican *> pelicans;
  QGraphicsScene *scene;
  Ui::cuatro *ui;
  Pelican *pelican1, *pelican2;
  phantom *phantom1, *phantom2;
  QGraphicsView *view = new QGraphicsView(this);
  floor *wall1, *wall2, *wall3, *wall4, *wall5, *wall6, *wall7, *wall8, *wall9, *wall10, *wall11, *wall12;
};

#endif // CUATRO_H
