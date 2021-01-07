#ifndef ADDNEWSPETIFICATION_H
#define ADDNEWSPETIFICATION_H

#include <QDialog>
#include "QtSql/QSqlDatabase"
#include "QSqlQuery"
#include <QtSql>


namespace Ui {
class AddNewSpetification;
}

class AddNewSpetification : public QDialog
{
    Q_OBJECT

public:
    explicit AddNewSpetification(QWidget *parent = nullptr);
    ~AddNewSpetification();
    QString ANSgetSpec();
    //QString ANSgetProj();
    //int ANSgetState();
    //QSqlQueryModel *Proj_model = new QSqlQueryModel;

signals:
    void ANS_button_cliked();
    //void ANS_check_box_checked();

private slots:
    void on_ANSamelineEdit_textEdited(const QString &arg1);
    //void on_ANScomboBox_currentTextChanged(const QString &arg1);
    void on_ANSpushButton_clicked();
    //void on_ANScheckBox_stateChanged(int arg1);

private:
    Ui::AddNewSpetification *ui;
    QString spec_name;
    //QString proj_name;
    //QString m_proj;
    //int ANS_check_box_stste;
};

#endif // ADDNEWSPETIFICATION_H
