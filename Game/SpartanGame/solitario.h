#ifndef SOLITARIO_H
#define SOLITARIO_H

#include <QDialog>
#include "mainwindow.h"
#include "ui_mainwindow.h"

namespace Ui {
  class solitario;
}

class solitario : public QDialog
{
  Q_OBJECT

public:
  explicit solitario(QWidget *parent = nullptr);
  ~solitario();

private slots:
  void on_salir_clicked();

  void on_registro_clicked();




private:
  Ui::solitario *ui;
  QGraphicsScene *scenesolitario;

};

#endif // SOLITARIO_H
