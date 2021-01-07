#include "delselectedgroupp.h"
#include "ui_delselectedgroupp.h"

DelSelectedGroupp::DelSelectedGroupp(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::DelSelectedGroupp)
{
    ui->setupUi(this);
}

DelSelectedGroupp::~DelSelectedGroupp()
{
    delete ui;
}

void DelSelectedGroupp::on_DSGYespushButton_clicked()
{
    emit DSGYes_button_cliked();
}

void DelSelectedGroupp::on_DSGNopushButton_clicked()
{
    emit DSGNo_button_cliked();
}
