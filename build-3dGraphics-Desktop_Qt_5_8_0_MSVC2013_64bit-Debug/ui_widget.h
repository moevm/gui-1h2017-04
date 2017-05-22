/********************************************************************************
** Form generated from reading UI file 'widget.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_H
#define UI_WIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QWidget>
#include "scene.h"

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    Scene *openGLWidget;
    QGroupBox *groupBox_7;
    QPushButton *pushButton_11;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QLineEdit *lineEdit_5;
    QLabel *label;
    QLineEdit *lineEdit_6;
    QLabel *label_2;
    QLineEdit *lineEdit_7;
    QLabel *label_3;
    QLineEdit *lineEdit_8;
    QLabel *label_4;
    QLineEdit *lineEdit_9;
    QLabel *label_5;
    QLineEdit *lineEdit_10;
    QLabel *label_6;
    QGroupBox *groupBox_8;
    QPushButton *pushButton_12;
    QWidget *layoutWidget_2;
    QHBoxLayout *horizontalLayout_2;
    QLineEdit *lineEdit_11;
    QLabel *label_7;
    QLineEdit *lineEdit_12;
    QLabel *label_8;
    QLineEdit *lineEdit_13;
    QLabel *label_9;
    QLineEdit *lineEdit_14;
    QLabel *label_10;
    QLineEdit *lineEdit_15;
    QLabel *label_11;
    QLineEdit *lineEdit_16;
    QLabel *label_12;
    QGroupBox *groupBox_9;
    QPushButton *pushButton_13;
    QWidget *layoutWidget_3;
    QHBoxLayout *horizontalLayout_3;
    QLineEdit *lineEdit_17;
    QLabel *label_13;
    QLineEdit *lineEdit_18;
    QLabel *label_14;
    QLineEdit *lineEdit_19;
    QLabel *label_15;
    QLineEdit *lineEdit_20;
    QLabel *label_16;
    QLineEdit *lineEdit_21;
    QLabel *label_17;
    QLineEdit *lineEdit_22;
    QLabel *label_18;
    QGroupBox *groupBox_1;
    QPushButton *pushButton_14;
    QWidget *layoutWidget1;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_22;
    QLineEdit *lineEdit_27;
    QLabel *label_24;
    QLineEdit *lineEdit_28;
    QLabel *label_23;
    QGroupBox *groupBox_2;
    QPushButton *pushButton_15;
    QWidget *layoutWidget2;
    QHBoxLayout *horizontalLayout_5;
    QLineEdit *lineEdit_23;
    QLabel *label_19;
    QLineEdit *lineEdit_24;
    QLabel *label_20;
    QLineEdit *lineEdit_25;
    QLabel *label_21;
    QLineEdit *lineEdit_26;
    QLabel *label_25;
    QGroupBox *groupBox_3;
    QPushButton *pushButton_18;
    QWidget *layoutWidget_6;
    QHBoxLayout *horizontalLayout_8;
    QLineEdit *lineEdit_41;
    QLabel *label_38;
    QLineEdit *lineEdit_42;
    QLabel *label_39;
    QLineEdit *lineEdit_43;
    QLabel *label_40;
    QLineEdit *lineEdit_44;
    QLabel *label_41;
    QGroupBox *groupBox_4;
    QPushButton *pushButton_19;
    QWidget *layoutWidget_7;
    QHBoxLayout *horizontalLayout_9;
    QLineEdit *lineEdit_45;
    QLabel *label_42;
    QLineEdit *lineEdit_46;
    QLabel *label_43;
    QLineEdit *lineEdit_47;
    QLabel *label_44;
    QLineEdit *lineEdit_48;
    QLabel *label_45;
    QGroupBox *groupBox_5;
    QPushButton *pushButton_20;
    QWidget *layoutWidget3;
    QHBoxLayout *horizontalLayout_10;
    QLineEdit *lineEdit_49;
    QLabel *label_46;
    QLineEdit *lineEdit_50;
    QLabel *label_47;
    QLineEdit *lineEdit_51;
    QLabel *label_48;
    QLineEdit *lineEdit_52;
    QLabel *label_49;
    QLineEdit *lineEdit_53;
    QLabel *label_50;
    QGroupBox *groupBox_6;
    QPushButton *pushButton_21;
    QWidget *layoutWidget_8;
    QHBoxLayout *horizontalLayout_11;
    QLineEdit *lineEdit_54;
    QLabel *label_51;
    QLineEdit *lineEdit_55;
    QLabel *label_52;
    QLineEdit *lineEdit_56;
    QLabel *label_53;
    QLineEdit *lineEdit_57;
    QLabel *label_54;
    QLineEdit *lineEdit_58;
    QLabel *label_55;
    QLineEdit *lineEdit_59;
    QLabel *label_56;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QGroupBox *groupBox;
    QLabel *label_26;
    QLabel *label_27;
    QComboBox *comboBox;
    QSlider *alpha;
    QSlider *scale;
    QLabel *label_28;
    QPushButton *pushButton_3;
    QGroupBox *groupBox_10;
    QPushButton *pushButton_16;
    QLineEdit *lineEdit;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QStringLiteral("Widget"));
        Widget->resize(690, 510);
        openGLWidget = new Scene(Widget);
        openGLWidget->setObjectName(QStringLiteral("openGLWidget"));
        openGLWidget->setGeometry(QRect(10, 10, 491, 401));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(openGLWidget->sizePolicy().hasHeightForWidth());
        openGLWidget->setSizePolicy(sizePolicy);
        groupBox_7 = new QGroupBox(Widget);
        groupBox_7->setObjectName(QStringLiteral("groupBox_7"));
        groupBox_7->setGeometry(QRect(10, 420, 501, 81));
        sizePolicy.setHeightForWidth(groupBox_7->sizePolicy().hasHeightForWidth());
        groupBox_7->setSizePolicy(sizePolicy);
        pushButton_11 = new QPushButton(groupBox_7);
        pushButton_11->setObjectName(QStringLiteral("pushButton_11"));
        pushButton_11->setGeometry(QRect(360, 38, 120, 37));
        layoutWidget = new QWidget(groupBox_7);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(10, 10, 427, 22));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        lineEdit_5 = new QLineEdit(layoutWidget);
        lineEdit_5->setObjectName(QStringLiteral("lineEdit_5"));
        lineEdit_5->setMaximumSize(QSize(31, 21));

        horizontalLayout->addWidget(lineEdit_5);

        label = new QLabel(layoutWidget);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout->addWidget(label);

        lineEdit_6 = new QLineEdit(layoutWidget);
        lineEdit_6->setObjectName(QStringLiteral("lineEdit_6"));
        lineEdit_6->setMaximumSize(QSize(31, 21));

        horizontalLayout->addWidget(lineEdit_6);

        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName(QStringLiteral("label_2"));

        horizontalLayout->addWidget(label_2);

        lineEdit_7 = new QLineEdit(layoutWidget);
        lineEdit_7->setObjectName(QStringLiteral("lineEdit_7"));
        lineEdit_7->setMaximumSize(QSize(31, 21));

        horizontalLayout->addWidget(lineEdit_7);

        label_3 = new QLabel(layoutWidget);
        label_3->setObjectName(QStringLiteral("label_3"));

        horizontalLayout->addWidget(label_3);

        lineEdit_8 = new QLineEdit(layoutWidget);
        lineEdit_8->setObjectName(QStringLiteral("lineEdit_8"));
        lineEdit_8->setMaximumSize(QSize(31, 21));

        horizontalLayout->addWidget(lineEdit_8);

        label_4 = new QLabel(layoutWidget);
        label_4->setObjectName(QStringLiteral("label_4"));

        horizontalLayout->addWidget(label_4);

        lineEdit_9 = new QLineEdit(layoutWidget);
        lineEdit_9->setObjectName(QStringLiteral("lineEdit_9"));
        lineEdit_9->setMaximumSize(QSize(31, 21));

        horizontalLayout->addWidget(lineEdit_9);

        label_5 = new QLabel(layoutWidget);
        label_5->setObjectName(QStringLiteral("label_5"));

        horizontalLayout->addWidget(label_5);

        lineEdit_10 = new QLineEdit(layoutWidget);
        lineEdit_10->setObjectName(QStringLiteral("lineEdit_10"));
        lineEdit_10->setMaximumSize(QSize(31, 21));

        horizontalLayout->addWidget(lineEdit_10);

        label_6 = new QLabel(layoutWidget);
        label_6->setObjectName(QStringLiteral("label_6"));

        horizontalLayout->addWidget(label_6);

        groupBox_8 = new QGroupBox(Widget);
        groupBox_8->setObjectName(QStringLiteral("groupBox_8"));
        groupBox_8->setGeometry(QRect(10, 420, 501, 81));
        sizePolicy.setHeightForWidth(groupBox_8->sizePolicy().hasHeightForWidth());
        groupBox_8->setSizePolicy(sizePolicy);
        pushButton_12 = new QPushButton(groupBox_8);
        pushButton_12->setObjectName(QStringLiteral("pushButton_12"));
        pushButton_12->setGeometry(QRect(360, 38, 120, 37));
        layoutWidget_2 = new QWidget(groupBox_8);
        layoutWidget_2->setObjectName(QStringLiteral("layoutWidget_2"));
        layoutWidget_2->setGeometry(QRect(10, 10, 427, 22));
        horizontalLayout_2 = new QHBoxLayout(layoutWidget_2);
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        lineEdit_11 = new QLineEdit(layoutWidget_2);
        lineEdit_11->setObjectName(QStringLiteral("lineEdit_11"));
        lineEdit_11->setMaximumSize(QSize(31, 21));

        horizontalLayout_2->addWidget(lineEdit_11);

        label_7 = new QLabel(layoutWidget_2);
        label_7->setObjectName(QStringLiteral("label_7"));

        horizontalLayout_2->addWidget(label_7);

        lineEdit_12 = new QLineEdit(layoutWidget_2);
        lineEdit_12->setObjectName(QStringLiteral("lineEdit_12"));
        lineEdit_12->setMaximumSize(QSize(31, 21));

        horizontalLayout_2->addWidget(lineEdit_12);

        label_8 = new QLabel(layoutWidget_2);
        label_8->setObjectName(QStringLiteral("label_8"));

        horizontalLayout_2->addWidget(label_8);

        lineEdit_13 = new QLineEdit(layoutWidget_2);
        lineEdit_13->setObjectName(QStringLiteral("lineEdit_13"));
        lineEdit_13->setMaximumSize(QSize(31, 21));

        horizontalLayout_2->addWidget(lineEdit_13);

        label_9 = new QLabel(layoutWidget_2);
        label_9->setObjectName(QStringLiteral("label_9"));

        horizontalLayout_2->addWidget(label_9);

        lineEdit_14 = new QLineEdit(layoutWidget_2);
        lineEdit_14->setObjectName(QStringLiteral("lineEdit_14"));
        lineEdit_14->setMaximumSize(QSize(31, 21));

        horizontalLayout_2->addWidget(lineEdit_14);

        label_10 = new QLabel(layoutWidget_2);
        label_10->setObjectName(QStringLiteral("label_10"));

        horizontalLayout_2->addWidget(label_10);

        lineEdit_15 = new QLineEdit(layoutWidget_2);
        lineEdit_15->setObjectName(QStringLiteral("lineEdit_15"));
        lineEdit_15->setMaximumSize(QSize(31, 21));

        horizontalLayout_2->addWidget(lineEdit_15);

        label_11 = new QLabel(layoutWidget_2);
        label_11->setObjectName(QStringLiteral("label_11"));

        horizontalLayout_2->addWidget(label_11);

        lineEdit_16 = new QLineEdit(layoutWidget_2);
        lineEdit_16->setObjectName(QStringLiteral("lineEdit_16"));
        lineEdit_16->setMaximumSize(QSize(31, 21));

        horizontalLayout_2->addWidget(lineEdit_16);

        label_12 = new QLabel(layoutWidget_2);
        label_12->setObjectName(QStringLiteral("label_12"));

        horizontalLayout_2->addWidget(label_12);

        groupBox_9 = new QGroupBox(Widget);
        groupBox_9->setObjectName(QStringLiteral("groupBox_9"));
        groupBox_9->setGeometry(QRect(10, 420, 501, 81));
        sizePolicy.setHeightForWidth(groupBox_9->sizePolicy().hasHeightForWidth());
        groupBox_9->setSizePolicy(sizePolicy);
        pushButton_13 = new QPushButton(groupBox_9);
        pushButton_13->setObjectName(QStringLiteral("pushButton_13"));
        pushButton_13->setGeometry(QRect(360, 38, 120, 37));
        layoutWidget_3 = new QWidget(groupBox_9);
        layoutWidget_3->setObjectName(QStringLiteral("layoutWidget_3"));
        layoutWidget_3->setGeometry(QRect(10, 10, 427, 22));
        horizontalLayout_3 = new QHBoxLayout(layoutWidget_3);
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        lineEdit_17 = new QLineEdit(layoutWidget_3);
        lineEdit_17->setObjectName(QStringLiteral("lineEdit_17"));
        lineEdit_17->setMaximumSize(QSize(31, 21));

        horizontalLayout_3->addWidget(lineEdit_17);

        label_13 = new QLabel(layoutWidget_3);
        label_13->setObjectName(QStringLiteral("label_13"));

        horizontalLayout_3->addWidget(label_13);

        lineEdit_18 = new QLineEdit(layoutWidget_3);
        lineEdit_18->setObjectName(QStringLiteral("lineEdit_18"));
        lineEdit_18->setMaximumSize(QSize(31, 21));

        horizontalLayout_3->addWidget(lineEdit_18);

        label_14 = new QLabel(layoutWidget_3);
        label_14->setObjectName(QStringLiteral("label_14"));

        horizontalLayout_3->addWidget(label_14);

        lineEdit_19 = new QLineEdit(layoutWidget_3);
        lineEdit_19->setObjectName(QStringLiteral("lineEdit_19"));
        lineEdit_19->setMaximumSize(QSize(31, 21));

        horizontalLayout_3->addWidget(lineEdit_19);

        label_15 = new QLabel(layoutWidget_3);
        label_15->setObjectName(QStringLiteral("label_15"));

        horizontalLayout_3->addWidget(label_15);

        lineEdit_20 = new QLineEdit(layoutWidget_3);
        lineEdit_20->setObjectName(QStringLiteral("lineEdit_20"));
        lineEdit_20->setMaximumSize(QSize(31, 21));

        horizontalLayout_3->addWidget(lineEdit_20);

        label_16 = new QLabel(layoutWidget_3);
        label_16->setObjectName(QStringLiteral("label_16"));

        horizontalLayout_3->addWidget(label_16);

        lineEdit_21 = new QLineEdit(layoutWidget_3);
        lineEdit_21->setObjectName(QStringLiteral("lineEdit_21"));
        lineEdit_21->setMaximumSize(QSize(31, 21));

        horizontalLayout_3->addWidget(lineEdit_21);

        label_17 = new QLabel(layoutWidget_3);
        label_17->setObjectName(QStringLiteral("label_17"));

        horizontalLayout_3->addWidget(label_17);

        lineEdit_22 = new QLineEdit(layoutWidget_3);
        lineEdit_22->setObjectName(QStringLiteral("lineEdit_22"));
        lineEdit_22->setMaximumSize(QSize(31, 21));

        horizontalLayout_3->addWidget(lineEdit_22);

        label_18 = new QLabel(layoutWidget_3);
        label_18->setObjectName(QStringLiteral("label_18"));

        horizontalLayout_3->addWidget(label_18);

        groupBox_1 = new QGroupBox(Widget);
        groupBox_1->setObjectName(QStringLiteral("groupBox_1"));
        groupBox_1->setGeometry(QRect(10, 420, 501, 81));
        sizePolicy.setHeightForWidth(groupBox_1->sizePolicy().hasHeightForWidth());
        groupBox_1->setSizePolicy(sizePolicy);
        pushButton_14 = new QPushButton(groupBox_1);
        pushButton_14->setObjectName(QStringLiteral("pushButton_14"));
        pushButton_14->setGeometry(QRect(360, 38, 120, 37));
        layoutWidget1 = new QWidget(groupBox_1);
        layoutWidget1->setObjectName(QStringLiteral("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(11, 11, 156, 22));
        horizontalLayout_4 = new QHBoxLayout(layoutWidget1);
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        label_22 = new QLabel(layoutWidget1);
        label_22->setObjectName(QStringLiteral("label_22"));
        label_22->setMaximumSize(QSize(113, 20));

        horizontalLayout_4->addWidget(label_22);

        lineEdit_27 = new QLineEdit(layoutWidget1);
        lineEdit_27->setObjectName(QStringLiteral("lineEdit_27"));
        lineEdit_27->setMaximumSize(QSize(31, 21));

        horizontalLayout_4->addWidget(lineEdit_27);

        label_24 = new QLabel(layoutWidget1);
        label_24->setObjectName(QStringLiteral("label_24"));

        horizontalLayout_4->addWidget(label_24);

        lineEdit_28 = new QLineEdit(layoutWidget1);
        lineEdit_28->setObjectName(QStringLiteral("lineEdit_28"));
        lineEdit_28->setMaximumSize(QSize(31, 21));

        horizontalLayout_4->addWidget(lineEdit_28);

        label_23 = new QLabel(layoutWidget1);
        label_23->setObjectName(QStringLiteral("label_23"));

        horizontalLayout_4->addWidget(label_23);

        groupBox_2 = new QGroupBox(Widget);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        groupBox_2->setGeometry(QRect(10, 420, 501, 81));
        sizePolicy.setHeightForWidth(groupBox_2->sizePolicy().hasHeightForWidth());
        groupBox_2->setSizePolicy(sizePolicy);
        pushButton_15 = new QPushButton(groupBox_2);
        pushButton_15->setObjectName(QStringLiteral("pushButton_15"));
        pushButton_15->setGeometry(QRect(360, 38, 120, 37));
        layoutWidget2 = new QWidget(groupBox_2);
        layoutWidget2->setObjectName(QStringLiteral("layoutWidget2"));
        layoutWidget2->setGeometry(QRect(11, 10, 289, 22));
        horizontalLayout_5 = new QHBoxLayout(layoutWidget2);
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        horizontalLayout_5->setContentsMargins(0, 0, 0, 0);
        lineEdit_23 = new QLineEdit(layoutWidget2);
        lineEdit_23->setObjectName(QStringLiteral("lineEdit_23"));
        lineEdit_23->setMaximumSize(QSize(31, 21));

        horizontalLayout_5->addWidget(lineEdit_23);

        label_19 = new QLabel(layoutWidget2);
        label_19->setObjectName(QStringLiteral("label_19"));

        horizontalLayout_5->addWidget(label_19);

        lineEdit_24 = new QLineEdit(layoutWidget2);
        lineEdit_24->setObjectName(QStringLiteral("lineEdit_24"));
        lineEdit_24->setMaximumSize(QSize(31, 21));

        horizontalLayout_5->addWidget(lineEdit_24);

        label_20 = new QLabel(layoutWidget2);
        label_20->setObjectName(QStringLiteral("label_20"));

        horizontalLayout_5->addWidget(label_20);

        lineEdit_25 = new QLineEdit(layoutWidget2);
        lineEdit_25->setObjectName(QStringLiteral("lineEdit_25"));
        lineEdit_25->setMaximumSize(QSize(31, 21));

        horizontalLayout_5->addWidget(lineEdit_25);

        label_21 = new QLabel(layoutWidget2);
        label_21->setObjectName(QStringLiteral("label_21"));

        horizontalLayout_5->addWidget(label_21);

        lineEdit_26 = new QLineEdit(layoutWidget2);
        lineEdit_26->setObjectName(QStringLiteral("lineEdit_26"));
        lineEdit_26->setMaximumSize(QSize(31, 21));

        horizontalLayout_5->addWidget(lineEdit_26);

        label_25 = new QLabel(layoutWidget2);
        label_25->setObjectName(QStringLiteral("label_25"));

        horizontalLayout_5->addWidget(label_25);

        groupBox_3 = new QGroupBox(Widget);
        groupBox_3->setObjectName(QStringLiteral("groupBox_3"));
        groupBox_3->setGeometry(QRect(10, 420, 501, 81));
        sizePolicy.setHeightForWidth(groupBox_3->sizePolicy().hasHeightForWidth());
        groupBox_3->setSizePolicy(sizePolicy);
        pushButton_18 = new QPushButton(groupBox_3);
        pushButton_18->setObjectName(QStringLiteral("pushButton_18"));
        pushButton_18->setGeometry(QRect(360, 38, 120, 37));
        layoutWidget_6 = new QWidget(groupBox_3);
        layoutWidget_6->setObjectName(QStringLiteral("layoutWidget_6"));
        layoutWidget_6->setGeometry(QRect(11, 10, 289, 22));
        horizontalLayout_8 = new QHBoxLayout(layoutWidget_6);
        horizontalLayout_8->setSpacing(6);
        horizontalLayout_8->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_8->setObjectName(QStringLiteral("horizontalLayout_8"));
        horizontalLayout_8->setContentsMargins(0, 0, 0, 0);
        lineEdit_41 = new QLineEdit(layoutWidget_6);
        lineEdit_41->setObjectName(QStringLiteral("lineEdit_41"));
        lineEdit_41->setMaximumSize(QSize(31, 21));

        horizontalLayout_8->addWidget(lineEdit_41);

        label_38 = new QLabel(layoutWidget_6);
        label_38->setObjectName(QStringLiteral("label_38"));

        horizontalLayout_8->addWidget(label_38);

        lineEdit_42 = new QLineEdit(layoutWidget_6);
        lineEdit_42->setObjectName(QStringLiteral("lineEdit_42"));
        lineEdit_42->setMaximumSize(QSize(31, 21));

        horizontalLayout_8->addWidget(lineEdit_42);

        label_39 = new QLabel(layoutWidget_6);
        label_39->setObjectName(QStringLiteral("label_39"));

        horizontalLayout_8->addWidget(label_39);

        lineEdit_43 = new QLineEdit(layoutWidget_6);
        lineEdit_43->setObjectName(QStringLiteral("lineEdit_43"));
        lineEdit_43->setMaximumSize(QSize(31, 21));

        horizontalLayout_8->addWidget(lineEdit_43);

        label_40 = new QLabel(layoutWidget_6);
        label_40->setObjectName(QStringLiteral("label_40"));

        horizontalLayout_8->addWidget(label_40);

        lineEdit_44 = new QLineEdit(layoutWidget_6);
        lineEdit_44->setObjectName(QStringLiteral("lineEdit_44"));
        lineEdit_44->setMaximumSize(QSize(31, 21));

        horizontalLayout_8->addWidget(lineEdit_44);

        label_41 = new QLabel(layoutWidget_6);
        label_41->setObjectName(QStringLiteral("label_41"));

        horizontalLayout_8->addWidget(label_41);

        groupBox_4 = new QGroupBox(Widget);
        groupBox_4->setObjectName(QStringLiteral("groupBox_4"));
        groupBox_4->setGeometry(QRect(10, 420, 501, 81));
        sizePolicy.setHeightForWidth(groupBox_4->sizePolicy().hasHeightForWidth());
        groupBox_4->setSizePolicy(sizePolicy);
        pushButton_19 = new QPushButton(groupBox_4);
        pushButton_19->setObjectName(QStringLiteral("pushButton_19"));
        pushButton_19->setGeometry(QRect(360, 38, 120, 37));
        layoutWidget_7 = new QWidget(groupBox_4);
        layoutWidget_7->setObjectName(QStringLiteral("layoutWidget_7"));
        layoutWidget_7->setGeometry(QRect(11, 10, 289, 22));
        horizontalLayout_9 = new QHBoxLayout(layoutWidget_7);
        horizontalLayout_9->setSpacing(6);
        horizontalLayout_9->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_9->setObjectName(QStringLiteral("horizontalLayout_9"));
        horizontalLayout_9->setContentsMargins(0, 0, 0, 0);
        lineEdit_45 = new QLineEdit(layoutWidget_7);
        lineEdit_45->setObjectName(QStringLiteral("lineEdit_45"));
        lineEdit_45->setMaximumSize(QSize(31, 21));

        horizontalLayout_9->addWidget(lineEdit_45);

        label_42 = new QLabel(layoutWidget_7);
        label_42->setObjectName(QStringLiteral("label_42"));

        horizontalLayout_9->addWidget(label_42);

        lineEdit_46 = new QLineEdit(layoutWidget_7);
        lineEdit_46->setObjectName(QStringLiteral("lineEdit_46"));
        lineEdit_46->setMaximumSize(QSize(31, 21));

        horizontalLayout_9->addWidget(lineEdit_46);

        label_43 = new QLabel(layoutWidget_7);
        label_43->setObjectName(QStringLiteral("label_43"));

        horizontalLayout_9->addWidget(label_43);

        lineEdit_47 = new QLineEdit(layoutWidget_7);
        lineEdit_47->setObjectName(QStringLiteral("lineEdit_47"));
        lineEdit_47->setMaximumSize(QSize(31, 21));

        horizontalLayout_9->addWidget(lineEdit_47);

        label_44 = new QLabel(layoutWidget_7);
        label_44->setObjectName(QStringLiteral("label_44"));

        horizontalLayout_9->addWidget(label_44);

        lineEdit_48 = new QLineEdit(layoutWidget_7);
        lineEdit_48->setObjectName(QStringLiteral("lineEdit_48"));
        lineEdit_48->setMaximumSize(QSize(31, 21));

        horizontalLayout_9->addWidget(lineEdit_48);

        label_45 = new QLabel(layoutWidget_7);
        label_45->setObjectName(QStringLiteral("label_45"));

        horizontalLayout_9->addWidget(label_45);

        groupBox_5 = new QGroupBox(Widget);
        groupBox_5->setObjectName(QStringLiteral("groupBox_5"));
        groupBox_5->setGeometry(QRect(10, 420, 501, 81));
        sizePolicy.setHeightForWidth(groupBox_5->sizePolicy().hasHeightForWidth());
        groupBox_5->setSizePolicy(sizePolicy);
        pushButton_20 = new QPushButton(groupBox_5);
        pushButton_20->setObjectName(QStringLiteral("pushButton_20"));
        pushButton_20->setGeometry(QRect(360, 38, 120, 37));
        layoutWidget3 = new QWidget(groupBox_5);
        layoutWidget3->setObjectName(QStringLiteral("layoutWidget3"));
        layoutWidget3->setGeometry(QRect(10, 10, 333, 22));
        horizontalLayout_10 = new QHBoxLayout(layoutWidget3);
        horizontalLayout_10->setSpacing(6);
        horizontalLayout_10->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_10->setObjectName(QStringLiteral("horizontalLayout_10"));
        horizontalLayout_10->setContentsMargins(0, 0, 0, 0);
        lineEdit_49 = new QLineEdit(layoutWidget3);
        lineEdit_49->setObjectName(QStringLiteral("lineEdit_49"));
        lineEdit_49->setMaximumSize(QSize(31, 21));

        horizontalLayout_10->addWidget(lineEdit_49);

        label_46 = new QLabel(layoutWidget3);
        label_46->setObjectName(QStringLiteral("label_46"));

        horizontalLayout_10->addWidget(label_46);

        lineEdit_50 = new QLineEdit(layoutWidget3);
        lineEdit_50->setObjectName(QStringLiteral("lineEdit_50"));
        lineEdit_50->setMaximumSize(QSize(31, 21));

        horizontalLayout_10->addWidget(lineEdit_50);

        label_47 = new QLabel(layoutWidget3);
        label_47->setObjectName(QStringLiteral("label_47"));

        horizontalLayout_10->addWidget(label_47);

        lineEdit_51 = new QLineEdit(layoutWidget3);
        lineEdit_51->setObjectName(QStringLiteral("lineEdit_51"));
        lineEdit_51->setMaximumSize(QSize(31, 21));

        horizontalLayout_10->addWidget(lineEdit_51);

        label_48 = new QLabel(layoutWidget3);
        label_48->setObjectName(QStringLiteral("label_48"));

        horizontalLayout_10->addWidget(label_48);

        lineEdit_52 = new QLineEdit(layoutWidget3);
        lineEdit_52->setObjectName(QStringLiteral("lineEdit_52"));
        lineEdit_52->setMaximumSize(QSize(31, 21));

        horizontalLayout_10->addWidget(lineEdit_52);

        label_49 = new QLabel(layoutWidget3);
        label_49->setObjectName(QStringLiteral("label_49"));

        horizontalLayout_10->addWidget(label_49);

        lineEdit_53 = new QLineEdit(layoutWidget3);
        lineEdit_53->setObjectName(QStringLiteral("lineEdit_53"));
        lineEdit_53->setMaximumSize(QSize(31, 21));

        horizontalLayout_10->addWidget(lineEdit_53);

        label_50 = new QLabel(layoutWidget3);
        label_50->setObjectName(QStringLiteral("label_50"));

        horizontalLayout_10->addWidget(label_50);

        groupBox_6 = new QGroupBox(Widget);
        groupBox_6->setObjectName(QStringLiteral("groupBox_6"));
        groupBox_6->setGeometry(QRect(10, 420, 501, 81));
        sizePolicy.setHeightForWidth(groupBox_6->sizePolicy().hasHeightForWidth());
        groupBox_6->setSizePolicy(sizePolicy);
        pushButton_21 = new QPushButton(groupBox_6);
        pushButton_21->setObjectName(QStringLiteral("pushButton_21"));
        pushButton_21->setGeometry(QRect(360, 38, 120, 37));
        layoutWidget_8 = new QWidget(groupBox_6);
        layoutWidget_8->setObjectName(QStringLiteral("layoutWidget_8"));
        layoutWidget_8->setGeometry(QRect(10, 10, 427, 22));
        horizontalLayout_11 = new QHBoxLayout(layoutWidget_8);
        horizontalLayout_11->setSpacing(6);
        horizontalLayout_11->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_11->setObjectName(QStringLiteral("horizontalLayout_11"));
        horizontalLayout_11->setContentsMargins(0, 0, 0, 0);
        lineEdit_54 = new QLineEdit(layoutWidget_8);
        lineEdit_54->setObjectName(QStringLiteral("lineEdit_54"));
        lineEdit_54->setMaximumSize(QSize(31, 21));

        horizontalLayout_11->addWidget(lineEdit_54);

        label_51 = new QLabel(layoutWidget_8);
        label_51->setObjectName(QStringLiteral("label_51"));

        horizontalLayout_11->addWidget(label_51);

        lineEdit_55 = new QLineEdit(layoutWidget_8);
        lineEdit_55->setObjectName(QStringLiteral("lineEdit_55"));
        lineEdit_55->setMaximumSize(QSize(31, 21));

        horizontalLayout_11->addWidget(lineEdit_55);

        label_52 = new QLabel(layoutWidget_8);
        label_52->setObjectName(QStringLiteral("label_52"));

        horizontalLayout_11->addWidget(label_52);

        lineEdit_56 = new QLineEdit(layoutWidget_8);
        lineEdit_56->setObjectName(QStringLiteral("lineEdit_56"));
        lineEdit_56->setMaximumSize(QSize(31, 21));

        horizontalLayout_11->addWidget(lineEdit_56);

        label_53 = new QLabel(layoutWidget_8);
        label_53->setObjectName(QStringLiteral("label_53"));

        horizontalLayout_11->addWidget(label_53);

        lineEdit_57 = new QLineEdit(layoutWidget_8);
        lineEdit_57->setObjectName(QStringLiteral("lineEdit_57"));
        lineEdit_57->setMaximumSize(QSize(31, 21));

        horizontalLayout_11->addWidget(lineEdit_57);

        label_54 = new QLabel(layoutWidget_8);
        label_54->setObjectName(QStringLiteral("label_54"));

        horizontalLayout_11->addWidget(label_54);

        lineEdit_58 = new QLineEdit(layoutWidget_8);
        lineEdit_58->setObjectName(QStringLiteral("lineEdit_58"));
        lineEdit_58->setMaximumSize(QSize(31, 21));

        horizontalLayout_11->addWidget(lineEdit_58);

        label_55 = new QLabel(layoutWidget_8);
        label_55->setObjectName(QStringLiteral("label_55"));

        horizontalLayout_11->addWidget(label_55);

        lineEdit_59 = new QLineEdit(layoutWidget_8);
        lineEdit_59->setObjectName(QStringLiteral("lineEdit_59"));
        lineEdit_59->setMaximumSize(QSize(31, 21));

        horizontalLayout_11->addWidget(lineEdit_59);

        label_56 = new QLabel(layoutWidget_8);
        label_56->setObjectName(QStringLiteral("label_56"));

        horizontalLayout_11->addWidget(label_56);

        pushButton = new QPushButton(Widget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(530, 450, 150, 41));
        sizePolicy.setHeightForWidth(pushButton->sizePolicy().hasHeightForWidth());
        pushButton->setSizePolicy(sizePolicy);
        pushButton_2 = new QPushButton(Widget);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(530, 330, 150, 41));
        groupBox = new QGroupBox(Widget);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(510, 10, 171, 291));
        label_26 = new QLabel(groupBox);
        label_26->setObjectName(QStringLiteral("label_26"));
        label_26->setGeometry(QRect(30, 10, 101, 21));
        label_27 = new QLabel(groupBox);
        label_27->setObjectName(QStringLiteral("label_27"));
        label_27->setGeometry(QRect(30, 120, 101, 21));
        comboBox = new QComboBox(groupBox);
        comboBox->setObjectName(QStringLiteral("comboBox"));
        comboBox->setGeometry(QRect(10, 40, 150, 41));
        sizePolicy.setHeightForWidth(comboBox->sizePolicy().hasHeightForWidth());
        comboBox->setSizePolicy(sizePolicy);
        alpha = new QSlider(groupBox);
        alpha->setObjectName(QStringLiteral("alpha"));
        alpha->setGeometry(QRect(10, 150, 151, 22));
        alpha->setMinimum(-10);
        alpha->setMaximum(0);
        alpha->setSingleStep(1);
        alpha->setSliderPosition(-10);
        alpha->setOrientation(Qt::Horizontal);
        scale = new QSlider(groupBox);
        scale->setObjectName(QStringLiteral("scale"));
        scale->setGeometry(QRect(10, 240, 150, 22));
        scale->setMinimum(1);
        scale->setMaximum(4);
        scale->setOrientation(Qt::Horizontal);
        label_28 = new QLabel(groupBox);
        label_28->setObjectName(QStringLiteral("label_28"));
        label_28->setGeometry(QRect(30, 210, 101, 21));
        pushButton_3 = new QPushButton(Widget);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(530, 390, 150, 41));
        groupBox_10 = new QGroupBox(Widget);
        groupBox_10->setObjectName(QStringLiteral("groupBox_10"));
        groupBox_10->setGeometry(QRect(10, 420, 501, 81));
        sizePolicy.setHeightForWidth(groupBox_10->sizePolicy().hasHeightForWidth());
        groupBox_10->setSizePolicy(sizePolicy);
        pushButton_16 = new QPushButton(groupBox_10);
        pushButton_16->setObjectName(QStringLiteral("pushButton_16"));
        pushButton_16->setGeometry(QRect(360, 38, 120, 37));
        lineEdit = new QLineEdit(groupBox_10);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(208, 11, 211, 20));
        lineEdit->setMinimumSize(QSize(31, 20));
        QWidget::setTabOrder(lineEdit_5, pushButton_11);
        QWidget::setTabOrder(pushButton_11, pushButton_12);
        QWidget::setTabOrder(pushButton_12, pushButton_13);
        QWidget::setTabOrder(pushButton_13, pushButton_14);
        QWidget::setTabOrder(pushButton_14, pushButton_15);
        QWidget::setTabOrder(pushButton_15, pushButton_18);
        QWidget::setTabOrder(pushButton_18, pushButton_19);
        QWidget::setTabOrder(pushButton_19, pushButton_20);
        QWidget::setTabOrder(pushButton_20, pushButton_21);
        QWidget::setTabOrder(pushButton_21, lineEdit_6);
        QWidget::setTabOrder(lineEdit_6, lineEdit_7);
        QWidget::setTabOrder(lineEdit_7, lineEdit_8);
        QWidget::setTabOrder(lineEdit_8, lineEdit_9);
        QWidget::setTabOrder(lineEdit_9, lineEdit_10);
        QWidget::setTabOrder(lineEdit_10, lineEdit_11);
        QWidget::setTabOrder(lineEdit_11, lineEdit_12);
        QWidget::setTabOrder(lineEdit_12, lineEdit_13);
        QWidget::setTabOrder(lineEdit_13, lineEdit_14);
        QWidget::setTabOrder(lineEdit_14, lineEdit_15);
        QWidget::setTabOrder(lineEdit_15, lineEdit_16);
        QWidget::setTabOrder(lineEdit_16, lineEdit_17);
        QWidget::setTabOrder(lineEdit_17, lineEdit_18);
        QWidget::setTabOrder(lineEdit_18, lineEdit_19);
        QWidget::setTabOrder(lineEdit_19, lineEdit_20);
        QWidget::setTabOrder(lineEdit_20, lineEdit_21);
        QWidget::setTabOrder(lineEdit_21, lineEdit_22);
        QWidget::setTabOrder(lineEdit_22, lineEdit_27);
        QWidget::setTabOrder(lineEdit_27, lineEdit_28);
        QWidget::setTabOrder(lineEdit_28, lineEdit_23);
        QWidget::setTabOrder(lineEdit_23, lineEdit_24);
        QWidget::setTabOrder(lineEdit_24, lineEdit_25);
        QWidget::setTabOrder(lineEdit_25, lineEdit_26);
        QWidget::setTabOrder(lineEdit_26, lineEdit_41);
        QWidget::setTabOrder(lineEdit_41, lineEdit_42);
        QWidget::setTabOrder(lineEdit_42, lineEdit_43);
        QWidget::setTabOrder(lineEdit_43, lineEdit_44);
        QWidget::setTabOrder(lineEdit_44, lineEdit_45);
        QWidget::setTabOrder(lineEdit_45, lineEdit_46);
        QWidget::setTabOrder(lineEdit_46, lineEdit_47);
        QWidget::setTabOrder(lineEdit_47, lineEdit_48);
        QWidget::setTabOrder(lineEdit_48, lineEdit_49);
        QWidget::setTabOrder(lineEdit_49, lineEdit_50);
        QWidget::setTabOrder(lineEdit_50, lineEdit_51);
        QWidget::setTabOrder(lineEdit_51, lineEdit_52);
        QWidget::setTabOrder(lineEdit_52, lineEdit_53);
        QWidget::setTabOrder(lineEdit_53, lineEdit_54);
        QWidget::setTabOrder(lineEdit_54, lineEdit_55);
        QWidget::setTabOrder(lineEdit_55, lineEdit_56);
        QWidget::setTabOrder(lineEdit_56, lineEdit_57);
        QWidget::setTabOrder(lineEdit_57, lineEdit_58);
        QWidget::setTabOrder(lineEdit_58, lineEdit_59);

        retranslateUi(Widget);
        QObject::connect(pushButton, SIGNAL(clicked()), Widget, SLOT(close()));

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QApplication::translate("Widget", "3D Graphics", Q_NULLPTR));
        groupBox_7->setTitle(QString());
        pushButton_11->setText(QApplication::translate("Widget", "\320\222\320\262\320\276\320\264", Q_NULLPTR));
        lineEdit_5->setText(QApplication::translate("Widget", "1", Q_NULLPTR));
        label->setText(QApplication::translate("Widget", "(x + ", Q_NULLPTR));
        lineEdit_6->setText(QApplication::translate("Widget", "0", Q_NULLPTR));
        label_2->setText(QApplication::translate("Widget", ")^2 + ", Q_NULLPTR));
        lineEdit_7->setText(QApplication::translate("Widget", "1", Q_NULLPTR));
        label_3->setText(QApplication::translate("Widget", "(y + ", Q_NULLPTR));
        lineEdit_8->setText(QApplication::translate("Widget", "0", Q_NULLPTR));
        label_4->setText(QApplication::translate("Widget", ")^2 + ", Q_NULLPTR));
        lineEdit_9->setText(QApplication::translate("Widget", "1", Q_NULLPTR));
        label_5->setText(QApplication::translate("Widget", "(z + ", Q_NULLPTR));
        lineEdit_10->setText(QApplication::translate("Widget", "0", Q_NULLPTR));
        label_6->setText(QApplication::translate("Widget", ")^2 = 1", Q_NULLPTR));
        groupBox_8->setTitle(QString());
        pushButton_12->setText(QApplication::translate("Widget", "\320\222\320\262\320\276\320\264", Q_NULLPTR));
        lineEdit_11->setText(QApplication::translate("Widget", "1", Q_NULLPTR));
        label_7->setText(QApplication::translate("Widget", "(x + ", Q_NULLPTR));
        lineEdit_12->setText(QApplication::translate("Widget", "0", Q_NULLPTR));
        label_8->setText(QApplication::translate("Widget", ")^2 + ", Q_NULLPTR));
        lineEdit_13->setText(QApplication::translate("Widget", "1", Q_NULLPTR));
        label_9->setText(QApplication::translate("Widget", "(y + ", Q_NULLPTR));
        lineEdit_14->setText(QApplication::translate("Widget", "0", Q_NULLPTR));
        label_10->setText(QApplication::translate("Widget", ")^2 - ", Q_NULLPTR));
        lineEdit_15->setText(QApplication::translate("Widget", "1", Q_NULLPTR));
        label_11->setText(QApplication::translate("Widget", "(z + ", Q_NULLPTR));
        lineEdit_16->setText(QApplication::translate("Widget", "0", Q_NULLPTR));
        label_12->setText(QApplication::translate("Widget", ")^2 = 1", Q_NULLPTR));
        groupBox_9->setTitle(QString());
        pushButton_13->setText(QApplication::translate("Widget", "\320\222\320\262\320\276\320\264", Q_NULLPTR));
        lineEdit_17->setText(QApplication::translate("Widget", "1", Q_NULLPTR));
        label_13->setText(QApplication::translate("Widget", "(x + ", Q_NULLPTR));
        lineEdit_18->setText(QApplication::translate("Widget", "0", Q_NULLPTR));
        label_14->setText(QApplication::translate("Widget", ")^2 + ", Q_NULLPTR));
        lineEdit_19->setText(QApplication::translate("Widget", "1", Q_NULLPTR));
        label_15->setText(QApplication::translate("Widget", "(y + ", Q_NULLPTR));
        lineEdit_20->setText(QApplication::translate("Widget", "0", Q_NULLPTR));
        label_16->setText(QApplication::translate("Widget", ")^2 - ", Q_NULLPTR));
        lineEdit_21->setText(QApplication::translate("Widget", "1", Q_NULLPTR));
        label_17->setText(QApplication::translate("Widget", "(z + ", Q_NULLPTR));
        lineEdit_22->setText(QApplication::translate("Widget", "0", Q_NULLPTR));
        label_18->setText(QApplication::translate("Widget", ")^2 = -1", Q_NULLPTR));
        groupBox_1->setTitle(QString());
        pushButton_14->setText(QApplication::translate("Widget", "\320\222\320\262\320\276\320\264", Q_NULLPTR));
        label_22->setText(QApplication::translate("Widget", "(y + ", Q_NULLPTR));
        lineEdit_27->setText(QApplication::translate("Widget", "0", Q_NULLPTR));
        label_24->setText(QApplication::translate("Widget", ")^2 = 2", Q_NULLPTR));
        lineEdit_28->setText(QApplication::translate("Widget", "1", Q_NULLPTR));
        label_23->setText(QApplication::translate("Widget", "x", Q_NULLPTR));
        groupBox_2->setTitle(QString());
        pushButton_15->setText(QApplication::translate("Widget", "\320\222\320\262\320\276\320\264", Q_NULLPTR));
        lineEdit_23->setText(QApplication::translate("Widget", "1", Q_NULLPTR));
        label_19->setText(QApplication::translate("Widget", "(x + ", Q_NULLPTR));
        lineEdit_24->setText(QApplication::translate("Widget", "0", Q_NULLPTR));
        label_20->setText(QApplication::translate("Widget", ")^2 + ", Q_NULLPTR));
        lineEdit_25->setText(QApplication::translate("Widget", "1", Q_NULLPTR));
        label_21->setText(QApplication::translate("Widget", "(y + ", Q_NULLPTR));
        lineEdit_26->setText(QApplication::translate("Widget", "0", Q_NULLPTR));
        label_25->setText(QApplication::translate("Widget", ")^2 =  1", Q_NULLPTR));
        groupBox_3->setTitle(QString());
        pushButton_18->setText(QApplication::translate("Widget", "\320\222\320\262\320\276\320\264", Q_NULLPTR));
        lineEdit_41->setText(QApplication::translate("Widget", "1", Q_NULLPTR));
        label_38->setText(QApplication::translate("Widget", "(x + ", Q_NULLPTR));
        lineEdit_42->setText(QApplication::translate("Widget", "0", Q_NULLPTR));
        label_39->setText(QApplication::translate("Widget", ")^2 - ", Q_NULLPTR));
        lineEdit_43->setText(QApplication::translate("Widget", "1", Q_NULLPTR));
        label_40->setText(QApplication::translate("Widget", "(y + ", Q_NULLPTR));
        lineEdit_44->setText(QApplication::translate("Widget", "0", Q_NULLPTR));
        label_41->setText(QApplication::translate("Widget", ")^2 =  1", Q_NULLPTR));
        groupBox_4->setTitle(QString());
        pushButton_19->setText(QApplication::translate("Widget", "\320\222\320\262\320\276\320\264", Q_NULLPTR));
        lineEdit_45->setText(QApplication::translate("Widget", "1", Q_NULLPTR));
        label_42->setText(QApplication::translate("Widget", "(x + ", Q_NULLPTR));
        lineEdit_46->setText(QApplication::translate("Widget", "0", Q_NULLPTR));
        label_43->setText(QApplication::translate("Widget", ")^2 + ", Q_NULLPTR));
        lineEdit_47->setText(QApplication::translate("Widget", "1", Q_NULLPTR));
        label_44->setText(QApplication::translate("Widget", "(y + ", Q_NULLPTR));
        lineEdit_48->setText(QApplication::translate("Widget", "0", Q_NULLPTR));
        label_45->setText(QApplication::translate("Widget", ")^2 =  z", Q_NULLPTR));
        groupBox_5->setTitle(QString());
        pushButton_20->setText(QApplication::translate("Widget", "\320\222\320\262\320\276\320\264", Q_NULLPTR));
        lineEdit_49->setText(QApplication::translate("Widget", "1", Q_NULLPTR));
        label_46->setText(QApplication::translate("Widget", "(x + ", Q_NULLPTR));
        lineEdit_50->setText(QApplication::translate("Widget", "0", Q_NULLPTR));
        label_47->setText(QApplication::translate("Widget", ")^2 - ", Q_NULLPTR));
        lineEdit_51->setText(QApplication::translate("Widget", "1", Q_NULLPTR));
        label_48->setText(QApplication::translate("Widget", "(y + ", Q_NULLPTR));
        lineEdit_52->setText(QApplication::translate("Widget", "0", Q_NULLPTR));
        label_49->setText(QApplication::translate("Widget", ")^2 =  2", Q_NULLPTR));
        lineEdit_53->setText(QApplication::translate("Widget", "1", Q_NULLPTR));
        label_50->setText(QApplication::translate("Widget", "z", Q_NULLPTR));
        groupBox_6->setTitle(QString());
        pushButton_21->setText(QApplication::translate("Widget", "\320\222\320\262\320\276\320\264", Q_NULLPTR));
        lineEdit_54->setText(QApplication::translate("Widget", "1", Q_NULLPTR));
        label_51->setText(QApplication::translate("Widget", "(x + ", Q_NULLPTR));
        lineEdit_55->setText(QApplication::translate("Widget", "0", Q_NULLPTR));
        label_52->setText(QApplication::translate("Widget", ")^2 + ", Q_NULLPTR));
        lineEdit_56->setText(QApplication::translate("Widget", "1", Q_NULLPTR));
        label_53->setText(QApplication::translate("Widget", "(y + ", Q_NULLPTR));
        lineEdit_57->setText(QApplication::translate("Widget", "0", Q_NULLPTR));
        label_54->setText(QApplication::translate("Widget", ")^2 - ", Q_NULLPTR));
        lineEdit_58->setText(QApplication::translate("Widget", "1", Q_NULLPTR));
        label_55->setText(QApplication::translate("Widget", "(z + ", Q_NULLPTR));
        lineEdit_59->setText(QApplication::translate("Widget", "0", Q_NULLPTR));
        label_56->setText(QApplication::translate("Widget", ")^2 = 0", Q_NULLPTR));
        pushButton->setText(QApplication::translate("Widget", "\320\222\321\213\321\205\320\276\320\264", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("Widget", "\320\241\320\277\321\200\320\260\320\262\320\272\320\260", Q_NULLPTR));
        groupBox->setTitle(QString());
        label_26->setText(QApplication::translate("Widget", "\320\222\321\213\320\261\320\276\321\200 \321\204\321\203\320\275\320\272\321\206\320\270\320\270", Q_NULLPTR));
        label_27->setText(QApplication::translate("Widget", "\320\237\321\200\320\276\320\267\321\200\320\260\321\207\320\275\320\276\321\201\321\202\321\214", Q_NULLPTR));
        comboBox->clear();
        comboBox->insertItems(0, QStringList()
         << QApplication::translate("Widget", "y^2 = 2x", Q_NULLPTR)
         << QApplication::translate("Widget", "x^2 + y^2 = 1", Q_NULLPTR)
         << QApplication::translate("Widget", "x^2 - y^2 = 1", Q_NULLPTR)
         << QApplication::translate("Widget", "x^2 + y^2 = z", Q_NULLPTR)
         << QApplication::translate("Widget", "x^2 - y^2 = 2z", Q_NULLPTR)
         << QApplication::translate("Widget", "x^2 + y^2 - z^2 = 0", Q_NULLPTR)
         << QApplication::translate("Widget", "x^2 + y^2 - z^2 = -1", Q_NULLPTR)
         << QApplication::translate("Widget", "\320\237\321\200\320\276\320\270\320\267\320\262\320\276\320\273\321\214\320\275\320\260\320\260 \321\204\321\203\320\275\320\272\321\206\320\270\321\217", Q_NULLPTR)
        );
        label_28->setText(QApplication::translate("Widget", "\320\234\320\260\321\201\321\210\321\202\320\260\320\261", Q_NULLPTR));
        pushButton_3->setText(QApplication::translate("Widget", "\320\241\320\273\321\203\320\266\320\261\320\260 \320\277\320\276\320\264\320\264\320\265\321\200\320\266\320\272\320\270", Q_NULLPTR));
        groupBox_10->setTitle(QString());
        pushButton_16->setText(QApplication::translate("Widget", "\320\222\320\262\320\276\320\264", Q_NULLPTR));
        lineEdit->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
