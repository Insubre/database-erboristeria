/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.2.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionEXIT;
    QAction *actionINSERT_DATA;
    QWidget *centralwidget;
    QPushButton *pushButton_Login;
    QTableView *tableView;
    QMenuBar *menubar;
    QMenu *menuMENU;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(650, 305);
        MainWindow->setStyleSheet(QString::fromUtf8("background-color:rgb(64, 191, 100);\n"
"color:rgb(48, 48, 48);"));
        actionEXIT = new QAction(MainWindow);
        actionEXIT->setObjectName(QString::fromUtf8("actionEXIT"));
        actionINSERT_DATA = new QAction(MainWindow);
        actionINSERT_DATA->setObjectName(QString::fromUtf8("actionINSERT_DATA"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        pushButton_Login = new QPushButton(centralwidget);
        pushButton_Login->setObjectName(QString::fromUtf8("pushButton_Login"));
        pushButton_Login->setGeometry(QRect(570, 240, 61, 20));
        pushButton_Login->setStyleSheet(QString::fromUtf8("background-color:rgb(48, 48, 48);\n"
"color:rgb(255, 255, 255);"));
        tableView = new QTableView(centralwidget);
        tableView->setObjectName(QString::fromUtf8("tableView"));
        tableView->setGeometry(QRect(10, 10, 631, 221));
        tableView->setStyleSheet(QString::fromUtf8("background-color:rgb(48, 48, 48);\n"
"color:rgb(255, 255, 255);"));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 650, 20));
        menubar->setStyleSheet(QString::fromUtf8("background-color:rgb(28, 190, 185);\n"
"color:rgb(48, 48, 48);"));
        menuMENU = new QMenu(menubar);
        menuMENU->setObjectName(QString::fromUtf8("menuMENU"));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        menubar->addAction(menuMENU->menuAction());
        menuMENU->addAction(actionEXIT);
        menuMENU->addAction(actionINSERT_DATA);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "Erbolario", nullptr));
        actionEXIT->setText(QCoreApplication::translate("MainWindow", "EXIT", nullptr));
        actionINSERT_DATA->setText(QCoreApplication::translate("MainWindow", "INSERT DATA", nullptr));
        pushButton_Login->setText(QCoreApplication::translate("MainWindow", "Load", nullptr));
        menuMENU->setTitle(QCoreApplication::translate("MainWindow", "MENU", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
