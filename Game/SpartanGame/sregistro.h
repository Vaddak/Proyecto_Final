#ifndef SREGISTRO_H
#define SREGISTRO_H
#include "mainwindow.h"
#include <QDialog>

namespace Ui {
  class sregistro;
}


class sregistro : public QDialog
{
  Q_OBJECT


public:
  void sescribir(string);
  explicit sregistro(QWidget *parent = nullptr);
  ~sregistro();


private slots:
  void on_salir_clicked();

  void on_atras_clicked();

  void on_aceptar_clicked();

private:
  Ui::sregistro *ui;
  QGraphicsScene *scene;
};

#endif // SREGISTRO_H
