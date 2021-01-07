#include "delselectedspetification.h"
#include "ui_delselectedspetification.h"

DelSelectedSpetification::DelSelectedSpetification(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::DelSelectedSpetification)
{
    ui->setupUi(this);
}

DelSelectedSpetification::~DelSelectedSpetification()
{
    delete ui;
}


void DelSelectedSpetification::on_DSSNopushButton_clicked()
{
    emit DSSNo_button_cliked();
}

void DelSelectedSpetification::on_DSSYespushButton_clicked()
{
    emit DSSYes_button_cliked();
}

