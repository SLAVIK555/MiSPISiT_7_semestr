#include "auth_window.h"
#include "ui_auth_window.h"
#include "databaseclass.h"

//DataBaseClass au_dbc;

auth_window::auth_window(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::auth_window)
{
    ui->setupUi(this);
}

auth_window::~auth_window()
{
    delete ui;
}

void auth_window::on_NameLineEdit_textEdited(const QString &arg1)
{
    auth_window::m_username = arg1;
}

void auth_window::on_PasswordLineEdit_textEdited(const QString &arg1)
{
    auth_window::m_userpass = arg1;
}

void auth_window::on_LoginPushButton_clicked()
{
    emit login_button_clicked();
}

void auth_window::on_RegisterPushButton_clicked()
{
    emit register_button_clicked();
}

QString auth_window::getLogin()
{
    return auth_window::m_username;
}

QString auth_window::getPass()
{
    return auth_window::m_userpass;
}
/*
void auth_window::on_DataBasePathLineEdit_textEdited(const QString &arg1)
{
    auth_window::CurrentDataBasePath = arg1;
}

QString auth_window::getDBPath()
{
    return auth_window::CurrentDataBasePath;
}*/
