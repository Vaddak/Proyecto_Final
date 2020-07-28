#ifndef UNO_H
#define UNO_H
#include "mainwindow.h"
#include <QDialog>

namespace Ui {
  class uno;
}

class uno : public QDialog
{
  Q_OBJECT

public:
  explicit uno(QWidget *parent = nullptr);
  ~uno();

private:
  Ui::uno *ui;
  QGraphicsScene *scene;
  Spartan *player1;
  muro *muro;
};

#endif // UNO_H
