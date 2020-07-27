#ifndef UNO_H
#define UNO_H

#include <QDialog>

namespace Ui {
  class uno;
}

class uno : public QDialog
{
  Q_OBJECT

public:
  explicit uno(QWidget *parent = nullptr);
  ~uno();

private:
  Ui::uno *ui;
};

#endif // UNO_H
