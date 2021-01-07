#include "addnewdetail.h"
#include "ui_addnewdetail.h"

AddNewDetail::AddNewDetail(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::AddNewDetail)
{
    ui->setupUi(this);

    ui->SAcomboBox->setModel(Articul_model);
    ui->SPVcomboBox->setModel(Provider_model);
    ui->SNcomboBox->setModel(Name_model);
    ui->SPCcomboBox->setModel(Price_model);
    ui->SCcomboBox->setModel(Count_model);
    ui->SMcomboBox->setModel(Manufacturer_model);

    ui->ANAlineEdit->setEnabled(false);
    ui->ANPVlineEdit->setEnabled(false);
    ui->ANNlineEdit->setEnabled(false);
    ui->ANPClineEdit->setEnabled(false);
    ui->ANClineEdit->setEnabled(false);
    ui->ANMlineEdit->setEnabled(false);
}

AddNewDetail::~AddNewDetail()
{
    delete ui;
}

void AddNewDetail::on_ANAcheckBox_stateChanged(int arg1)
{
    if(ui->ANAcheckBox->isChecked()){
        ui->ANAlineEdit->setEnabled(true);
        ui->SAcomboBox->setEnabled(false);
    }
    else{
        ui->ANAlineEdit->setEnabled(false);
        ui->SAcomboBox->setEnabled(true);
    }
}

void AddNewDetail::on_ANPVcheckBox_stateChanged(int arg1)
{
    if(ui->ANPVcheckBox->isChecked()){
        ui->ANPVlineEdit->setEnabled(true);
        ui->SPVcomboBox->setEnabled(false);
    }
    else{
        ui->ANPVlineEdit->setEnabled(false);
        ui->SPVcomboBox->setEnabled(true);
    }
}

void AddNewDetail::on_ANNcheckBox_stateChanged(int arg1)
{
    if(ui->ANNcheckBox->isChecked()){
        ui->ANNlineEdit->setEnabled(true);
        ui->SNcomboBox->setEnabled(false);
    }
    else{
        ui->ANNlineEdit->setEnabled(false);
        ui->SNcomboBox->setEnabled(true);
    }
}

void AddNewDetail::on_ANPCcheckBox_stateChanged(int arg1)
{
    if(ui->ANPCcheckBox->isChecked()){
        ui->ANPClineEdit->setEnabled(true);
        ui->SPCcomboBox->setEnabled(false);
    }
    else{
        ui->ANPClineEdit->setEnabled(false);
        ui->SPCcomboBox->setEnabled(true);
    }
}

void AddNewDetail::on_ANCcheckBox_stateChanged(int arg1)
{
    if(ui->ANCcheckBox->isChecked()){
        ui->ANClineEdit->setEnabled(true);
        ui->SCcomboBox->setEnabled(false);
    }
    else{
        ui->ANClineEdit->setEnabled(false);
        ui->SCcomboBox->setEnabled(true);
    }
}

void AddNewDetail::on_ANMcheckBox_stateChanged(int arg1)
{
    if(ui->ANMcheckBox->isChecked()){
        ui->ANMlineEdit->setEnabled(true);
        ui->SMcomboBox->setEnabled(false);
    }
    else{
        ui->ANMlineEdit->setEnabled(false);
        ui->SMcomboBox->setEnabled(true);
    }
}

void AddNewDetail::on_pushButton_clicked()
{
    emit AND_button_cliked();
}

QString AddNewDetail::ANDgetArticul()
{
    if(ui->ANAcheckBox->isChecked()){
        ana = ui->ANAlineEdit->text();
    }
    else{
        ana = ui->SAcomboBox->currentText();
    }
    return ana;
}

QString AddNewDetail::ANDgetProvider()
{
    if(ui->ANPVcheckBox->isChecked()){
        anpv = ui->ANPVlineEdit->text();
    }
    else{
        anpv = ui->SPVcomboBox->currentText();
    }
    return anpv;
}

QString AddNewDetail::ANDgetName()
{
    if(ui->ANNcheckBox->isChecked()){
        ann = ui->ANNlineEdit->text();
    }
    else{
        ann = ui->SNcomboBox->currentText();
    }
    return ann;
}

QString AddNewDetail::ANDgetPrice()
{
    if(ui->ANPCcheckBox->isChecked()){
        anpc = ui->ANPClineEdit->text();
    }
    else{
        anpc = ui->SPCcomboBox->currentText();
    }
    return anpc;
}

QString AddNewDetail::ANDgetCount()
{
    if(ui->ANCcheckBox->isChecked()){
        anc = ui->ANClineEdit->text();
    }
    else{
        anc = ui->SCcomboBox->currentText();
    }
    return anc;
}

QString AddNewDetail::ANDgetManufacturer()
{
    if(ui->ANMcheckBox->isChecked()){
        anm = ui->ANMlineEdit->text();
    }
    else{
        anm = ui->SMcomboBox->currentText();
    }
    return anm;
}
