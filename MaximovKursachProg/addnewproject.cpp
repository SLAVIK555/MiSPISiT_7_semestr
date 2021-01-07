#include "addnewproject.h"
#include "ui_addnewproject.h"
#include <iostream>

using namespace std;

AddNewProject::AddNewProject(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::AddNewProject)
{
    ui->setupUi(this);
    //ui->SelectOwnercomboBox->setModel(Owner_model);
    //cout << ui->SelectOwnercomboBox->currentText().toStdString() << endl;
}

AddNewProject::~AddNewProject()
{
    delete ui;
}

void AddNewProject::on_NamelineEdit_textEdited(const QString &arg1)
{
    AddNewProject::m_name = arg1;
}

/*void AddNewProject::on_SelectOwnercomboBox_currentTextChanged(const QString &arg1)
{
    AddNewProject::m_owner = arg1;
}*/

void AddNewProject::on_ANPpushButton_clicked()
{
    emit ANP_button_cliked();
}

QString AddNewProject::getName()
{
    return AddNewProject::m_name;
}

/*QString AddNewProject::getOwner()
{
    return AddNewProject::m_owner;
}*/


