#ifndef SCARGAR_H
#define SCARGAR_H
#include "mainwindow.h"
#include <QDialog>

namespace Ui {
  class scargar;
}

class scargar : public QDialog
{
  Q_OBJECT

public:
  explicit scargar(QWidget *parent = nullptr);
  ~scargar();

private slots:
  void on_salir_clicked();

  void on_atras_clicked();

private:
  Ui::scargar *ui;
  QGraphicsScene *scene;
};

#endif // SCARGAR_H
