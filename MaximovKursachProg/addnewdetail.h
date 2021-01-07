#ifndef ADDNEWDETAIL_H
#define ADDNEWDETAIL_H

#include <QDialog>
#include "QtSql/QSqlDatabase"
#include "QSqlQuery"
#include <QtSql>

namespace Ui {
class AddNewDetail;
}

class AddNewDetail : public QDialog
{
    Q_OBJECT

public:
    explicit AddNewDetail(QWidget *parent = nullptr);
    ~AddNewDetail();
    QSqlQueryModel *Articul_model = new QSqlQueryModel;
    QSqlQueryModel *Provider_model = new QSqlQueryModel;
    QSqlQueryModel *Name_model = new QSqlQueryModel;
    QSqlQueryModel *Price_model = new QSqlQueryModel;
    QSqlQueryModel *Count_model = new QSqlQueryModel;
    QSqlQueryModel *Manufacturer_model = new QSqlQueryModel;

    QString ANDgetArticul();
    QString ANDgetProvider();
    QString ANDgetName();
    QString ANDgetPrice();
    QString ANDgetCount();
    QString ANDgetManufacturer();

signals:
    void AND_button_cliked();

private slots:
    void on_ANAcheckBox_stateChanged(int arg1);
    void on_ANPVcheckBox_stateChanged(int arg1);
    void on_ANNcheckBox_stateChanged(int arg1);
    void on_ANPCcheckBox_stateChanged(int arg1);
    void on_ANCcheckBox_stateChanged(int arg1);
    void on_ANMcheckBox_stateChanged(int arg1);
    void on_pushButton_clicked();

private:
    Ui::AddNewDetail *ui;
    QString ana;
    QString anpv;
    QString ann;
    QString anpc;
    QString anc;
    QString anm;
};

#endif // ADDNEWDETAIL_H
