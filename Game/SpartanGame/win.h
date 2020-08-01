#ifndef WIN_H
#define WIN_H
#include "mainwindow.h"
#include <QDialog>

namespace Ui {
  class win;
}

class win : public QDialog
{
  Q_OBJECT

public:
  explicit win(QWidget *parent = nullptr);
  ~win();

private slots:
  void on_salir_clicked();

private:
  Ui::win *ui;
  QGraphicsScene *scene;
};

#endif // WIN_H
