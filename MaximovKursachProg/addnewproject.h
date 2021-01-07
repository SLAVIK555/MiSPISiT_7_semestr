#ifndef ADDNEWPROJECT_H
#define ADDNEWPROJECT_H

#include <QDialog>
#include "QtSql/QSqlDatabase"
#include "QSqlQuery"
#include <QtSql>

namespace Ui {
class AddNewProject;
}

class AddNewProject : public QDialog
{
    Q_OBJECT

public:
    explicit AddNewProject(QWidget *parent = nullptr);
    ~AddNewProject();
    QString getName();
    //QString getOwner();
    //QSqlQueryModel *Owner_model = new QSqlQueryModel;

signals:
    void ANP_button_cliked();

private slots:
    void on_NamelineEdit_textEdited(const QString &arg1);

    //void on_SelectOwnercomboBox_currentTextChanged(const QString &arg1);

    void on_ANPpushButton_clicked();

private:
    Ui::AddNewProject *ui;
    QString m_name;
    //QString m_owner;
};

#endif // ADDNEWPROJECT_H
