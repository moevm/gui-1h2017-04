#include "widget.h"
#include "ui_widget.h"

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);
    ui->groupBox_1->setVisible(1);
    ui->groupBox_2->setVisible(0);
    ui->groupBox_3->setVisible(0);
    ui->groupBox_4->setVisible(0);
    ui->groupBox_5->setVisible(0);
    ui->groupBox_6->setVisible(0);
    ui->groupBox_7->setVisible(0);
    ui->groupBox_8->setVisible(0);
    ui->groupBox_9->setVisible(0);
    ui->groupBox_10->setVisible(0);

    regularExp();
    connect(ui->lineEdit_27, SIGNAL(textChanged(QString)), this, SLOT(button14Enabled()));
    connect(ui->lineEdit_28, SIGNAL(textChanged(QString)), this, SLOT(button14Enabled()));
    connect(ui->comboBox, SIGNAL(currentIndexChanged (int)), this, SLOT(groupBoxVisibility(int)));

    connect(ui->alpha, SIGNAL(valueChanged(int)), this, SLOT(setAlpha()));
    connect(ui->scale, SIGNAL(valueChanged(int)), this, SLOT(setScale()));

    s = new Support();
}

Widget::~Widget()
{
    delete ui;
}

void Widget::setAlpha()
{
    ui->openGLWidget->setAlpha(ui->alpha->value() * (-0.1));
    ui->openGLWidget->update();
}

void Widget::setScale()
{
    ui->openGLWidget->setScale(ui->scale->value());
    ui->openGLWidget->update();
}

void Widget::regularExp()
{
    QRegExp exp1("([0]{1})|([1-9]{1}[0-9]{0,1})");
    QRegExp exp2("[1-9]{1}[0-9]{0,1}([/]{1}[1-9]{1}[0-9]{0,1}){0,1}");

    ui->lineEdit_11->setValidator(new QRegExpValidator(exp2, this));
    ui->lineEdit_12->setValidator(new QRegExpValidator(exp1, this));
    ui->lineEdit_13->setValidator(new QRegExpValidator(exp2, this));
    ui->lineEdit_14->setValidator(new QRegExpValidator(exp1, this));
    ui->lineEdit_15->setValidator(new QRegExpValidator(exp2, this));
    ui->lineEdit_16->setValidator(new QRegExpValidator(exp1, this));

    ui->lineEdit_17->setValidator(new QRegExpValidator(exp2, this));
    ui->lineEdit_18->setValidator(new QRegExpValidator(exp1, this));
    ui->lineEdit_19->setValidator(new QRegExpValidator(exp2, this));
    ui->lineEdit_20->setValidator(new QRegExpValidator(exp1, this));
    ui->lineEdit_21->setValidator(new QRegExpValidator(exp2, this));
    ui->lineEdit_22->setValidator(new QRegExpValidator(exp1, this));

    ui->lineEdit_23->setValidator(new QRegExpValidator(exp2, this));
    ui->lineEdit_24->setValidator(new QRegExpValidator(exp1, this));
    ui->lineEdit_25->setValidator(new QRegExpValidator(exp2, this));
    ui->lineEdit_26->setValidator(new QRegExpValidator(exp1, this));

    ui->lineEdit_27->setValidator(new QRegExpValidator(exp1, this));
    ui->lineEdit_28->setValidator(new QRegExpValidator(exp2, this));

    ui->lineEdit_41->setValidator(new QRegExpValidator(exp2, this));
    ui->lineEdit_42->setValidator(new QRegExpValidator(exp1, this));
    ui->lineEdit_43->setValidator(new QRegExpValidator(exp2, this));
    ui->lineEdit_44->setValidator(new QRegExpValidator(exp1, this));

    ui->lineEdit_45->setValidator(new QRegExpValidator(exp2, this));
    ui->lineEdit_46->setValidator(new QRegExpValidator(exp1, this));
    ui->lineEdit_47->setValidator(new QRegExpValidator(exp2, this));
    ui->lineEdit_48->setValidator(new QRegExpValidator(exp1, this));

    ui->lineEdit_49->setValidator(new QRegExpValidator(exp2, this));
    ui->lineEdit_50->setValidator(new QRegExpValidator(exp1, this));
    ui->lineEdit_51->setValidator(new QRegExpValidator(exp2, this));
    ui->lineEdit_52->setValidator(new QRegExpValidator(exp1, this));
    ui->lineEdit_53->setValidator(new QRegExpValidator(exp2, this));

    ui->lineEdit_54->setValidator(new QRegExpValidator(exp2, this));
    ui->lineEdit_55->setValidator(new QRegExpValidator(exp1, this));
    ui->lineEdit_56->setValidator(new QRegExpValidator(exp2, this));
    ui->lineEdit_57->setValidator(new QRegExpValidator(exp1, this));
    ui->lineEdit_58->setValidator(new QRegExpValidator(exp2, this));
    ui->lineEdit_59->setValidator(new QRegExpValidator(exp1, this));
}

