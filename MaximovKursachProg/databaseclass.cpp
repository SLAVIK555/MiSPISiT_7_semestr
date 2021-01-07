#include "databaseclass.h"
#include <iostream>


using namespace std;

DataBaseClass::DataBaseClass()
{

}

/*void DataBaseClass::dbconnect(){
    //Подключаем базу данных
   QSqlDatabase db;
   db = QSqlDatabase::addDatabase("QSQLITE");
   db.setDatabaseName("/home/slava/Projects/MaximovKursach/MaximovKursachDB/MKdatabase");
   if(db.open()){
       cout << "ok" << endl;

       //Осуществляем запрос
       QSqlQuery query;
       query.exec("SELECT user_id, user_name, user_password FROM users");

       //Выводим значения из запроса
       while (query.next())
       {
       QString user_id = query.value(0).toString();
       //std::cout << user_id.toStdString() << endl;
       QString user_name = query.value(1).toString();
       QString user_password = query.value(2).toString();
       QString result = user_id+" "+user_name+" "+user_password+"\n";
       cout << "dbc" << endl;
       std::cout << result.toStdString() << endl;
       //ui->textEdit->insertPlainText(user_id+" "+user_name+" "+user_password+"\n");
       }
   }
}*/

/*bool DataBaseClass::d_connectDB()
{
    db_exemp = QSqlDatabase::addDatabase("QSQLITE");
    db_exemp.setDatabaseName("authorisation");
    if(!db_exemp.open())
    {
        qDebug() << "Cannot open database: " << db_exemp.lastError();
        return false;
    }
    return true;
}*/

bool DataBaseClass::d_connectDB()
{
    //QString cdbname = db_auth.getDBPath();
    db_exemp = QSqlDatabase::addDatabase("QSQLITE");
    db_exemp.setDatabaseName(cdbname);
    if(!db_exemp.open())
    {
        qDebug() << "Cannot open database file: " << db_exemp.lastError();
        //return false;
        db_exemp.setDatabaseName("PSSODataBase");
        if(!db_exemp.open())
        {
            qDebug() << "Cannot open PSSODataBase database : " << db_exemp.lastError();
            return false;
        }

    }
    return true;
}

void DataBaseClass::tablesCreating()
{
    QSqlQuery query;

    dbc_db_input = "CREATE TABLE userlist ("
                "number	INTEGER NOT NULL,"
                "name	TEXT NOT NULL UNIQUE,"
                "pass	TEXT NOT NULL,"
                "PRIMARY KEY(number)"
                ");";
    if(!query.exec(dbc_db_input))
    {
            qDebug() << "Unable to create a userlist table" << query.lastError();
    }

    dbc_db_input = "INSERT INTO userlist VALUES (1, 'DefU', 'DefP')";
    if(!query.exec(dbc_db_input))
    {
            qDebug() << "Unable to insert in userlust default values" << query.lastError();
    }

    dbc_db_input = "CREATE TABLE Details ("
                "D_id	INTEGER NOT NULL,"
                "Articul	TEXT NOT NULL,"
                "Name	TEXT NOT NULL,"
                "Price	INTEGER NOT NULL CHECK(Price>0),"
                "Kolvo	INTEGER NOT NULL DEFAULT 1,"
                "Group	TEXT NOT NULL DEFAULT 'NONE',"
                "Spec	TEXT NOT NULL DEFAULT 'NONE',"
                "Proj	TEXT NOT NULL,"
                "Owner	TEXT NOT NULL DEFAULT 'DefU',"
                "PRIMARY KEY(D_id)"
                ");";
    if(!query.exec(dbc_db_input))
    {
            qDebug() << "Unable to create a Details table" << query.lastError();
    }

    dbc_db_input = "INSERT INTO Details VALUES(1, 'AA001', 'DefDet', 100, 1, 'NONE', 'NONE','NONE', 'DefU')";
    if(!query.exec(dbc_db_input))
    {
            qDebug() << "Unable to insert in Details default values" << query.lastError();
    }
}


