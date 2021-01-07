#include "delselecteddetail.h"
#include "ui_delselecteddetail.h"

DelSelectedDetail::DelSelectedDetail(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::DelSelectedDetail)
{
    ui->setupUi(this);
}

DelSelectedDetail::~DelSelectedDetail()
{
    delete ui;
}

void DelSelectedDetail::on_DSDNopushButton_clicked()
{
    emit DSDNo_button_cliked();
}

void DelSelectedDetail::on_DSDYespushButton_clicked()
{
    emit DSDYes_button_cliked();
}
