#include "insert.h"
#include "ui_insert.h"

Insert::Insert(QWidget *parent) :
    QDockWidget(parent),
    ui(new Ui::Insert)
{
    ui->setupUi(this);
}

Insert::~Insert()
{
    delete ui;
}

void Insert::on_pushButton_clicked()
{
    //databse connection
    database = QSqlDatabase::addDatabase("QMYSQL");
    database.setHostName("localhost");
    database.setUserName("root");
    database.setPassword("cs150405");
    database.setDatabaseName("erbolario");

    if (database.open()) {
        //do stuff

        //var
        QString nome = ui->lineEdit_nome->text();
        QString dominio = ui->lineEdit_dominio->text();
        QString regno = ui->lineEdit_regno->text();
        QString divisione = ui->lineEdit_divisione->text();
        QString costo = ui->lineEdit_costo->text();
        QString quantita = ui->lineEdit_quantita->text();

        QSqlQuery query;

        query.prepare("INSERT INTO erbolario(nome, dominio, regno, divisione, costo, quantita)"
                      "VALUES(:nome, :dominio, :regno, :divisione, :costo, :quantita)");
        query.bindValue(":nome",nome);
        query.bindValue(":dominio",dominio);
        query.bindValue(":regno",regno);
        query.bindValue(":divisione",divisione);
        query.bindValue(":costo",costo);
        query.bindValue(":quantita",quantita);
        if(query.exec()) {
            QMessageBox::information(this, "Inserted", "Data Inserted Successfully");
        }
        else {
            QMessageBox::information(this, "Not Inserted", "Data Is Not Inserted");
        }
    }


    else
    {
        QMessageBox::information(this, "Failed", "Connection Failed");
    }
}

