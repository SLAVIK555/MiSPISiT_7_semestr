#include "printselectedspetification.h"
#include "ui_printselectedspetification.h"

PrintSelectedSpetification::PrintSelectedSpetification(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::PrintSelectedSpetification)
{
    ui->setupUi(this);
}

PrintSelectedSpetification::~PrintSelectedSpetification()
{
    delete ui;
}

void PrintSelectedSpetification::on_PSSpushButton_clicked()
{
    emit PSS_button_clicked();
}

void PrintSelectedSpetification::on_PSSlineEdit_textEdited(const QString &arg1)
{
    PrintSelectedSpetification::pss_file = arg1;
}

QString PrintSelectedSpetification::PSSgetFile()
{
    return PrintSelectedSpetification::pss_file;
}
