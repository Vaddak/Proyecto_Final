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

  floor *wall1, *wall2, *wall3, *wall4, *wall5, *wall6, *wall7, *wall8, *wall9;

};

#endif // UNO_H
