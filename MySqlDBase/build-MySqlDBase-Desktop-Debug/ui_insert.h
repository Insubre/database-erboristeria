/********************************************************************************
** Form generated from reading UI file 'insert.ui'
**
** Created by: Qt User Interface Compiler version 6.2.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_INSERT_H
#define UI_INSERT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDockWidget>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Insert
{
public:
    QWidget *dockWidgetContents;
    QGroupBox *groupBox;
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *lineEdit_nome;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QLineEdit *lineEdit_dominio;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_3;
    QLineEdit *lineEdit_regno;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_4;
    QLineEdit *lineEdit_divisione;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_5;
    QLineEdit *lineEdit_costo;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_6;
    QLineEdit *lineEdit_quantita;
    QPushButton *pushButton;

    void setupUi(QDockWidget *Insert)
    {
        if (Insert->objectName().isEmpty())
            Insert->setObjectName(QString::fromUtf8("Insert"));
        Insert->resize(498, 300);
        Insert->setAutoFillBackground(true);
        Insert->setStyleSheet(QString::fromUtf8("background-color:rgb(64, 191, 100);\n"
"color:rgb(48, 48, 48);"));
        dockWidgetContents = new QWidget();
        dockWidgetContents->setObjectName(QString::fromUtf8("dockWidgetContents"));
        groupBox = new QGroupBox(dockWidgetContents);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(10, 10, 381, 261));
        groupBox->setStyleSheet(QString::fromUtf8("background-color:rgb(51, 51, 51);\n"
"color:rgb(255, 255, 255);\n"
""));
        widget = new QWidget(groupBox);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(10, 30, 361, 221));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label = new QLabel(widget);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout->addWidget(label);

        lineEdit_nome = new QLineEdit(widget);
        lineEdit_nome->setObjectName(QString::fromUtf8("lineEdit_nome"));
        lineEdit_nome->setStyleSheet(QString::fromUtf8("background-color:rgb(255, 255, 255);\n"
"color:rgb(48, 48, 48);\n"
"\n"
""));

        horizontalLayout->addWidget(lineEdit_nome);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_2 = new QLabel(widget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout_2->addWidget(label_2);

        lineEdit_dominio = new QLineEdit(widget);
        lineEdit_dominio->setObjectName(QString::fromUtf8("lineEdit_dominio"));
        lineEdit_dominio->setStyleSheet(QString::fromUtf8("background-color:rgb(255, 255, 255);\n"
"color:rgb(48, 48, 48);\n"
"\n"
""));

        horizontalLayout_2->addWidget(lineEdit_dominio);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label_3 = new QLabel(widget);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        horizontalLayout_3->addWidget(label_3);

        lineEdit_regno = new QLineEdit(widget);
        lineEdit_regno->setObjectName(QString::fromUtf8("lineEdit_regno"));
        lineEdit_regno->setStyleSheet(QString::fromUtf8("background-color:rgb(255, 255, 255);\n"
"color:rgb(48, 48, 48);\n"
"\n"
""));

        horizontalLayout_3->addWidget(lineEdit_regno);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        label_4 = new QLabel(widget);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        horizontalLayout_4->addWidget(label_4);

        lineEdit_divisione = new QLineEdit(widget);
        lineEdit_divisione->setObjectName(QString::fromUtf8("lineEdit_divisione"));
        lineEdit_divisione->setStyleSheet(QString::fromUtf8("background-color:rgb(255, 255, 255);\n"
"color:rgb(48, 48, 48);\n"
"\n"
""));

        horizontalLayout_4->addWidget(lineEdit_divisione);


        verticalLayout->addLayout(horizontalLayout_4);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        label_5 = new QLabel(widget);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        horizontalLayout_5->addWidget(label_5);

        lineEdit_costo = new QLineEdit(widget);
        lineEdit_costo->setObjectName(QString::fromUtf8("lineEdit_costo"));
        lineEdit_costo->setStyleSheet(QString::fromUtf8("background-color:rgb(255, 255, 255);\n"
"color:rgb(48, 48, 48);\n"
"\n"
""));

        horizontalLayout_5->addWidget(lineEdit_costo);


        verticalLayout->addLayout(horizontalLayout_5);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        label_6 = new QLabel(widget);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        horizontalLayout_6->addWidget(label_6);

        lineEdit_quantita = new QLineEdit(widget);
        lineEdit_quantita->setObjectName(QString::fromUtf8("lineEdit_quantita"));
        lineEdit_quantita->setStyleSheet(QString::fromUtf8("background-color:rgb(255, 255, 255);\n"
"color:rgb(48, 48, 48);\n"
"\n"
""));

        horizontalLayout_6->addWidget(lineEdit_quantita);


        verticalLayout->addLayout(horizontalLayout_6);

        pushButton = new QPushButton(dockWidgetContents);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(400, 10, 91, 31));
        pushButton->setStyleSheet(QString::fromUtf8("background-color:rgb(51, 51, 51);\n"
"color:rgb(255, 255, 255);\n"
""));
        Insert->setWidget(dockWidgetContents);

        retranslateUi(Insert);

        QMetaObject::connectSlotsByName(Insert);
    } // setupUi

    void retranslateUi(QDockWidget *Insert)
    {
        Insert->setWindowTitle(QString());
        groupBox->setTitle(QCoreApplication::translate("Insert", "Insert Data", nullptr));
        label->setText(QCoreApplication::translate("Insert", "Nome      ", nullptr));
        label_2->setText(QCoreApplication::translate("Insert", "Dominio  ", nullptr));
        label_3->setText(QCoreApplication::translate("Insert", "Regno      ", nullptr));
        label_4->setText(QCoreApplication::translate("Insert", "Divisione ", nullptr));
        label_5->setText(QCoreApplication::translate("Insert", "Costo        ", nullptr));
        label_6->setText(QCoreApplication::translate("Insert", "Quantit\303\240  ", nullptr));
        pushButton->setText(QCoreApplication::translate("Insert", "Save", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Insert: public Ui_Insert {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INSERT_H
