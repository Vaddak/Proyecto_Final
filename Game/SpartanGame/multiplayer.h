#ifndef MULTIPLAYER_H
#define MULTIPLAYER_H
#include "mainwindow.h"
#include <QDialog>

namespace Ui {
  class multiplayer;
}

class multiplayer : public QDialog
{
  Q_OBJECT

public:
  explicit multiplayer(QWidget *parent = nullptr);
  ~multiplayer();

private slots:
  void on_registro_clicked();
  void on_salir_clicked();



private:
  Ui::multiplayer *ui;
  QGraphicsScene *scene;
};

#endif // MULTIPLAYER_H
