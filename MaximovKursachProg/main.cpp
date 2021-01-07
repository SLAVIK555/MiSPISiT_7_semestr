#include "mainwindow.h"
#include <iostream>

#include <QApplication>

using namespace std;

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    //DataBaseClass dbc;
    //w.show();
    cout << 1 << endl;
    w.display();
    //dbc.dbconnect();
    return a.exec();
}
