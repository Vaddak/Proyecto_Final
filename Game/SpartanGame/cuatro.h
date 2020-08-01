#ifndef CUATRO_H
#define CUATRO_H
#include "mainwindow.h"
#include <QDialog>

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
};

#endif // CUATRO_H
