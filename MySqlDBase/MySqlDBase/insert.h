#ifndef INSERT_H
#define INSERT_H

#include <QDockWidget>
#include <QtSql>
#include <QSqlDatabase>
#include <QMessageBox>

namespace Ui {
class Insert;
}

class Insert : public QDockWidget
{
    Q_OBJECT

public:
    explicit Insert(QWidget *parent = nullptr);
    ~Insert();

private slots:
    void on_pushButton_clicked();

private:
    Ui::Insert *ui;
    QSqlDatabase database;
    QSqlTableModel *tableModel;
};

#endif // INSERT_H
