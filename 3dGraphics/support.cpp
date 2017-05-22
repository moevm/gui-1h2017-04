#include "support.h"
#include "QFile"
#include "ui_support.h"

Support::Support(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Support)
{
    ui->setupUi(this);
    QFile file;
}
Support::OutputText(int number)
{
  if (number==1) {
      file.setName("support.txt");
      if (file.open(QIODevice::ReadOnly))
          ui->textEdit->setPlainText(QString::fromUtf8(file.readAll()));
      file.close;
  };
  if (number==2) {
      file.setName("developers.txt");
      if (file.open(QIODevice::ReadOnly))
          ui->textEdit->setPlainText(QString::fromUtf8(file.readAll()));
      file.close;
  };
}

Support::~Support()
{
    delete ui;
}
