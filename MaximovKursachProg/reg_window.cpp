#include "reg_window.h"
#include "ui_reg_window.h"

reg_window::reg_window(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::reg_window)
{
    ui->setupUi(this);
}

reg_window::~reg_window()
{
    delete ui;
}

void reg_window::on_nameLineEdit_textEdited(const QString &arg1)
{
    reg_window::m_userName = arg1;
}

void reg_window::on_passwordLineEdit_textEdited(const QString &arg1)
{
    reg_window::m_userPass = arg1;
}

void reg_window::on_confirmLineEdit_textEdited(const QString &arg1)
{
    reg_window::m_confirmation = arg1;
}

void reg_window::on_RegisterPushButton_clicked()
{
    emit register_button_clicked2();
}

QString reg_window::getName()
{
    return m_userName;
}

QString reg_window::getPass()
{
    return m_userPass;
}

bool reg_window::checkPass()
{
    return (m_confirmation == m_userPass);
}

bool reg_window::checkName()
{
    bool NameCheckSucces = true;
    QSqlQuery query;
    QSqlRecord rec;
    QString str_t = "SELECT name "
                    "FROM userlist;";
    reg_db_input = str_t;
    if(!query.exec(reg_db_input))
    {
        qDebug() << "Unable to get user names from database " << query.lastError() << " : " << query.lastQuery();
    }
    else
    {
        m_userName = getName();
        while(query.next())
        {
        //userName = query.value(rec.indexOf("name")).toString();
        QString user_name = query.value(rec.indexOf("name")).toString();
        if(m_userName == user_name){
            qDebug() << "entered user name had been addad in database yet";
            NameCheckSucces = false;
        }
        }
    }
    return (NameCheckSucces);
}
