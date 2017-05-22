#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>

namespace Ui {
class Widget;
}

class Widget : public QWidget
{
    Q_OBJECT

public:
    explicit Widget(QWidget *parent = 0);
    ~Widget();
    void regularExp();
    float check(QString text);

private slots:
    void groupBoxVisibility(int);
    void button14Enabled();
    void button15Enabled();
    void button18Enabled();
    void button19Enabled();
    void button20Enabled();
    void button21Enabled();
    void button11Enabled();
    void button12Enabled();
    void button13Enabled();
    void button16Enabled();
    void on_pushButton_16_clicked();
    void on_pushButton_14_clicked();
    void on_pushButton_15_clicked();
    void on_pushButton_18_clicked();
    void on_pushButton_19_clicked();
    void on_pushButton_20_clicked();
    void on_pushButton_21_clicked();
    void on_pushButton_11_clicked();
    void on_pushButton_12_clicked();
    void on_pushButton_13_clicked();
    void setAlpha();
    void setScale();

private:
    Ui::Widget *ui;
};

#endif // WIDGET_H
