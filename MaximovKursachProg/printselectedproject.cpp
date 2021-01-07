#include "printselectedproject.h"
#include "ui_printselectedproject.h"

PrintSelectedProject::PrintSelectedProject(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::PrintSelectedProject)
{
    ui->setupUi(this);
}

PrintSelectedProject::~PrintSelectedProject()
{
    delete ui;
}

void PrintSelectedProject::on_PSPlineEdit_textEdited(const QString &arg1)
{
    PrintSelectedProject::psp_file = arg1;
}

void PrintSelectedProject::on_PSPpushButton_clicked()
{
    emit PSP_button_clicked();
}

QString PrintSelectedProject::PSPgetFile()
{
    return PrintSelectedProject::psp_file;
}