void Widget::groupBoxVisibility(int comboIndex)
{
    switch(comboIndex) {
        case 0: {
            ui->groupBox_1->setVisible(1);
            ui->groupBox_2->setVisible(0);
            ui->groupBox_3->setVisible(0);
            ui->groupBox_4->setVisible(0);
            ui->groupBox_5->setVisible(0);
            ui->groupBox_6->setVisible(0);
            ui->groupBox_7->setVisible(0);
            ui->groupBox_8->setVisible(0);
            ui->groupBox_9->setVisible(0);
            ui->groupBox_10->setVisible(0);

            connect(ui->lineEdit_27, SIGNAL(textChanged(QString)), this, SLOT(button14Enabled()));
            connect(ui->lineEdit_28, SIGNAL(textChanged(QString)), this, SLOT(button14Enabled()));
            break;
        }
        case 1: {
                ui->groupBox_1->setVisible(0);
                ui->groupBox_2->setVisible(1);
                ui->groupBox_3->setVisible(0);
                ui->groupBox_4->setVisible(0);
                ui->groupBox_5->setVisible(0);
                ui->groupBox_6->setVisible(0);
                ui->groupBox_7->setVisible(0);
                ui->groupBox_8->setVisible(0);
                ui->groupBox_9->setVisible(0);
                ui->groupBox_10->setVisible(0);

                connect(ui->lineEdit_23, SIGNAL(textChanged(QString)), this, SLOT(button15Enabled()));
                connect(ui->lineEdit_24, SIGNAL(textChanged(QString)), this, SLOT(button15Enabled()));
                connect(ui->lineEdit_25, SIGNAL(textChanged(QString)), this, SLOT(button15Enabled()));
                connect(ui->lineEdit_26, SIGNAL(textChanged(QString)), this, SLOT(button15Enabled()));
                break;
        }
        case 2: {
                ui->groupBox_1->setVisible(0);
                ui->groupBox_2->setVisible(0);
                ui->groupBox_3->setVisible(1);
                ui->groupBox_4->setVisible(0);
                ui->groupBox_5->setVisible(0);
                ui->groupBox_6->setVisible(0);
                ui->groupBox_7->setVisible(0);
                ui->groupBox_8->setVisible(0);
                ui->groupBox_9->setVisible(0);
                ui->groupBox_10->setVisible(0);

                connect(ui->lineEdit_42, SIGNAL(textChanged(QString)), this, SLOT(button18Enabled()));
                connect(ui->lineEdit_41, SIGNAL(textChanged(QString)), this, SLOT(button18Enabled()));
                connect(ui->lineEdit_44, SIGNAL(textChanged(QString)), this, SLOT(button18Enabled()));
                connect(ui->lineEdit_43, SIGNAL(textChanged(QString)), this, SLOT(button18Enabled()));
                break;
        }
        case 3: {
                ui->groupBox_1->setVisible(0);
                ui->groupBox_2->setVisible(0);
                ui->groupBox_3->setVisible(0);
                ui->groupBox_4->setVisible(1);
                ui->groupBox_5->setVisible(0);
                ui->groupBox_6->setVisible(0);
                ui->groupBox_7->setVisible(0);
                ui->groupBox_8->setVisible(0);
                ui->groupBox_9->setVisible(0);
                ui->groupBox_10->setVisible(0);

                connect(ui->lineEdit_46, SIGNAL(textChanged(QString)), this, SLOT(button19Enabled()));
                connect(ui->lineEdit_45, SIGNAL(textChanged(QString)), this, SLOT(button19Enabled()));
                connect(ui->lineEdit_48, SIGNAL(textChanged(QString)), this, SLOT(button19Enabled()));
                connect(ui->lineEdit_47, SIGNAL(textChanged(QString)), this, SLOT(button19Enabled()));
                break;
        }
        case 4: {
                ui->groupBox_1->setVisible(0);
                ui->groupBox_2->setVisible(0);
                ui->groupBox_3->setVisible(0);
                ui->groupBox_4->setVisible(0);
                ui->groupBox_5->setVisible(1);
                ui->groupBox_6->setVisible(0);
                ui->groupBox_7->setVisible(0);
                ui->groupBox_8->setVisible(0);
                ui->groupBox_9->setVisible(0);
                ui->groupBox_10->setVisible(0);

                connect(ui->lineEdit_49, SIGNAL(textChanged(QString)), this, SLOT(button20Enabled()));
                connect(ui->lineEdit_50, SIGNAL(textChanged(QString)), this, SLOT(button20Enabled()));
                connect(ui->lineEdit_51, SIGNAL(textChanged(QString)), this, SLOT(button20Enabled()));
                connect(ui->lineEdit_52, SIGNAL(textChanged(QString)), this, SLOT(button20Enabled()));
                connect(ui->lineEdit_53, SIGNAL(textChanged(QString)), this, SLOT(button20Enabled()));
                break;
        }
        case 5: {
                ui->groupBox_1->setVisible(0);
                ui->groupBox_2->setVisible(0);
                ui->groupBox_3->setVisible(0);
                ui->groupBox_4->setVisible(0);
                ui->groupBox_5->setVisible(0);
                ui->groupBox_6->setVisible(1);
                ui->groupBox_7->setVisible(0);
                ui->groupBox_8->setVisible(0);
                ui->groupBox_9->setVisible(0);
                ui->groupBox_10->setVisible(0);

                connect(ui->lineEdit_54, SIGNAL(textChanged(QString)), this, SLOT(button21Enabled()));
                connect(ui->lineEdit_55, SIGNAL(textChanged(QString)), this, SLOT(button21Enabled()));
                connect(ui->lineEdit_56, SIGNAL(textChanged(QString)), this, SLOT(button21Enabled()));
                connect(ui->lineEdit_57, SIGNAL(textChanged(QString)), this, SLOT(button21Enabled()));
                connect(ui->lineEdit_58, SIGNAL(textChanged(QString)), this, SLOT(button21Enabled()));
                connect(ui->lineEdit_59, SIGNAL(textChanged(QString)), this, SLOT(button21Enabled()));
                break;
        }
        /*case 6: {
                ui->groupBox_1->setVisible(0);
                ui->groupBox_2->setVisible(0);
                ui->groupBox_3->setVisible(0);
                ui->groupBox_4->setVisible(0);
                ui->groupBox_5->setVisible(0);
                ui->groupBox_6->setVisible(0);
                ui->groupBox_7->setVisible(1);
                ui->groupBox_8->setVisible(0);
                ui->groupBox_9->setVisible(0);

                connect(ui->lineEdit_5, SIGNAL(textChanged(QString)), this, SLOT(button11Enabled()));
                connect(ui->lineEdit_5, SIGNAL(textChanged(QString)), this, SLOT(button11Enabled()));
                connect(ui->lineEdit_7, SIGNAL(textChanged(QString)), this, SLOT(button11Enabled()));
                connect(ui->lineEdit_8, SIGNAL(textChanged(QString)), this, SLOT(button11Enabled()));
                connect(ui->lineEdit_9, SIGNAL(textChanged(QString)), this, SLOT(button11Enabled()));
                connect(ui->lineEdit_10, SIGNAL(textChanged(QString)), this, SLOT(button11Enabled()));
                break;
        }*/
        /*case 7: {
                ui->groupBox_1->setVisible(0);
                ui->groupBox_2->setVisible(0);
                ui->groupBox_3->setVisible(0);
                ui->groupBox_4->setVisible(0);
                ui->groupBox_5->setVisible(0);
                ui->groupBox_6->setVisible(0);
                ui->groupBox_7->setVisible(0);
                ui->groupBox_8->setVisible(1);
                ui->groupBox_9->setVisible(0);

                connect(ui->lineEdit_11, SIGNAL(textChanged(QString)), this, SLOT(button12Enabled()));
                connect(ui->lineEdit_12, SIGNAL(textChanged(QString)), this, SLOT(button12Enabled()));
                connect(ui->lineEdit_13, SIGNAL(textChanged(QString)), this, SLOT(button12Enabled()));
                connect(ui->lineEdit_14, SIGNAL(textChanged(QString)), this, SLOT(button12Enabled()));
                connect(ui->lineEdit_15, SIGNAL(textChanged(QString)), this, SLOT(button12Enabled()));
                connect(ui->lineEdit_16, SIGNAL(textChanged(QString)), this, SLOT(button12Enabled()));
                break;
        }*/
        case 6: { //8
                ui->groupBox_1->setVisible(0);
                ui->groupBox_2->setVisible(0);
                ui->groupBox_3->setVisible(0);
                ui->groupBox_4->setVisible(0);
                ui->groupBox_5->setVisible(0);
                ui->groupBox_6->setVisible(0);
                ui->groupBox_7->setVisible(0);
                ui->groupBox_8->setVisible(0);
                ui->groupBox_9->setVisible(1);
                ui->groupBox_10->setVisible(0);

                connect(ui->lineEdit_17, SIGNAL(textChanged(QString)), this, SLOT(button13Enabled()));
                connect(ui->lineEdit_18, SIGNAL(textChanged(QString)), this, SLOT(button13Enabled()));
                connect(ui->lineEdit_19, SIGNAL(textChanged(QString)), this, SLOT(button13Enabled()));
                connect(ui->lineEdit_20, SIGNAL(textChanged(QString)), this, SLOT(button13Enabled()));
                connect(ui->lineEdit_21, SIGNAL(textChanged(QString)), this, SLOT(button13Enabled()));
                connect(ui->lineEdit_22, SIGNAL(textChanged(QString)), this, SLOT(button13Enabled()));
                break;
        }
        case 7: { //8
                ui->groupBox_1->setVisible(0);
                ui->groupBox_2->setVisible(0);
                ui->groupBox_3->setVisible(0);
                ui->groupBox_4->setVisible(0);
                ui->groupBox_5->setVisible(0);
                ui->groupBox_6->setVisible(0);
                ui->groupBox_7->setVisible(0);
                ui->groupBox_8->setVisible(0);
                ui->groupBox_9->setVisible(0);
                ui->groupBox_10->setVisible(1);
                ui->label_30->setVisible(false);
                connect(ui->lineEdit, SIGNAL(textChanged(QString)), this, SLOT(button16Enabled()));
                break;
        }
    }
}

