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
  void suno(QWidget *parent = nullptr);
  void muno(QWidget *parent = nullptr);
  ~uno();

private:
  Ui::uno *ui;
  QGraphicsScene *scene;
  Spartan *player1, *player2;
  covenant *grunt1, *grunt2, *grunt3, *grunt4, *grunt5, *grunt6, *grunt7;
  floor *wall1, *wall2, *wall3, *wall4, *wall5, *wall6, *wall7, *wall8, *wall9, *wall10, *wall11, *wall12, *wall13, *wall14, *wall15;

};

#endif // UNO_H
