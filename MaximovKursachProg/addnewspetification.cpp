#include "addnewspetification.h"
#include "ui_addnewspetification.h"
#include "mainwindow.h"

AddNewSpetification::AddNewSpetification(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::AddNewSpetification)
{
    ui->setupUi(this);
    //ui->ANScomboBox->setModel(Proj_model);
    //cout << ui->SelectOwnercomboBox->currentText().toStdString() << endl;
}

AddNewSpetification::~AddNewSpetification()
{
    delete ui;
}

void AddNewSpetification::on_ANSamelineEdit_textEdited(const QString &arg1)
{
    AddNewSpetification::spec_name = arg1;
}

/*void AddNewSpetification::on_ANScomboBox_currentTextChanged(const QString &arg1)
{
    AddNewSpetification::proj_name = arg1;
}*/

void AddNewSpetification::on_ANSpushButton_clicked()
{
    emit ANS_button_cliked();
}

QString AddNewSpetification::ANSgetSpec()
{
    return AddNewSpetification::spec_name;
}

/*QString AddNewSpetification::ANSgetProj()
{
    return AddNewSpetification::proj_name;
}

void AddNewSpetification::on_ANScheckBox_stateChanged(int arg1)
{
    AddNewSpetification::ANS_check_box_stste = arg1;
    emit ANS_check_box_checked();
    if(ui->ANScheckBox->isChecked()){
        ui->ANScomboBox->setEnabled(false);
    }
    else{
       ui->ANScomboBox->setEnabled(true);
    }
}

int AddNewSpetification::ANSgetState()
{
    return ANS_check_box_stste;
}*/
