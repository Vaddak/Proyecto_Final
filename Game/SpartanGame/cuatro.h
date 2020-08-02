#ifndef CUATRO_H
#define CUATRO_H
#include "mainwindow.h"
#include <QDialog>
#include "pelican.h"
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

  ~cuatro();

private:
  QGraphicsScene *scene;
  Ui::cuatro *ui;
  Pelican *pelican1, *pelican2;
  floor *wall1, *wall2, *wall3, *wall4, *wall5, *wall6, *wall7, *wall8, *wall9, *wall10, *wall11, *wall12;
};

#endif // CUATRO_H