void Widget::button16Enabled()
{
    ui->pushButton_16->setEnabled(true);
}

void Widget::button14Enabled()
{
    ui->pushButton_14->setEnabled(ui->lineEdit_27->hasAcceptableInput() &&
                                  ui->lineEdit_28->hasAcceptableInput());
}

void Widget::button15Enabled()
{
    ui->pushButton_15->setEnabled(ui->lineEdit_23->hasAcceptableInput() &&
                                  ui->lineEdit_24->hasAcceptableInput() &&
                                  ui->lineEdit_25->hasAcceptableInput() &&
                                  ui->lineEdit_26->hasAcceptableInput());
}

void Widget::button18Enabled()
{
    ui->pushButton_18->setEnabled(ui->lineEdit_41->hasAcceptableInput() &&
                                  ui->lineEdit_42->hasAcceptableInput() &&
                                  ui->lineEdit_43->hasAcceptableInput() &&
                                  ui->lineEdit_44->hasAcceptableInput());
}

void Widget::button19Enabled()
{
    ui->pushButton_19->setEnabled(ui->lineEdit_45->hasAcceptableInput() &&
                                  ui->lineEdit_46->hasAcceptableInput() &&
                                  ui->lineEdit_47->hasAcceptableInput() &&
                                  ui->lineEdit_48->hasAcceptableInput());
}

