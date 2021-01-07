#ifndef DATABASECLASS_H
#define DATABASECLASS_H

#include "mainwindow.h"
#include "auth_window.h"

class DataBaseClass
{
public:
    DataBaseClass();
    //MainWindow mw;
    QSqlDatabase db_exemp; // экземпляр подключения к БД
    bool d_connectDB(); // прототип метода подключения к БД
    void dbconnect();
    void tablesCreating();
    QString cdbname = "/home/slava/Projects/MaximovKursach/MaximovKursachProg/MKdb3";


private:
    auth_window db_auth;
    QString dbc_db_input; // строка для отправки запроса к БД
};

#endif // DATABASECLASS_H
