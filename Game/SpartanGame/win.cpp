#include "win.h"
#include "ui_win.h"

win::win(QWidget *parent) :
  QDialog(parent),
  ui(new Ui::win)
{

  ui->setupUi(this);
  scene = new QGraphicsScene(0,0,1200,900);
  ui->graphicsView->setScene(scene);
}

win::~win()
{
  delete ui;
}

void win::on_salir_clicked()
{
    this->close();
}