void Widget::button20Enabled()
{
    ui->pushButton_20->setEnabled(ui->lineEdit_49->hasAcceptableInput() &&
                                  ui->lineEdit_50->hasAcceptableInput() &&
                                  ui->lineEdit_51->hasAcceptableInput() &&
                                  ui->lineEdit_52->hasAcceptableInput() &&
                                  ui->lineEdit_53->hasAcceptableInput());
}

void Widget::button21Enabled()
{
    ui->pushButton_21->setEnabled(ui->lineEdit_54->hasAcceptableInput() &&
                                  ui->lineEdit_55->hasAcceptableInput() &&
                                  ui->lineEdit_56->hasAcceptableInput() &&
                                  ui->lineEdit_57->hasAcceptableInput() &&
                                  ui->lineEdit_58->hasAcceptableInput() &&
                                  ui->lineEdit_59->hasAcceptableInput());
}

void Widget::button11Enabled()
{
    ui->pushButton_11->setEnabled(ui->lineEdit_5->hasAcceptableInput() &&
                                  ui->lineEdit_6->hasAcceptableInput() &&
                                  ui->lineEdit_7->hasAcceptableInput() &&
                                  ui->lineEdit_8->hasAcceptableInput() &&
                                  ui->lineEdit_9->hasAcceptableInput() &&
                                  ui->lineEdit_10->hasAcceptableInput());
}

