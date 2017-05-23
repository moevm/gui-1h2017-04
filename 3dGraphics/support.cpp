#include "support.h"
#include "ui_support.h"

Support::Support(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Support)
{
    ui->setupUi(this);

}
void Support::OutputText(int i)
{
  if (i==1) {
      ui->textEdit->setVisible(true);
      ui->textEdit_2->setVisible(false);
  }
  if (i==2) {
      ui->textEdit->setVisible(false);
      ui->textEdit_2->setVisible(true);
  }
}

Support::~Support()
{
    delete ui;
}
