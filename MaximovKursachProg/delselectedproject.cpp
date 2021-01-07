#include "delselectedproject.h"
#include "ui_delselectedproject.h"

DelSelectedProject::DelSelectedProject(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::DelSelectedProject)
{
    ui->setupUi(this);
}

DelSelectedProject::~DelSelectedProject()
{
    delete ui;
}

void DelSelectedProject::on_NopushButton_clicked()
{
    emit No_button_cliked();
}

void DelSelectedProject::on_YespushButton_clicked()
{
    emit Yes_button_cliked();
}