void Widget::button12Enabled()
{
    ui->pushButton_12->setEnabled(ui->lineEdit_11->hasAcceptableInput() &&
                                  ui->lineEdit_12->hasAcceptableInput() &&
                                  ui->lineEdit_13->hasAcceptableInput() &&
                                  ui->lineEdit_14->hasAcceptableInput() &&
                                  ui->lineEdit_15->hasAcceptableInput() &&
                                  ui->lineEdit_16->hasAcceptableInput());
}

void Widget::button13Enabled()
{
    ui->pushButton_13->setEnabled(ui->lineEdit_17->hasAcceptableInput() &&
                                  ui->lineEdit_18->hasAcceptableInput() &&
                                  ui->lineEdit_19->hasAcceptableInput() &&
                                  ui->lineEdit_20->hasAcceptableInput() &&
                                  ui->lineEdit_21->hasAcceptableInput() &&
                                  ui->lineEdit_22->hasAcceptableInput());
}

void Widget::on_pushButton_14_clicked()
{
    ui->openGLWidget->setParam(ui->comboBox->currentIndex(),
                               0.0, check(ui->lineEdit_28->text()), 0.0,
                               0.0, check(ui->lineEdit_27->text()), 0.0);
    ui->openGLWidget->update();
}

void Widget::on_pushButton_16_clicked()
{
    MatchParser pars;
    pars.setVariable("x", 4.0);
    pars.setVariable("y", 2.0);
    pars.Parse(ui->lineEdit->text());
    if (pars.getFlag()) {
        ui->label_30->setVisible(false);
        ui->openGLWidget->setValue(ui->comboBox->currentIndex(), ui->lineEdit->text());
        ui->openGLWidget->update();

    }
    else {ui->label_30->setVisible(true);}
}

void Widget::on_pushButton_15_clicked()
{
    ui->openGLWidget->setParam(ui->comboBox->currentIndex(),
                               check(ui->lineEdit_23->text()), check(ui->lineEdit_25->text()), 0.0,
                               check(ui->lineEdit_24->text()), check(ui->lineEdit_26->text()), 0.0);
    ui->openGLWidget->update();
}

void Widget::on_pushButton_18_clicked()
{
    ui->openGLWidget->setParam(ui->comboBox->currentIndex(),
                               check(ui->lineEdit_41->text()), check(ui->lineEdit_43->text()), 0.0,
                               check(ui->lineEdit_42->text()), check(ui->lineEdit_44->text()), 0.0);
    ui->openGLWidget->update();
}

