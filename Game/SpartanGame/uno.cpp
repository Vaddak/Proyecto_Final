#include "uno.h"
#include "ui_uno.h"

uno::uno(QWidget *parent) :
  QDialog(parent),
  ui(new Ui::uno)
{
  ui->setupUi(this);
}

uno::~uno()
{
  delete ui;
}
