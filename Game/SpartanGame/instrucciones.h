#ifndef INSTRUCCIONES_H
#define INSTRUCCIONES_H
#include "mainwindow.h"
#include <QDialog>

namespace Ui {
  class instrucciones;
}

class instrucciones : public QDialog
{
  Q_OBJECT

public:
  explicit instrucciones(QWidget *parent = nullptr);
  ~instrucciones();

private slots:

  void on_aceptar_clicked();

private:
  Ui::instrucciones *ui;
  QGraphicsScene *scene;
};

#endif // INSTRUCCIONES_H
