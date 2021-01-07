#include "addnewgroupp.h"
#include "ui_addnewgroupp.h"

AddNewGroupp::AddNewGroupp(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::AddNewGroupp)
{
    ui->setupUi(this);
}

AddNewGroupp::~AddNewGroupp()
{
    delete ui;
}

void AddNewGroupp::on_ANGamelineEdit_textEdited(const QString &arg1)
{
    AddNewGroupp::groupp_name = arg1;
}

void AddNewGroupp::on_ANGpushButton_clicked()
{
    emit ANG_button_cliked();
}

QString AddNewGroupp::ANGgetGroupp()
{
    return AddNewGroupp::groupp_name;
}
