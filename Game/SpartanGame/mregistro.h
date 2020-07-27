#ifndef MREGISTRO_H
#define MREGISTRO_H
#include "mainwindow.h"
#include <QDialog>

namespace Ui {
  class mregistro;
}

class mregistro : public QDialog
{
  Q_OBJECT

public:
  void mescribir(string,string);
  explicit mregistro(QWidget *parent = nullptr);
  ~mregistro();

private slots:
  void on_aceptar_clicked();

  void on_atras_clicked();

  void on_salir_clicked();

private:
  Ui::mregistro *ui;
  QGraphicsScene *scene;
};

#endif // MREGISTRO_H
