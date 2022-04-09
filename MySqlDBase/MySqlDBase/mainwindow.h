#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "login.h"
#include "insert.h"
#include <QtSql>
#include <QSqlDatabase>
#include <QMessageBox>


QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_pushButton_Login_clicked();

    void on_actionEXIT_triggered();

    void on_actionINSERT_DATA_triggered();

private:
    Ui::MainWindow *ui;
    Login *login;
    Insert *insert;

    QSqlDatabase database;
    QSqlTableModel *tableModel;
};
#endif // MAINWINDOW_H
