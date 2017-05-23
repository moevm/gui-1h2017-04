#ifndef SUPPORT_H
#define SUPPORT_H

#include <QFile>
#include <QWidget>

namespace Ui {
class Support;
}

class Support : public QWidget
{
    Q_OBJECT

public:
    explicit Support(QWidget *parent = 0);
    ~Support();

    void OutputText(int i);
private:
    Ui::Support *ui;
};

#endif // SUPPORT_H
