#ifndef EDITSELECTESDETAIL_H
#define EDITSELECTESDETAIL_H

#include <QDialog>
#include "QtSql/QSqlDatabase"
#include "QSqlQuery"
#include <QtSql>

namespace Ui {
class EditSelectesDetail;
}

class EditSelectesDetail : public QDialog
{
    Q_OBJECT

public:
    explicit EditSelectesDetail(QWidget *parent = nullptr);
    ~EditSelectesDetail();
    QSqlQueryModel *EArticul_model = new QSqlQueryModel;
    QSqlQueryModel *EProvider_model = new QSqlQueryModel;
    QSqlQueryModel *EName_model = new QSqlQueryModel;
    QSqlQueryModel *EPrice_model = new QSqlQueryModel;
    QSqlQueryModel *ECount_model = new QSqlQueryModel;
    QSqlQueryModel *EManufacturer_model = new QSqlQueryModel;

    QString ESDgetArticul();
    QString ESDgetProvider();
    QString ESDgetName();
    QString ESDgetPrice();
    QString ESDgetCount();
    QString ESDgetManufacturer();

    QString fmw_eana;
    QString fmw_eanpv;
    QString fmw_eann;
    QString fmw_eanpc;
    QString fmw_eanc;
    QString fmw_eanm;

signals:
    void ESD_button_cliked();

private slots:
    void on_EANAcheckBox_stateChanged(int arg1);
    void on_EANPVcheckBox_stateChanged(int arg1);
    void on_EANNcheckBox_stateChanged(int arg1);
    void on_EANPCcheckBox_stateChanged(int arg1);
    void on_EANCcheckBox_stateChanged(int arg1);
    void on_EANMcheckBox_stateChanged(int arg1);
    void on_pushButton_clicked();

private:
    Ui::EditSelectesDetail *ui;
    QString eana;
    QString eanpv;
    QString eann;
    QString eanpc;
    QString eanc;
    QString eanm;
};

#endif // EDITSELECTESDETAIL_H
