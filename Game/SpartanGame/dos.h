#ifndef DOS_H
#define DOS_H
#include "mainwindow.h"
#include <QDialog>

namespace Ui {
  class dos;
}

class dos : public QDialog
{
  Q_OBJECT

public:
  explicit dos(QWidget *parent = nullptr);
  void mdos(QWidget *parent = nullptr);
  void sdos(QWidget *parent = nullptr);
  ~dos();

private:
  Ui::dos *ui;
  QGraphicsScene *scene;
  Spartan *player1, *player2;
  covenant *grunt1, *grunt2, *elite1, *elite2, *elite3, *elite4, *elite5;
  floor *wall1, *wall2, *wall3, *wall4, *wall5, *wall6, *wall7, *wall8, *wall9, *wall10, *wall11, *wall12, *wall13, *wall14, *wall15;

};

#endif // DOS_H
