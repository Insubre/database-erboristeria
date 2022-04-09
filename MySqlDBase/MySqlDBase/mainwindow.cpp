#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    login = new Login(this);
    login->show();

}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_Login_clicked()
{
    //database connection

        database = QSqlDatabase::addDatabase("QMYSQL");
        database.setHostName("localhost");
        database.setUserName("root");
        database.setPassword("cs150405");
        database.setDatabaseName("erbolario");

        //check connection

        if(database.open())
        {
            //do stuff
            tableModel = new QSqlTableModel();
            tableModel->setTable("erbolario");
            tableModel->select();

            tableModel->setHeaderData(0, Qt::Horizontal, tr("nome"));
            tableModel->setHeaderData(1, Qt::Horizontal, tr("dominio"));
            tableModel->setHeaderData(2, Qt::Horizontal, tr("regno"));
            tableModel->setHeaderData(3, Qt::Horizontal, tr("divisione"));
            tableModel->setHeaderData(4, Qt::Horizontal, tr("costo"));
            tableModel->setHeaderData(5, Qt::Horizontal, tr("quantità"));


            ui->tableView->setModel(tableModel);
        }
        else
        {
            QMessageBox::information(this, "Failed", "Connection Failed");
        }
}


void MainWindow::on_actionEXIT_triggered()
{
    exit(0);
}


void MainWindow::on_actionINSERT_DATA_triggered()
{
    insert = new Insert(this);
    insert->show();
}