void Widget::on_pushButton_19_clicked()
{
    ui->openGLWidget->setParam(ui->comboBox->currentIndex(),
                               check(ui->lineEdit_45->text()), check(ui->lineEdit_47->text()), 0.0,
                               check(ui->lineEdit_46->text()), check(ui->lineEdit_48->text()), 0.0);
    ui->openGLWidget->update();
}

void Widget::on_pushButton_20_clicked()
{
    ui->openGLWidget->setParam(ui->comboBox->currentIndex(), check(ui->lineEdit_49->text()),
                               check(ui->lineEdit_51->text()), check(ui->lineEdit_53->text()),
                               check(ui->lineEdit_50->text()), check(ui->lineEdit_52->text()), 0.0);
    ui->openGLWidget->update();
}

void Widget::on_pushButton_21_clicked()
{
    ui->openGLWidget->setParam(ui->comboBox->currentIndex(),
                               check(ui->lineEdit_54->text()), check(ui->lineEdit_56->text()),
                               check(ui->lineEdit_58->text()), check(ui->lineEdit_55->text()),
                               check(ui->lineEdit_57->text()), check(ui->lineEdit_59->text()));
    ui->openGLWidget->update();
}

void Widget::on_pushButton_11_clicked()
{
    ui->openGLWidget->setParam(ui->comboBox->currentIndex(),
                               check(ui->lineEdit_5->text()), check(ui->lineEdit_7->text()),
                               check(ui->lineEdit_9->text()), check(ui->lineEdit_6->text()),
                               check(ui->lineEdit_8->text()), check(ui->lineEdit_10->text()));
    ui->openGLWidget->update();
}

void Widget::on_pushButton_12_clicked()
{
    ui->openGLWidget->setParam(ui->comboBox->currentIndex(),
                               check(ui->lineEdit_11->text()), check(ui->lineEdit_13->text()),
                               check(ui->lineEdit_15->text()), check(ui->lineEdit_12->text()),
                               check(ui->lineEdit_14->text()), check(ui->lineEdit_16->text()));
    ui->openGLWidget->update();
}

void Widget::on_pushButton_13_clicked()
{
   //float a = check();
    /*ui->openGLWidget->setParam(ui->comboBox->currentIndex(),
                               ui->lineEdit_17->text().toFloat(), ui->lineEdit_19->text().toFloat(),
                               ui->lineEdit_21->text().toFloat(), ui->lineEdit_18->text().toFloat(),
                               ui->lineEdit_20->text().toFloat(), ui->lineEdit_22->text().toFloat());*/
    /*float a = check(ui->lineEdit_17->text());
    float b = check(ui->lineEdit_19->text());
    float c = check(ui->lineEdit_21->text());
    float x0 = check(ui->lineEdit_18->text());
    float y0 = check(ui->lineEdit_20->text());
    float z0 = check(ui->lineEdit_22->text());*/
    ui->openGLWidget->setParam(ui->comboBox->currentIndex(),
                               check(ui->lineEdit_17->text()), check(ui->lineEdit_19->text()),
                               check(ui->lineEdit_21->text()), check(ui->lineEdit_18->text()),
                               check(ui->lineEdit_20->text()), check(ui->lineEdit_22->text()));
    ui->openGLWidget->update();
}

float Widget::check(QString text)
{
    QString a, b;
    for (int i = 0; i < text.size(); i++) {
        if (text[i] == '/') {
            if (i == 1) {
                a = text[i - 1];
                if (text.size() == 3) b = text[i + 1];
                else {
                    b = text[i + 1];
                    b.append(text[i + 2]);
                }
            }
            if (i == 2) {
                a = text[i - 2];
                a.append(text[i - 1]);
                if (text.size() == 4) b = text[i + 1];
                else {
                    b = text[i + 1];
                    b.append(text[i + 1]);
                }
            }
            return (a.toFloat() / b.toFloat());
        }
    }
    return (text.toFloat());
}

void Widget::on_pushButton_2_clicked()
{
    s->OutputText(1);
    s->show();

}

void Widget::on_pushButton_3_clicked()
{
    s->OutputText(2);
    s->show();

}
