#include "editselectesdetail.h"
#include "ui_editselectesdetail.h"

EditSelectesDetail::EditSelectesDetail(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::EditSelectesDetail)
{
    ui->setupUi(this);

    ui->ESAcomboBox->setModel(EArticul_model);
    ui->ESPVcomboBox->setModel(EProvider_model);
    ui->ESNcomboBox->setModel(EName_model);
    ui->ESPCcomboBox->setModel(EPrice_model);
    ui->ESCcomboBox->setModel(ECount_model);
    ui->ESMcomboBox->setModel(EManufacturer_model);

    /*ui->EANAlineEdit->setEnabled(false);
    ui->EANPVlineEdit->setEnabled(false);
    ui->EANNlineEdit->setEnabled(false);
    ui->EANPClineEdit->setEnabled(false);
    ui->EANClineEdit->setEnabled(false);
    ui->EANMlineEdit->setEnabled(false);*/

    ui->ESAcomboBox->setEnabled(false);
    ui->ESPVcomboBox->setEnabled(false);
    ui->ESNcomboBox->setEnabled(false);
    ui->ESPCcomboBox->setEnabled(false);
    ui->ESCcomboBox->setEnabled(false);
    ui->ESMcomboBox->setEnabled(false);

    ui->EANAcheckBox->setCheckState(Qt::Checked);
    ui->EANPVcheckBox->setCheckState(Qt::Checked);
    ui->EANNcheckBox->setCheckState(Qt::Checked);
    ui->EANPCcheckBox->setCheckState(Qt::Checked);
    ui->EANCcheckBox->setCheckState(Qt::Checked);
    ui->EANMcheckBox->setCheckState(Qt::Checked);

    ui->EANAlineEdit->setText(fmw_eana);
    ui->EANPVlineEdit->setText(fmw_eanpv);
    ui->EANNlineEdit->setText(fmw_eann);
    ui->EANPClineEdit->setText(fmw_eanpc);
    ui->EANClineEdit->setText(fmw_eanc);
    ui->EANMlineEdit->setText(fmw_eanm);
    qDebug() << eana;
}

EditSelectesDetail::~EditSelectesDetail()
{
    delete ui;
}

void EditSelectesDetail::on_EANAcheckBox_stateChanged(int arg1)
{
    if(ui->EANAcheckBox->isChecked()){
        ui->EANAlineEdit->setEnabled(true);
        ui->ESAcomboBox->setEnabled(false);
    }
    else{
        ui->EANAlineEdit->setEnabled(false);
        ui->ESAcomboBox->setEnabled(true);
    }
}

void EditSelectesDetail::on_EANPVcheckBox_stateChanged(int arg1)
{
    if(ui->EANPVcheckBox->isChecked()){
        ui->EANPVlineEdit->setEnabled(true);
        ui->ESPVcomboBox->setEnabled(false);
    }
    else{
        ui->EANPVlineEdit->setEnabled(false);
        ui->ESPVcomboBox->setEnabled(true);
    }
}

void EditSelectesDetail::on_EANNcheckBox_stateChanged(int arg1)
{
    if(ui->EANNcheckBox->isChecked()){
        ui->EANNlineEdit->setEnabled(true);
        ui->ESNcomboBox->setEnabled(false);
    }
    else{
        ui->EANNlineEdit->setEnabled(false);
        ui->ESNcomboBox->setEnabled(true);
    }
}

void EditSelectesDetail::on_EANPCcheckBox_stateChanged(int arg1)
{
    if(ui->EANPCcheckBox->isChecked()){
        ui->EANPClineEdit->setEnabled(true);
        ui->ESPCcomboBox->setEnabled(false);
    }
    else{
        ui->EANPClineEdit->setEnabled(false);
        ui->ESPCcomboBox->setEnabled(true);
    }
}

void EditSelectesDetail::on_EANCcheckBox_stateChanged(int arg1)
{
    if(ui->EANCcheckBox->isChecked()){
        ui->EANClineEdit->setEnabled(true);
        ui->ESCcomboBox->setEnabled(false);
    }
    else{
        ui->EANClineEdit->setEnabled(false);
        ui->ESCcomboBox->setEnabled(true);
    }
}

void EditSelectesDetail::on_EANMcheckBox_stateChanged(int arg1)
{
    if(ui->EANMcheckBox->isChecked()){
        ui->EANMlineEdit->setEnabled(true);
        ui->ESMcomboBox->setEnabled(false);
    }
    else{
        ui->EANMlineEdit->setEnabled(false);
        ui->ESMcomboBox->setEnabled(true);
    }
}

void EditSelectesDetail::on_pushButton_clicked()
{
    emit ESD_button_cliked();
}

QString EditSelectesDetail::ESDgetArticul()
{
    if(ui->EANAcheckBox->isChecked()){
        eana = ui->EANAlineEdit->text();
    }
    else{
        eana = ui->ESAcomboBox->currentText();
    }
    return eana;
}

QString EditSelectesDetail::ESDgetProvider()
{
    if(ui->EANPVcheckBox->isChecked()){
        eanpv = ui->EANPVlineEdit->text();
    }
    else{
        eanpv = ui->ESPVcomboBox->currentText();
    }
    return eanpv;
}

QString EditSelectesDetail::ESDgetName()
{
    if(ui->EANNcheckBox->isChecked()){
        eann = ui->EANNlineEdit->text();
    }
    else{
        eann = ui->ESNcomboBox->currentText();
    }
    return eann;
}

QString EditSelectesDetail::ESDgetPrice()
{
    if(ui->EANPCcheckBox->isChecked()){
        eanpc = ui->EANPClineEdit->text();
    }
    else{
        eanpc = ui->ESPCcomboBox->currentText();
    }
    return eanpc;
}

QString EditSelectesDetail::ESDgetCount()
{
    if(ui->EANCcheckBox->isChecked()){
        eanc = ui->EANClineEdit->text();
    }
    else{
        eanc = ui->ESCcomboBox->currentText();
    }
    return eanc;
}

QString EditSelectesDetail::ESDgetManufacturer()
{
    if(ui->EANMcheckBox->isChecked()){
        eanm = ui->EANMlineEdit->text();
    }
    else{
        eanm = ui->ESMcomboBox->currentText();
    }
    return eanm;
}
