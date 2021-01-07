#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <iostream>
#include <string.h>
#include "QTextEdit"
#include "qtextedit.h"
#include "auth_window.h"
#include "reg_window.h"
#include <QtDebug>
#include "databaseclass.h"
#include <QTableView>

using namespace std;

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui_Main(new Ui::MainWindow)
{
    user_counter = 0;
    m_loginSuccesfull = false;

    connect(&ui_Auth, SIGNAL(login_button_clicked()), this, SLOT(authorizeUser()));
    connect(&ui_Auth,SIGNAL(destroyed()), this, SLOT(show()));
    connect(&ui_Auth,SIGNAL(register_button_clicked()), this,SLOT(registerWindowShow()));
    connect(&ui_Reg,SIGNAL(register_button_clicked2()), this,SLOT(registerUser()));
    connect(&ui_Reg,SIGNAL(destroyed()), &ui_Auth, SLOT(show()));

    connect(&ui_ANP,SIGNAL(ANP_button_cliked()), this, SLOT(ANP()));

    connect(&ui_DSP, SIGNAL(Yes_button_cliked()), this, SLOT(DSP()));
    connect(&ui_DSP, SIGNAL(No_button_cliked()), this, SLOT(noDSP()));

    connect(&ui_ANS, SIGNAL(ANS_button_cliked()), this, SLOT(ANS()));
    //connect(&ui_ANS, SIGNAL(ANS_check_box_checked()), this, SLOT(ANSCBC()));

    connect(&ui_DSS, SIGNAL(DSSYes_button_cliked()), this, SLOT(DSS()));
    connect(&ui_DSS, SIGNAL(DSSNo_button_cliked()), this, SLOT(noDSS()));

    connect(&ui_ANG, SIGNAL(ANG_button_cliked()), this, SLOT(ANG()));

    connect(&ui_DSG, SIGNAL(DSGYes_button_cliked()), this, SLOT(DSG()));
    connect(&ui_DSG, SIGNAL(DSGNo_button_cliked()), this, SLOT(noDSG()));

    connect(&ui_AND, SIGNAL(AND_button_cliked()), this, SLOT(AND()));

    connect(&ui_EDS, SIGNAL(ESD_button_cliked()), this, SLOT(EDS()));

    connect(&ui_DSD, SIGNAL(DSDYes_button_cliked()), this, SLOT(DSD()));
    connect(&ui_DSD, SIGNAL(DSDNo_button_cliked()), this, SLOT(noDSD()));

    connect(&ui_PSS, SIGNAL(PSS_button_clicked()), this, SLOT(PSS()));

    connect(&ui_PSP, SIGNAL(PSP_button_clicked()), this, SLOT(PSP()));

    DataBaseClass dbc;
    if(!dbc.d_connectDB())
        {
            qDebug() << "Failed to connect DB";
        }
    dbc.tablesCreating();

    /*if(!dbc.d_connectDB())
    {
        qDebug() << "Failed to connect DB";
    }

    QSqlQuery query;

    db_input = "CREATE TABLE userlist ( "
               "number INTEGER PRIMARY KEY NOT NULL,"
               "name VARCHAR(20), "
               "pass VARCHAR(12), "
               "xpos INTEGER, "
               "ypos INTEGER, "
               "width INTEGER, "
               "length INTEGER );";
    if(!query.exec(db_input))
    {
            qDebug() << "Unable to create a table" << query.lastError();
    }*/


    ui_Main->setupUi(this);
    ui_Main->OnlyMinecheckBox->setCheckState(Qt::Unchecked);
    only_mine=false;
    /*if(ui_Main->OnlyMinecheckBox->isChecked()){
        cout << "cheked" << endl;
    }
    else{
        cout << "uncheked" << endl;
    }*/
    ui_Main->PrintselectedProjectpushButton->setEnabled(false);
    ui_Main->PSSpushButton->setEnabled(false);
}

void MainWindow::authorizeUser()
{
    //cout << ui_Auth.getDBPath().toStdString() << endl;
    //QString mw_cdbname = ui_Auth.getDBPath();

    /*if(!dbc.d_connectDB())
        {
            qDebug() << "Failed to connect DB";
        }
    dbc.tablesCreating();*/


    m_username = ui_Auth.getLogin();
    m_userpass = ui_Auth.getPass();

    QString str_t = " SELECT * "
                    " FROM userlist "
                    " WHERE name = '%1'";
    // int db_number = 0;

    QString username = "";
    QString userpass = "";

    //int xPos = 0;
    //int yPos = 0;

    //int width = 0;
    //int length = 0;

    db_input = str_t.arg(m_username);

    QSqlQuery query;
    QSqlRecord rec;

    if(!query.exec(db_input))
    {
        qDebug() << "Unable to execute query - exiting" << query.lastError() << " : " << query.lastQuery();
    }
    rec = query.record();
    query.next();
    user_counter = query.value(rec.indexOf("number")).toInt();
    username = query.value(rec.indexOf("name")).toString();
    userpass = query.value(rec.indexOf("pass")).toString();
    if(m_username != username || m_userpass != userpass)
    {
        qDebug() << "Password missmatch" << username << " " << userpass;
        m_loginSuccesfull = false;
    }
    else
    {
        m_loginSuccesfull = true;
        CurrentUser = m_username;
        //xPos = query.value(rec.indexOf("xpos")).toInt();
        //yPos = query.value(rec.indexOf("ypos")).toInt();
        //width = query.value(rec.indexOf("width")).toInt();
        //length = query.value(rec.indexOf("length")).toInt();
        ui_Auth.close();
        ui_Reg.close();
        //this->setGeometry(xPos,yPos,width, length);
        this->show();
        cout << CurrentUser.toStdString() << endl;
    }
}

MainWindow::~MainWindow()
{
    /*if(m_loginSuccesfull)
    {
        **QString str_t = "UPDATE userlist "
                        "SET xpos = %2, ypos = %3, width = %4, length = %5 "
                        "WHERE name = '%1';";
        db_input = str_t .arg(m_username)
                         .arg(this->x())
                         .arg(this->y())
                         .arg(this->width())
                         .arg(this->height());
        QSqlQuery query;
        if(!query.exec(db_input))
        {
            qDebug() << "Unable to insert data"  << query.lastError() << " : " << query.lastQuery() ;
        }**
    }*/
    DataBaseClass dbc;
    dbc.db_exemp.removeDatabase("authorisation");
    qDebug() << "MainWindow Destroyed";
    delete ui_Main;
    exit(0);
}

void MainWindow::registerWindowShow()
{
    ui_Auth.hide();
    ui_Reg.show();
}

void MainWindow::registerUser()
{
    if(ui_Reg.checkPass() && ui_Reg.checkName())//Проверяем корректность пароля и уникальность введенного имени
    {
        QSqlQuery query;
        QSqlRecord rec;
        QString str_t = "SELECT COUNT(*) "
                        "FROM userlist;";
        db_input = str_t;
        if(!query.exec(db_input))
        {
            qDebug() << "Unable to get number " << query.lastError() << " : " << query.lastQuery();
            return;
        }
        else
        {
            query.next();
            rec = query.record();
            user_counter = rec.value(0).toInt();
            qDebug() << user_counter;
        }


        m_username = ui_Reg.getName();
        m_userpass = ui_Reg.getPass();
        user_counter++;
        str_t = "INSERT INTO userlist(number, name, pass)"
                "VALUES(%1, '%2', '%3');";
        db_input = str_t .arg(user_counter)
                         .arg(m_username)
                         .arg(m_userpass);
                        /* .arg(0)
                         .arg(0)
                         .arg(800)
                         .arg(400);*/

        if(!query.exec(db_input))
        {
            qDebug() << "Unable to insert data"  << query.lastError() << " : " << query.lastQuery();
        }
        else
        {
            ui_Reg.hide();
            ui_Auth.show();
        }
    }
    else
    {
        qDebug() << "Confirm password coorectly";
    }

}

void MainWindow::display()
{
    ui_Auth.show();
}

/*void MainWindow::on_pushButton_clicked()
{
    cout << "Tab widget button clicked" << endl;
    //cout << ui_Auth.getDBPath().toStdString() << endl;
    QSqlQueryModel *model = new QSqlQueryModel;
    model-> setQuery("SELECT * FROM userlist");
    //model-> setHeaderData(0, Qt::Horizontal, tr("Name"));
    //model-> setHeaderData(1, Qt::Horizontal, tr("Salary"));
    //QTableView *view = new QTableView;
    ui_Main->tableView-> setModel(model);
    ui_Main->tableView-> setSelectionBehavior(QAbstractItemView::SelectRows);
    ui_Main->tableView->setSelectionMode(QAbstractItemView::SingleSelection);

    ui_Main->tableView->resizeColumnsToContents();
    ui_Main->tableView->setEditTriggers(QAbstractItemView::NoEditTriggers);
    ui_Main->tableView->horizontalHeader()->setStretchLastSection(true);

    ui_Main->tableView-> show();
    //ui_Main->tableView
}*/

void MainWindow::displayProject()
{
    if(ui_Main->OnlyMinecheckBox->isChecked()){
        cout << "cheked" << endl;
        QString str_t = "SELECT DISTINCT Proj FROM Details WHERE Owner = '%1'";
        db_input = str_t.arg(CurrentUser);
        QSqlQueryModel *model = new QSqlQueryModel;
        model-> setQuery(db_input);

        ui_Main->SelectProjectcomboBox->setModel(model);


        /*ui_Main->tableView-> setModel(model);
        ui_Main->tableView-> setSelectionBehavior(QAbstractItemView::SelectRows);
        ui_Main->tableView->setSelectionMode(QAbstractItemView::SingleSelection);

        ui_Main->tableView->resizeColumnsToContents();
        ui_Main->tableView->setEditTriggers(QAbstractItemView::NoEditTriggers);
        ui_Main->tableView->horizontalHeader()->setStretchLastSection(true);

        ui_Main->tableView-> show();*/
        cout << ui_Main->SelectProjectcomboBox->currentText().toStdString() << endl;
    }
    else{
        cout << "uncheked" << endl;
        QString str_t = "SELECT DISTINCT Proj FROM Details";
        QSqlQueryModel *model = new QSqlQueryModel;
        model-> setQuery(str_t);

        ui_Main->SelectProjectcomboBox->setModel(model);


        /*ui_Main->tableView-> setModel(model);
        ui_Main->tableView-> setSelectionBehavior(QAbstractItemView::SelectRows);
        ui_Main->tableView->setSelectionMode(QAbstractItemView::SingleSelection);

        ui_Main->tableView->resizeColumnsToContents();
        ui_Main->tableView->setEditTriggers(QAbstractItemView::NoEditTriggers);
        ui_Main->tableView->horizontalHeader()->setStretchLastSection(true);

        ui_Main->tableView-> show();*/
        cout << ui_Main->SelectProjectcomboBox->currentText().toStdString() << endl;
    }
}

void MainWindow::on_DisplayProjectspushButton_clicked()
{
    cout << "Display Project button clicked";
    displayProject();
    //ui_Main->PrintselectedProjectpushButton->setEnabled(false);
}

void MainWindow::displaySpetifications()
{
    if(ui_Main->OnlyMinecheckBox->isChecked()){
        cout << "cheked" << endl;
        QString str_t = "SELECT DISTINCT Spec FROM Details WHERE Owner = '%1' AND Proj = '%2'";
        db_input = str_t.arg(CurrentUser).arg(ui_Main->SelectProjectcomboBox->currentText());
        QSqlQueryModel *model = new QSqlQueryModel;
        model-> setQuery(db_input);

        ui_Main->SpetificationstableView->setModel(model);
        ui_Main->SpetificationstableView->setSelectionBehavior(QAbstractItemView::SelectRows);
        ui_Main->SpetificationstableView->setSelectionMode(QAbstractItemView::SingleSelection);

        ui_Main->SpetificationstableView->resizeColumnsToContents();
        ui_Main->SpetificationstableView->setEditTriggers(QAbstractItemView::NoEditTriggers);
        ui_Main->SpetificationstableView->horizontalHeader()->setStretchLastSection(true);

        ui_Main->SpetificationstableView-> show();
        cout << ui_Main->SelectProjectcomboBox->currentText().toStdString() << endl;
    }
    else{
        cout << "uncheked" << endl;
        QString str_t = "SELECT DISTINCT Spec FROM Details WHERE Proj = '%1'";
        db_input = str_t.arg(ui_Main->SelectProjectcomboBox->currentText());
        QSqlQueryModel *model = new QSqlQueryModel;
        model-> setQuery(db_input);

        ui_Main->SpetificationstableView->setModel(model);
        ui_Main->SpetificationstableView->setSelectionBehavior(QAbstractItemView::SelectRows);
        ui_Main->SpetificationstableView->setSelectionMode(QAbstractItemView::SingleSelection);

        ui_Main->SpetificationstableView->resizeColumnsToContents();
        ui_Main->SpetificationstableView->setEditTriggers(QAbstractItemView::NoEditTriggers);
        ui_Main->SpetificationstableView->horizontalHeader()->setStretchLastSection(true);

        ui_Main->SpetificationstableView-> show();
        cout << ui_Main->SelectProjectcomboBox->currentText().toStdString() << endl;
    }
}

void MainWindow::on_ViewselectedProjectpushButton_clicked()
{
    cout << "View selected Project button clicked";
    displaySpetifications();
    //
    displayGroups();
    displayDetails();
}

bool MainWindow::chekUnicProjName()
{
    bool ProjNameCheckSucces = true;
    QSqlQuery query;
    QString str_t = "SELECT DISTINCT Proj "
                    "FROM Details;";
    proj_db_input = str_t;
    if(!query.exec(proj_db_input))
    {
        qDebug() << "Unable to get projects from database " << query.lastError() << " : " << query.lastQuery();
    }
    else
    {
        QString proj = ui_ANP.getName();
        while(query.next())
        {
        //userName = query.value(rec.indexOf("name")).toString();
        QString proj_name = query.value(0).toString();
        cout << "proj: " << proj.toStdString() << " proj_name: " << proj_name.toStdString() << endl;
        if(proj == proj_name){
            qDebug() << "entered proj name had been addad in database yet";
            ProjNameCheckSucces = false;
        }
        }
    }
    return (ProjNameCheckSucces);
}

void MainWindow::ANP()
{
    cout << "adding New Project" << endl;
    if(chekUnicProjName()){
        cout << "chekUnicProjName" << endl;
        QSqlQuery query;
        QString name = ui_ANP.getName();
        //QString owner = ui_ANP.getOwner();

        QString str_t = "INSERT INTO Details (Proj, Owner) VALUES ('%1', '%2')";
        //proj_db_input = str_t.arg(name).arg(owner);
        proj_db_input = str_t.arg(name).arg(CurrentUser);

        if(!query.exec(proj_db_input))
        {
            qDebug() << "Unable to insert new proj"  << query.lastError() << " : " << query.lastQuery();
        }
        else
        {
            ui_ANP.hide();
            displayProject();
        }
    }
    else
    {
        //QMessageBox::warning(this, "Error","Entered Project name had been addad in database yet");
        QMessageBox msgBox;
        msgBox.setWindowTitle("Error");
        msgBox.setText("Entered Project name had been added in database yet");
        msgBox.exec();
    }
}

void MainWindow::on_AddnewProjectpushButton_clicked()
{
    //QString str_t = "SELECT DISTINCT Owner FROM Details";
    //ui_ANP.Owner_model-> setQuery(str_t);

    ui_ANP.show();
}

void MainWindow::on_DelselectedProjectpushButton_clicked()
{
    ui_DSP.show();
}

void MainWindow::DSP()
{
    QSqlQuery query;
    QString pname = ui_Main->SelectProjectcomboBox->currentText();

    QString str_t = "DELETE FROM Details WHERE Proj='%1' AND Owner='%2'";
    proj_db_input = str_t.arg(pname).arg(CurrentUser);

    if(!query.exec(proj_db_input))
    {
        qDebug() << "Unable to delete selected proj"  << query.lastError() << " : " << query.lastQuery();
    }
    else
    {
        ui_DSP.hide();
        displayProject();
    }
}

void MainWindow::noDSP()
{
    ui_DSP.hide();
}

void MainWindow::on_OnlyMinecheckBox_stateChanged(int arg1)
{
    displayProject();
    //
    displaySpetifications();
    displayGroups();
    displayDetails();

    if (ui_Main->OnlyMinecheckBox->isChecked()){
        ui_Main->PrintselectedProjectpushButton->setEnabled(true);
        ui_Main->PSSpushButton->setEnabled(true);
    }
    else{
        ui_Main->PrintselectedProjectpushButton->setEnabled(false);
        ui_Main->PSSpushButton->setEnabled(false);
    }
}

void MainWindow::on_AddnewSpecpushButton_clicked()
{
    //QString str_t = "SELECT DISTINCT Proj FROM Details";
    //ui_ANS.Proj_model-> setQuery(str_t);

    ui_ANS.show();
}

bool MainWindow::chekUnicSpecName()
{
    bool SpecNameCheckSucces = true;
    QString c_proj = ui_Main->SelectProjectcomboBox->currentText();
    QSqlQuery query;
    QString str_t = "SELECT DISTINCT Spec "
                    "FROM Details WHERE Proj = '%1'";
    spec_db_input = str_t.arg(c_proj);

    if(!query.exec(spec_db_input))
    {
        qDebug() << "Unable to get specs from database " << query.lastError() << " : " << query.lastQuery();
    }
    else
    {
        QString spec = ui_ANS.ANSgetSpec();
        while(query.next())
        {
        //userName = query.value(rec.indexOf("name")).toString();
        QString spec_name = query.value(0).toString();
        cout << "spec: " << spec.toStdString() << " spec_name: " << spec_name.toStdString() << endl;
        if(spec == spec_name){
            qDebug() << "entered spec name had been addad in database yet";
            SpecNameCheckSucces = false;
        }
        }
    }
    return (SpecNameCheckSucces);
}

/*void MainWindow::ANSCBC()
{
    if(ui_ANS.ANSgetState()==0){
        anscbc = ui_ANS.ANSgetProj();
    }
    else{
        anscbc = ui_Main->SelectProjectcomboBox->currentText();
    }

}*/

void MainWindow::ANS()
{
    cout << "adding New Spetification" << endl;
    if(chekUnicSpecName()){
        cout << "chekUnicSpecName" << endl;
        QSqlQuery query;
        QString s_name = ui_ANS.ANSgetSpec();
        //ANSCBC();
        //QString p_name = anscbc;
        QString p_name = ui_Main->SelectProjectcomboBox->currentText();

        //QString p_name = ui_ANS.ANSgetProj();
        //QString owner = ui_ANP.getOwner();

        QString str_t = "INSERT INTO Details (Spec, Proj, Owner) VALUES ('%1', '%2', '%3')";
        //proj_db_input = str_t.arg(name).arg(owner);
        spec_db_input = str_t.arg(s_name).arg(p_name).arg(CurrentUser);

        if(!query.exec(spec_db_input))
        {
            qDebug() << "Unable to insert new spec"  << query.lastError() << " : " << query.lastQuery();
        }
        else
        {
            ui_ANS.hide();
            //displayProject();
            displaySpetifications();
        }
    }
    else
    {
        //QMessageBox::warning(this, "Error","Entered Project name had been addad in database yet");
        QMessageBox msgBox;
        msgBox.setWindowTitle("Error");
        msgBox.setText("Entered Spetification name had been added in database yet");
        msgBox.exec();
    }
}

void MainWindow::on_SelectProjectcomboBox_currentTextChanged(const QString &arg1)
{
    displaySpetifications();
    //
    displayGroups();
    displayDetails();
}

void MainWindow::on_DelselectedSpecpushButton_clicked()
{
    ui_DSS.show();
    qDebug() << ui_Main->SpetificationstableView->model()->data(ui_Main->SpetificationstableView->currentIndex()).toString();
}

void MainWindow::DSS()
{
    QSqlQuery query;
    //QString sname = ui_Main->SpetificationstableView->currentIndex();//??????????????????????????????????????????????????????
    QString sname = ui_Main->SpetificationstableView->model()->data(ui_Main->SpetificationstableView->currentIndex()).toString();
    QString pname = ui_Main->SelectProjectcomboBox->currentText();

    QString str_t = "DELETE FROM Details WHERE Spec = '%1' AND Proj='%2' AND Owner='%3'";
    spec_db_input = str_t.arg(sname).arg(pname).arg(CurrentUser);

    if(!query.exec(spec_db_input))
    {
        qDebug() << "Unable to delete selected spec"  << query.lastError() << " : " << query.lastQuery();
    }
    else
    {
        ui_DSS.hide();
        displaySpetifications();
        //displayProject();
    }
}
void MainWindow::noDSS()
{
    ui_DSS.hide();
}

void MainWindow::displayGroups()
{
    if(ui_Main->OnlyMinecheckBox->isChecked()){
        cout << "cheked" << endl;
        QString str_t = "SELECT DISTINCT Groupp FROM Details WHERE Owner = '%1' AND Proj = '%2' AND Spec = '%3'";
        qDebug() << ui_Main->SpetificationstableView->model()->data(ui_Main->SpetificationstableView->currentIndex()).toString();
        db_input = str_t.arg(CurrentUser).arg(ui_Main->SelectProjectcomboBox->currentText()).arg(ui_Main->SpetificationstableView->model()->data(ui_Main->SpetificationstableView->currentIndex()).toString());
        QSqlQueryModel *model = new QSqlQueryModel;
        model-> setQuery(db_input);

        ui_Main->GroupstableView->setModel(model);
        ui_Main->GroupstableView->setSelectionBehavior(QAbstractItemView::SelectRows);
        ui_Main->GroupstableView->setSelectionMode(QAbstractItemView::SingleSelection);

        ui_Main->GroupstableView->resizeColumnsToContents();
        ui_Main->GroupstableView->setEditTriggers(QAbstractItemView::NoEditTriggers);
        ui_Main->GroupstableView->horizontalHeader()->setStretchLastSection(true);

        ui_Main->GroupstableView-> show();
        cout << ui_Main->SelectProjectcomboBox->currentText().toStdString() << endl;
    }
    else{
        cout << "uncheked" << endl;
        QString str_t = "SELECT DISTINCT Groupp FROM Details WHERE Proj = '%1' AND Spec = '%2'";
        db_input = str_t.arg(ui_Main->SelectProjectcomboBox->currentText()).arg(ui_Main->SpetificationstableView->model()->data(ui_Main->SpetificationstableView->currentIndex()).toString());
        QSqlQueryModel *model = new QSqlQueryModel;
        model-> setQuery(db_input);

        ui_Main->GroupstableView-> setModel(model);
        ui_Main->GroupstableView-> setSelectionBehavior(QAbstractItemView::SelectRows);
        ui_Main->GroupstableView->setSelectionMode(QAbstractItemView::SingleSelection);

        ui_Main->GroupstableView->resizeColumnsToContents();
        ui_Main->GroupstableView->setEditTriggers(QAbstractItemView::NoEditTriggers);
        ui_Main->GroupstableView->horizontalHeader()->setStretchLastSection(true);

        ui_Main->GroupstableView-> show();
        cout << ui_Main->SelectProjectcomboBox->currentText().toStdString() << endl;
    }
}

void MainWindow::on_SpetificationstableView_clicked(const QModelIndex &index)
{
    qDebug() << "SpecTableViewClicked: ";
    displayGroups();
    //
    displayDetails();
}

bool MainWindow::checUnicGrouppName()
{
    bool GroupNameCheckSucces = true;
    QString c_proj = ui_Main->SelectProjectcomboBox->currentText();
    QString c_spec = ui_Main->SpetificationstableView->model()->data(ui_Main->SpetificationstableView->currentIndex()).toString();
    QSqlQuery query;
    QString str_t = "SELECT DISTINCT Groupp "
                    "FROM Details WHERE Proj = '%1' AND Spec = '%2'";
    groupp_db_input = str_t.arg(c_proj).arg(c_spec);

    if(!query.exec(groupp_db_input))
    {
        qDebug() << "Unable to get groups from database " << query.lastError() << " : " << query.lastQuery();
    }
    else
    {
        QString groupp = ui_ANG.ANGgetGroupp();
        while(query.next())
        {
        //userName = query.value(rec.indexOf("name")).toString();
        QString groupp_name = query.value(0).toString();
        cout << "groupp: " << groupp.toStdString() << " groupp_name: " << groupp_name.toStdString() << endl;
        if(groupp == groupp_name){
            qDebug() << "entered groupp name had been addad in database yet";
            GroupNameCheckSucces = false;
        }
        }
    }
    return (GroupNameCheckSucces);
}

void MainWindow::ANG()
{
    cout << "adding New Group" << endl;
    if(checUnicGrouppName()){
        cout << "chekUnicGrouppName" << endl;
        QSqlQuery query;
        //QString s_name = ui_ANS.ANSgetSpec();
        QString g_name = ui_ANG.ANGgetGroupp();
        //ANSCBC();
        //QString p_name = anscbc;
        QString p_name = ui_Main->SelectProjectcomboBox->currentText();
        QString s_name = ui_Main->SpetificationstableView->model()->data(ui_Main->SpetificationstableView->currentIndex()).toString();

        //QString p_name = ui_ANS.ANSgetProj();
        //QString owner = ui_ANP.getOwner();

        QString str_t = "INSERT INTO Details (Groupp, Spec, Proj, Owner) VALUES ('%1', '%2', '%3', '%4')";
        //proj_db_input = str_t.arg(name).arg(owner);
        groupp_db_input = str_t.arg(g_name).arg(s_name).arg(p_name).arg(CurrentUser);

        if(!query.exec(groupp_db_input))
        {
            qDebug() << "Unable to insert new group"  << query.lastError() << " : " << query.lastQuery();
        }
        else
        {
            ui_ANG.hide();
            //displayProject();
            //displaySpetifications();
            displayGroups();
        }
    }
    else
    {
        //QMessageBox::warning(this, "Error","Entered Project name had been addad in database yet");
        QMessageBox msgBox;
        msgBox.setWindowTitle("Error");
        msgBox.setText("Entered Group name had been added in database yet");
        msgBox.exec();
    }
}

void MainWindow::on_ANGpushButton_clicked()
{
    ui_ANG.show();
}

void MainWindow::on_DSGpushButton_clicked()
{
    ui_DSG.show();
    qDebug() << ui_Main->SpetificationstableView->model()->data(ui_Main->SpetificationstableView->currentIndex()).toString();
    qDebug() << ui_Main->GroupstableView->model()->data(ui_Main->GroupstableView->currentIndex()).toString();
}

void MainWindow::DSG()
{
    QSqlQuery query;
    //QString sname = ui_Main->SpetificationstableView->currentIndex();//??????????????????????????????????????????????????????
    QString gname = ui_Main->GroupstableView->model()->data(ui_Main->GroupstableView->currentIndex()).toString();
    QString sname = ui_Main->SpetificationstableView->model()->data(ui_Main->SpetificationstableView->currentIndex()).toString();
    QString pname = ui_Main->SelectProjectcomboBox->currentText();

    QString str_t = "DELETE FROM Details WHERE Groupp = '%1' AND Spec = '%2' AND Proj='%3' AND Owner='%4'";
    groupp_db_input = str_t.arg(gname).arg(sname).arg(pname).arg(CurrentUser);

    if(!query.exec(groupp_db_input))
    {
        qDebug() << "Unable to delete selected groupp"  << query.lastError() << " : " << query.lastQuery();
    }
    else
    {
        ui_DSG.hide();
        displayGroups();
        //displaySpetifications();
        //displayProject();
    }
}

void MainWindow::noDSG()
{
    ui_DSG.hide();
}

void MainWindow::displayDetails()
{
    if(ui_Main->OnlyMinecheckBox->isChecked()){
        cout << "cheked" << endl;
        QString str_t = "SELECT DISTINCT Articul, Provider, Name, Price, Kolvo, Manufacturer FROM Details WHERE Owner = '%1' AND Proj = '%2' AND Spec = '%3' AND Groupp = '%4'";
        qDebug() << ui_Main->SpetificationstableView->model()->data(ui_Main->SpetificationstableView->currentIndex()).toString();
        qDebug() << ui_Main->GroupstableView->model()->data(ui_Main->GroupstableView->currentIndex()).toString();

        db_input = str_t.arg(CurrentUser)
                        .arg(ui_Main->SelectProjectcomboBox->currentText())
                        .arg(ui_Main->SpetificationstableView->model()->data(ui_Main->SpetificationstableView->currentIndex()).toString())
                        .arg(ui_Main->GroupstableView->model()->data(ui_Main->GroupstableView->currentIndex()).toString());
        QSqlQueryModel *model = new QSqlQueryModel;
        model-> setQuery(db_input);

        ui_Main->DetailstableView->setModel(model);
        ui_Main->DetailstableView->setSelectionBehavior(QAbstractItemView::SelectRows);
        ui_Main->DetailstableView->setSelectionMode(QAbstractItemView::SingleSelection);

        ui_Main->DetailstableView->resizeColumnsToContents();
        ui_Main->DetailstableView->setEditTriggers(QAbstractItemView::NoEditTriggers);
        ui_Main->DetailstableView->horizontalHeader()->setStretchLastSection(true);

        ui_Main->DetailstableView-> show();
        cout << ui_Main->SelectProjectcomboBox->currentText().toStdString() << endl;
    }
    else{
        cout << "uncheked" << endl;
        QString str_t = "SELECT DISTINCT Articul, Provider, Name, Price, Kolvo, Manufacturer FROM Details WHERE Proj = '%1' AND Spec = '%2' AND Groupp = '%3'";
        db_input = str_t.arg(ui_Main->SelectProjectcomboBox->currentText())
                        .arg(ui_Main->SpetificationstableView->model()->data(ui_Main->SpetificationstableView->currentIndex()).toString())
                        .arg(ui_Main->GroupstableView->model()->data(ui_Main->GroupstableView->currentIndex()).toString());

        QSqlQueryModel *model = new QSqlQueryModel;
        model-> setQuery(db_input);

        ui_Main->DetailstableView->setModel(model);
        ui_Main->DetailstableView->setSelectionBehavior(QAbstractItemView::SelectRows);
        //ui_Main->DetailstableView->setSelectionBehavior(QAbstractItemView::SelectItems);
        //ui_Main->DetailstableView->setSelectionBehavior(QAbstractItemView::SelectColumns);
        ui_Main->DetailstableView->setSelectionMode(QAbstractItemView::SingleSelection);

        ui_Main->DetailstableView->resizeColumnsToContents();
        ui_Main->DetailstableView->setEditTriggers(QAbstractItemView::NoEditTriggers);
        ui_Main->DetailstableView->horizontalHeader()->setStretchLastSection(true);

        ui_Main->DetailstableView-> show();
        cout << ui_Main->SelectProjectcomboBox->currentText().toStdString() << endl;
    }
}

void MainWindow::on_GroupstableView_clicked(const QModelIndex &index)
{
    qDebug() << "GroupsTableViewClicked: ";
    //displayGroups();
    displayDetails();
}

void MainWindow::on_ANDpushButton_clicked()
{
    QString str_t;

    str_t = "SELECT DISTINCT Articul FROM Details WHERE Owner = '%1' AND Proj = '%2' AND Spec = '%3' AND Groupp = '%4'";
    db_input = str_t.arg(CurrentUser)
                    .arg(ui_Main->SelectProjectcomboBox->currentText())
                    .arg(ui_Main->SpetificationstableView->model()->data(ui_Main->SpetificationstableView->currentIndex()).toString())
                    .arg(ui_Main->GroupstableView->model()->data(ui_Main->GroupstableView->currentIndex()).toString());
    ui_AND.Articul_model->setQuery(db_input);

    str_t = "SELECT DISTINCT Provider FROM Details WHERE Owner = '%1' AND Proj = '%2' AND Spec = '%3' AND Groupp = '%4'";
    db_input = str_t.arg(CurrentUser)
                    .arg(ui_Main->SelectProjectcomboBox->currentText())
                    .arg(ui_Main->SpetificationstableView->model()->data(ui_Main->SpetificationstableView->currentIndex()).toString())
                    .arg(ui_Main->GroupstableView->model()->data(ui_Main->GroupstableView->currentIndex()).toString());
    ui_AND.Provider_model->setQuery(db_input);

    str_t = "SELECT DISTINCT Name FROM Details WHERE Owner = '%1' AND Proj = '%2' AND Spec = '%3' AND Groupp = '%4'";
    db_input = str_t.arg(CurrentUser)
                    .arg(ui_Main->SelectProjectcomboBox->currentText())
                    .arg(ui_Main->SpetificationstableView->model()->data(ui_Main->SpetificationstableView->currentIndex()).toString())
                    .arg(ui_Main->GroupstableView->model()->data(ui_Main->GroupstableView->currentIndex()).toString());
    ui_AND.Name_model->setQuery(db_input);

    str_t = "SELECT DISTINCT Price FROM Details WHERE Owner = '%1' AND Proj = '%2' AND Spec = '%3' AND Groupp = '%4'";
    db_input = str_t.arg(CurrentUser)
                    .arg(ui_Main->SelectProjectcomboBox->currentText())
                    .arg(ui_Main->SpetificationstableView->model()->data(ui_Main->SpetificationstableView->currentIndex()).toString())
                    .arg(ui_Main->GroupstableView->model()->data(ui_Main->GroupstableView->currentIndex()).toString());
    ui_AND.Price_model->setQuery(db_input);

    str_t = "SELECT DISTINCT Kolvo FROM Details WHERE Owner = '%1' AND Proj = '%2' AND Spec = '%3' AND Groupp = '%4'";
    db_input = str_t.arg(CurrentUser)
                    .arg(ui_Main->SelectProjectcomboBox->currentText())
                    .arg(ui_Main->SpetificationstableView->model()->data(ui_Main->SpetificationstableView->currentIndex()).toString())
                    .arg(ui_Main->GroupstableView->model()->data(ui_Main->GroupstableView->currentIndex()).toString());
    ui_AND.Count_model->setQuery(db_input);

    str_t = "SELECT DISTINCT Manufacturer FROM Details WHERE Owner = '%1' AND Proj = '%2' AND Spec = '%3' AND Groupp = '%4'";
    db_input = str_t.arg(CurrentUser)
                    .arg(ui_Main->SelectProjectcomboBox->currentText())
                    .arg(ui_Main->SpetificationstableView->model()->data(ui_Main->SpetificationstableView->currentIndex()).toString())
                    .arg(ui_Main->GroupstableView->model()->data(ui_Main->GroupstableView->currentIndex()).toString());
    ui_AND.Manufacturer_model->setQuery(db_input);

    ui_AND.show();
}

bool MainWindow::checUnicArticulName()
{
    bool ArticulNameCheckSucces = true;
    QString c_proj = ui_Main->SelectProjectcomboBox->currentText();
    QString c_spec = ui_Main->SpetificationstableView->model()->data(ui_Main->SpetificationstableView->currentIndex()).toString();
    QString c_groupp = ui_Main->GroupstableView->model()->data(ui_Main->GroupstableView->currentIndex()).toString();
    QSqlQuery query;
    QString str_t = "SELECT DISTINCT Articul "
                    "FROM Details WHERE Proj = '%1' AND Spec = '%2' AND Groupp = '%3'";
    detail_db_input = str_t.arg(c_proj).arg(c_spec).arg(c_groupp);

    if(!query.exec(detail_db_input))
    {
        qDebug() << "Unable to get articul from database " << query.lastError() << " : " << query.lastQuery();
    }
    else
    {
        QString articul = ui_AND.ANDgetArticul();
        while(query.next())
        {
        //userName = query.value(rec.indexOf("name")).toString();
        QString articul_name = query.value(0).toString();
        cout << "articul: " << articul.toStdString() << " articul_name: " << articul_name.toStdString() << endl;
        if(articul == articul_name){
            qDebug() << "entered articul name had been addad in database yet";
            ArticulNameCheckSucces = false;
        }
        }
    }
    return (ArticulNameCheckSucces);
}

void MainWindow::AND()
{
    cout << "New Detail Adding" << endl;
    if(checUnicArticulName()){
        QSqlQuery query;

        QString mw_ana = ui_AND.ANDgetArticul();
        QString mw_anpv = ui_AND.ANDgetProvider();
        QString mw_ann = ui_AND.ANDgetName();
        QString mw_anpc = ui_AND.ANDgetPrice();
        QString mw_anc = ui_AND.ANDgetCount();
        QString mw_anm = ui_AND.ANDgetManufacturer();

        QString str_t = "INSERT INTO Details (Articul, Provider, Name, Price, Kolvo, Manufacturer, Groupp, Spec, Proj, Owner) VALUES ('%1', '%2', '%3', '%4', '%5', '%6', '%7', '%8', '%9', '%10')";

        detail_db_input = str_t.arg(mw_ana)
                               .arg(mw_anpv)
                               .arg(mw_ann)
                               .arg(mw_anpc)
                               .arg(mw_anc)
                               .arg(mw_anm)
                               .arg(ui_Main->GroupstableView->model()->data(ui_Main->GroupstableView->currentIndex()).toString())
                               .arg(ui_Main->SpetificationstableView->model()->data(ui_Main->SpetificationstableView->currentIndex()).toString())
                               .arg(ui_Main->SelectProjectcomboBox->currentText())
                               .arg(CurrentUser);

        if(!query.exec(detail_db_input))
        {
            qDebug() << "Unable to insert new group"  << query.lastError() << " : " << query.lastQuery();
        }
        else
        {
            ui_AND.hide();
            //displayProject();
            //displaySpetifications();
            //displayGroups();
            displayDetails();
        }
    }
    else{
        QMessageBox msgBox;
        msgBox.setWindowTitle("Error");
        msgBox.setText("Entered Detail (Articul) had been added in database yet");
        msgBox.exec();
    }
}


void MainWindow::on_ESDpushButton_clicked()
{
    QModelIndexList SelectedRowsIndexesList = ui_Main->DetailstableView->selectionModel()->selectedRows();
    QString c_articul = SelectedRowsIndexesList[0].data().toString();
    qDebug() << c_articul;

    QString str_t;

    str_t = "SELECT DISTINCT Articul FROM Details WHERE Owner = '%1' AND Proj = '%2' AND Spec = '%3' AND Groupp = '%4'";
    db_input = str_t.arg(CurrentUser)
                    .arg(ui_Main->SelectProjectcomboBox->currentText())
                    .arg(ui_Main->SpetificationstableView->model()->data(ui_Main->SpetificationstableView->currentIndex()).toString())
                    .arg(ui_Main->GroupstableView->model()->data(ui_Main->GroupstableView->currentIndex()).toString());
    ui_EDS.EArticul_model->setQuery(db_input);

    str_t = "SELECT DISTINCT Provider FROM Details WHERE Owner = '%1' AND Proj = '%2' AND Spec = '%3' AND Groupp = '%4'";
    db_input = str_t.arg(CurrentUser)
                    .arg(ui_Main->SelectProjectcomboBox->currentText())
                    .arg(ui_Main->SpetificationstableView->model()->data(ui_Main->SpetificationstableView->currentIndex()).toString())
                    .arg(ui_Main->GroupstableView->model()->data(ui_Main->GroupstableView->currentIndex()).toString());
    ui_EDS.EProvider_model->setQuery(db_input);

    str_t = "SELECT DISTINCT Name FROM Details WHERE Owner = '%1' AND Proj = '%2' AND Spec = '%3' AND Groupp = '%4'";
    db_input = str_t.arg(CurrentUser)
                    .arg(ui_Main->SelectProjectcomboBox->currentText())
                    .arg(ui_Main->SpetificationstableView->model()->data(ui_Main->SpetificationstableView->currentIndex()).toString())
                    .arg(ui_Main->GroupstableView->model()->data(ui_Main->GroupstableView->currentIndex()).toString());
    ui_EDS.EName_model->setQuery(db_input);

    str_t = "SELECT DISTINCT Price FROM Details WHERE Owner = '%1' AND Proj = '%2' AND Spec = '%3' AND Groupp = '%4'";
    db_input = str_t.arg(CurrentUser)
                    .arg(ui_Main->SelectProjectcomboBox->currentText())
                    .arg(ui_Main->SpetificationstableView->model()->data(ui_Main->SpetificationstableView->currentIndex()).toString())
                    .arg(ui_Main->GroupstableView->model()->data(ui_Main->GroupstableView->currentIndex()).toString());
    ui_EDS.EPrice_model->setQuery(db_input);

    str_t = "SELECT DISTINCT Kolvo FROM Details WHERE Owner = '%1' AND Proj = '%2' AND Spec = '%3' AND Groupp = '%4'";
    db_input = str_t.arg(CurrentUser)
                    .arg(ui_Main->SelectProjectcomboBox->currentText())
                    .arg(ui_Main->SpetificationstableView->model()->data(ui_Main->SpetificationstableView->currentIndex()).toString())
                    .arg(ui_Main->GroupstableView->model()->data(ui_Main->GroupstableView->currentIndex()).toString());
    ui_EDS.ECount_model->setQuery(db_input);

    str_t = "SELECT DISTINCT Manufacturer FROM Details WHERE Owner = '%1' AND Proj = '%2' AND Spec = '%3' AND Groupp = '%4'";
    db_input = str_t.arg(CurrentUser)
                    .arg(ui_Main->SelectProjectcomboBox->currentText())
                    .arg(ui_Main->SpetificationstableView->model()->data(ui_Main->SpetificationstableView->currentIndex()).toString())
                    .arg(ui_Main->GroupstableView->model()->data(ui_Main->GroupstableView->currentIndex()).toString());
    ui_EDS.EManufacturer_model->setQuery(db_input);

    //
    //
    //
    ui_EDS.fmw_eana = c_articul;
    QSqlQuery query;

    str_t = "SELECT DISTINCT Provider FROM Details WHERE Owner = '%1' AND Proj = '%2' AND Spec = '%3' AND Groupp = '%4' AND Articul = '%5'";
    db_input = str_t.arg(CurrentUser)
                    .arg(ui_Main->SelectProjectcomboBox->currentText())
                    .arg(ui_Main->SpetificationstableView->model()->data(ui_Main->SpetificationstableView->currentIndex()).toString())
                    .arg(ui_Main->GroupstableView->model()->data(ui_Main->GroupstableView->currentIndex()).toString())
                    .arg(c_articul);
    if(!query.exec(db_input))
    {
        qDebug() << "Unable to get provider from database " << query.lastError() << " : " << query.lastQuery();
    }
    else
    {
        ui_EDS.fmw_eanpv = query.value(0).toString();
    }

    str_t = "SELECT DISTINCT Name FROM Details WHERE Owner = '%1' AND Proj = '%2' AND Spec = '%3' AND Groupp = '%4' AND Articul = '%5'";
    db_input = str_t.arg(CurrentUser)
                    .arg(ui_Main->SelectProjectcomboBox->currentText())
                    .arg(ui_Main->SpetificationstableView->model()->data(ui_Main->SpetificationstableView->currentIndex()).toString())
                    .arg(ui_Main->GroupstableView->model()->data(ui_Main->GroupstableView->currentIndex()).toString())
                    .arg(c_articul);
    if(!query.exec(db_input))
    {
        qDebug() << "Unable to get name from database " << query.lastError() << " : " << query.lastQuery();
    }
    else
    {
        ui_EDS.fmw_eann = query.value(0).toString();
    }

    str_t = "SELECT DISTINCT Price FROM Details WHERE Owner = '%1' AND Proj = '%2' AND Spec = '%3' AND Groupp = '%4' AND Articul = '%5'";
    db_input = str_t.arg(CurrentUser)
                    .arg(ui_Main->SelectProjectcomboBox->currentText())
                    .arg(ui_Main->SpetificationstableView->model()->data(ui_Main->SpetificationstableView->currentIndex()).toString())
                    .arg(ui_Main->GroupstableView->model()->data(ui_Main->GroupstableView->currentIndex()).toString())
                    .arg(c_articul);
    if(!query.exec(db_input))
    {
        qDebug() << "Unable to get price from database " << query.lastError() << " : " << query.lastQuery();
    }
    else
    {
        ui_EDS.fmw_eanpc = query.value(0).toString();
    }

    str_t = "SELECT DISTINCT Kolvo FROM Details WHERE Owner = '%1' AND Proj = '%2' AND Spec = '%3' AND Groupp = '%4' AND Articul = '%5'";
    db_input = str_t.arg(CurrentUser)
                    .arg(ui_Main->SelectProjectcomboBox->currentText())
                    .arg(ui_Main->SpetificationstableView->model()->data(ui_Main->SpetificationstableView->currentIndex()).toString())
                    .arg(ui_Main->GroupstableView->model()->data(ui_Main->GroupstableView->currentIndex()).toString())
                    .arg(c_articul);
    if(!query.exec(db_input))
    {
        qDebug() << "Unable to get count from database " << query.lastError() << " : " << query.lastQuery();
    }
    else
    {
        ui_EDS.fmw_eanc = query.value(0).toString();
    }


    str_t = "SELECT DISTINCT Manufacturer FROM Details WHERE Owner = '%1' AND Proj = '%2' AND Spec = '%3' AND Groupp = '%4' AND Articul = '%5'";
    db_input = str_t.arg(CurrentUser)
                    .arg(ui_Main->SelectProjectcomboBox->currentText())
                    .arg(ui_Main->SpetificationstableView->model()->data(ui_Main->SpetificationstableView->currentIndex()).toString())
                    .arg(ui_Main->GroupstableView->model()->data(ui_Main->GroupstableView->currentIndex()).toString())
                    .arg(c_articul);
    if(!query.exec(db_input))
    {
        qDebug() << "Unable to get manufacturer from database " << query.lastError() << " : " << query.lastQuery();
    }
    else
    {
        ui_EDS.fmw_eanm = query.value(0).toString();
    }

    ui_EDS.show();
}

bool MainWindow::checUnicArticulName2()
{
    bool ArticulNameCheckSucces = true;
    QString c_proj = ui_Main->SelectProjectcomboBox->currentText();
    QString c_spec = ui_Main->SpetificationstableView->model()->data(ui_Main->SpetificationstableView->currentIndex()).toString();
    QString c_groupp = ui_Main->GroupstableView->model()->data(ui_Main->GroupstableView->currentIndex()).toString();
    QSqlQuery query;

    QModelIndexList SelectedRowsIndexesList = ui_Main->DetailstableView->selectionModel()->selectedRows();
    QString articul = SelectedRowsIndexesList[0].data().toString();
    qDebug() << articul;

    QString getted_articul = ui_EDS.ESDgetArticul();

    QString str_t = "SELECT DISTINCT Articul FROM Details WHERE Proj = '%1' AND Spec = '%2' AND Groupp = '%3' AND Articul <> '%4'";
    detail_db_input = str_t.arg(c_proj).arg(c_spec).arg(c_groupp).arg(articul);

    if(!query.exec(detail_db_input))
    {
        qDebug() << "Unable to get articul from database " << query.lastError() << " : " << query.lastQuery();
    }
    else
    {
        while(query.next())
        {
        //userName = query.value(rec.indexOf("name")).toString();
        QString articul_name = query.value(0).toString();
        cout << "getted_articul: " << getted_articul.toStdString() << " articul_name: " << articul_name.toStdString() << endl;
        if(getted_articul == articul_name){
            qDebug() << "edited articul name had been addad in database yet";
            ArticulNameCheckSucces = false;
        }
        }
    }
    return (ArticulNameCheckSucces);
}

void MainWindow::EDS()
{
    if(checUnicArticulName2())
    {
        QModelIndexList SelectedRowsIndexesList = ui_Main->DetailstableView->selectionModel()->selectedRows();
        QString prev_articul = SelectedRowsIndexesList[0].data().toString();
        qDebug() << prev_articul;

        QString c_articul = ui_EDS.ESDgetArticul();
        QString c_provider = ui_EDS.ESDgetProvider();
        QString c_name = ui_EDS.ESDgetName();
        QString c_price = ui_EDS.ESDgetPrice();
        QString c_count = ui_EDS.ESDgetCount();
        QString c_manufacturer = ui_EDS.ESDgetManufacturer();
        QString c_owner = CurrentUser;
        QString c_proj = ui_Main->SelectProjectcomboBox->currentText();
        QString c_spec = ui_Main->SpetificationstableView->model()->data(ui_Main->SpetificationstableView->currentIndex()).toString();
        QString c_groupp = ui_Main->GroupstableView->model()->data(ui_Main->GroupstableView->currentIndex()).toString();

        qDebug() << c_articul;

        QSqlQuery query;

        QString str_t = "UPDATE Details SET Articul = '%1', Provider = '%2', Name = '%3', Price = '%4', Kolvo = '%5', Manufacturer = '%6' WHERE Owner = '%7' AND Proj = '%8' AND Spec = '%9' AND Groupp = '%10' AND Articul = '%11'";

        edit_db_input = str_t.arg(c_articul).arg(c_provider).arg(c_name).arg(c_price).arg(c_count).arg(c_manufacturer).arg(c_owner).arg(c_proj).arg(c_spec).arg(c_groupp).arg(prev_articul);

        if(!query.exec(edit_db_input))
        {
            qDebug() << "Unable to edit selected detail in database " << query.lastError() << " : " << query.lastQuery();
        }
        else{
        ui_EDS.hide();
        //displayProject();
        //displaySpetifications();
        //displayGroups();
        displayDetails();
        }
    }

    else{
        QMessageBox msgBox;
        msgBox.setWindowTitle("Error");
        msgBox.setText("Edited Detail (Articul) had been added in database yet");
        msgBox.exec();
    }
}

void MainWindow::on_DetailstableView_clicked(const QModelIndex &index)
{
    //ui_Main->DetailstableView->model()->data(ui_Main->DetailstableView->currentIndex()).toString()
    //qDebug() << index;
    //qDebug() << "       ";
    QModelIndexList SelectedRowsIndexesList = ui_Main->DetailstableView->selectionModel()->selectedRows();
    QString c_articul = SelectedRowsIndexesList[0].data().toString();
    qDebug() << c_articul;
    /*for (int i = 0; i < SelectedRowsIndexesList.size(); i++){
            qDebug() << SelectedRowsIndexesList[i].data().toString() << "            " << SelectedRowsIndexesList.size();
    }
    qDebug() << "       ";
    for(int i = 0; i < SelectedRowsIndexesList.size(); i++)
        qDebug() << SelectedRowsIndexesList.at(i).data().toString();
    qDebug() << "       ";*/
    //QString str_t;
}

void MainWindow::on_DSDpushButton_clicked()
{
    ui_DSD.show();
}

void MainWindow::DSD()
{
    QSqlQuery query;
    //QString sname = ui_Main->SpetificationstableView->currentIndex();//??????????????????????????????????????????????????????
    QString gname = ui_Main->GroupstableView->model()->data(ui_Main->GroupstableView->currentIndex()).toString();
    QString sname = ui_Main->SpetificationstableView->model()->data(ui_Main->SpetificationstableView->currentIndex()).toString();
    QString pname = ui_Main->SelectProjectcomboBox->currentText();

    QModelIndexList SelectedRowsIndexesList = ui_Main->DetailstableView->selectionModel()->selectedRows();
    QString aname = SelectedRowsIndexesList[0].data().toString();
    qDebug() << aname;


    QString str_t = "DELETE FROM Details WHERE Groupp = '%1' AND Spec = '%2' AND Proj='%3' AND Owner='%4' AND Articul='%5'";
    detail_db_input = str_t.arg(gname).arg(sname).arg(pname).arg(CurrentUser).arg(aname);

    if(!query.exec(detail_db_input))
    {
        qDebug() << "Unable to delete selected articul"  << query.lastError() << " : " << query.lastQuery();
    }
    else
    {
        ui_DSD.hide();
        //displayGroups();
        //displaySpetifications();
        //displayProject();
        displayDetails();
    }
}

void MainWindow::noDSD()
{
    ui_DSD.hide();
}

void MainWindow::on_PSSpushButton_clicked()
{
    ui_PSS.show();
}

void MainWindow::PSS()
{
    QTextStream out(stdout);

      // Создаем объект класса QFile и связываем его с указанным именем файла
      QString filename = ui_PSS.PSSgetFile();
      QFile file(filename);

      if (file.open(QIODevice::WriteOnly)){

          QTextStream out(&file); // поток записываемых данных направляем в файл

          // Для записи данных в файл используем оператор <<
          //out << "Xubuntu" << endl;
          //out << "Arch" << endl;
          //out << "Debian" << endl;
          //out << "Redhat" << endl;
          //out << "Slackware" << endl;

          int TotalSP = 0;

          out << ui_Main->SpetificationstableView->model()->data(ui_Main->SpetificationstableView->currentIndex()).toString() << " spetification printing" << endl;
          out << "Spetification owner: " << CurrentUser << endl;
          out << "    " << endl;

          QString gstr_t = "SELECT DISTINCT Groupp FROM Details WHERE Owner = '%1' AND Proj = '%2' AND Spec = '%3'";
          qDebug() << ui_Main->SpetificationstableView->model()->data(ui_Main->SpetificationstableView->currentIndex()).toString();
          QString gdb_input = gstr_t.arg(CurrentUser).arg(ui_Main->SelectProjectcomboBox->currentText()).arg(ui_Main->SpetificationstableView->model()->data(ui_Main->SpetificationstableView->currentIndex()).toString());

          QSqlQuery gquery;
          if(!gquery.exec(gdb_input))
          {
              qDebug() << "Unable to get groups from database " << gquery.lastError() << " : " << gquery.lastQuery();
          }
          else
          {
              //int TotalGP = 0;
              while(gquery.next())//Пробегаемся по всем группам
              {
              //userName = query.value(rec.indexOf("name")).toString();
              int TotalGP = 0;
              QString groupp_name = gquery.value(0).toString();
              out << "    " << groupp_name << " group printing" << endl;

              QString dstr_t = "SELECT DISTINCT Articul, Provider, Name, Price, Kolvo, Manufacturer FROM Details WHERE Owner = '%1' AND Proj = '%2' AND Spec = '%3' AND Groupp = '%4'";
              QString ddb_input = dstr_t.arg(CurrentUser)
                                        .arg(ui_Main->SelectProjectcomboBox->currentText())
                                        .arg(ui_Main->SpetificationstableView->model()->data(ui_Main->SpetificationstableView->currentIndex()).toString())
                                        .arg(groupp_name);

              QSqlQuery dquery;
              if(!dquery.exec(ddb_input))
              {
                  qDebug() << "Unable to get groups from database " << dquery.lastError() << " : " << dquery.lastQuery();
              }
              else
              {
                  while(dquery.next())
                  {
                      //user_counter = query.value(rec.indexOf("number")).toInt();
                      //username = query.value(rec.indexOf("name")).toString();
                      QString articul = dquery.value(0).toString();
                      QString provider = dquery.value(1).toString();
                      QString name = dquery.value(2).toString();
                      int price = dquery.value(3).toInt();
                      int count = dquery.value(4).toInt();
                      QString manufacturer = dquery.value(5).toString();
                      TotalGP = TotalGP + price*count;
                      out << "        " << "Articul: " << articul << " Provider: " << provider << " Name: " << name << " Price: " << price << " Count: " << count << " Manufacturer: " << manufacturer << endl;

                  }
              }

              //cout << "getted_articul: " << getted_articul.toStdString() << " articul_name: " << articul_name.toStdString() << endl;
              //if(getted_articul == articul_name){
              //    qDebug() << "edited articul name had been addad in database yet";
              //    ArticulNameCheckSucces = false;
              //}
              out << "    " << "Group: " << groupp_name << " total price = " << TotalGP << endl;
              TotalSP = TotalSP+TotalGP;
              out << "    " << endl;
              }
          }
          out << "Spetification: " << ui_Main->SpetificationstableView->model()->data(ui_Main->SpetificationstableView->currentIndex()).toString() << " total price = " << TotalSP << endl;
          ui_PSS.hide();
          file.close();
      }

      else{
          QMessageBox msgBox;
          msgBox.setWindowTitle("Error");
          msgBox.setText("Could not open file");
          msgBox.exec();
      }
}

void MainWindow::on_PrintselectedProjectpushButton_clicked()
{
    ui_PSP.show();
}

void MainWindow::PSP()
{
    QTextStream out(stdout);

      // Создаем объект класса QFile и связываем его с указанным именем файла
      QString filename = ui_PSP.PSPgetFile();
      QFile file(filename);

      // Открываем файл в режиме "Только для записи"
      if (file.open(QIODevice::WriteOnly)){
        QTextStream out(&file); // поток записываемых данных направляем в файл

        int TotalPP = 0;

        out << ui_Main->SelectProjectcomboBox->currentText() << " project printing" << endl;
        out << "Project owner: " << CurrentUser << endl;
        out << "    " << endl;

        QString sstr_t = "SELECT DISTINCT Spec FROM Details WHERE Owner = '%1' AND Proj = '%2'";
        QString sdb_input = sstr_t.arg(CurrentUser).arg(ui_Main->SelectProjectcomboBox->currentText());

        QSqlQuery squery;
        if(!squery.exec(sdb_input))
        {
            qDebug() << "Unable to get groups from database " << squery.lastError() << " : " << squery.lastQuery();
        }
        else
        {
            while(squery.next())//Пробегаемся по всем спецификациям
            {
                int TotalSP = 0;
                QString spec_name = squery.value(0).toString();

                out << "    " << spec_name << " spetification printing" << endl;
                out << "    " << "Spetification owner: " << CurrentUser << endl;
                out << "    " << "    " << endl;
                //-----

                QString gstr_t = "SELECT DISTINCT Groupp FROM Details WHERE Owner = '%1' AND Proj = '%2' AND Spec = '%3'";
                qDebug() << ui_Main->SpetificationstableView->model()->data(ui_Main->SpetificationstableView->currentIndex()).toString();
                QString gdb_input = gstr_t.arg(CurrentUser).arg(ui_Main->SelectProjectcomboBox->currentText()).arg(ui_Main->SpetificationstableView->model()->data(ui_Main->SpetificationstableView->currentIndex()).toString());

                QSqlQuery gquery;
                if(!gquery.exec(gdb_input))
                {
                    qDebug() << "Unable to get groups from database " << gquery.lastError() << " : " << gquery.lastQuery();
                }
                else
                {
                    //int TotalGP = 0;
                    while(gquery.next())//Пробегаемся по всем группам
                    {
                    //userName = query.value(rec.indexOf("name")).toString();
                    int TotalGP = 0;
                    QString groupp_name = gquery.value(0).toString();
                    out << "        " << groupp_name << " group printing" << endl;

                    QString dstr_t = "SELECT DISTINCT Articul, Provider, Name, Price, Kolvo, Manufacturer FROM Details WHERE Owner = '%1' AND Proj = '%2' AND Spec = '%3' AND Groupp = '%4'";
                    QString ddb_input = dstr_t.arg(CurrentUser)
                                              .arg(ui_Main->SelectProjectcomboBox->currentText())
                                              .arg(ui_Main->SpetificationstableView->model()->data(ui_Main->SpetificationstableView->currentIndex()).toString())
                                              .arg(groupp_name);

                    QSqlQuery dquery;
                    if(!dquery.exec(ddb_input))
                    {
                        qDebug() << "Unable to get groups from database " << dquery.lastError() << " : " << dquery.lastQuery();
                    }
                    else
                    {
                        while(dquery.next())
                        {
                            //user_counter = query.value(rec.indexOf("number")).toInt();
                            //username = query.value(rec.indexOf("name")).toString();
                            QString articul = dquery.value(0).toString();
                            QString provider = dquery.value(1).toString();
                            QString name = dquery.value(2).toString();
                            int price = dquery.value(3).toInt();
                            int count = dquery.value(4).toInt();
                            QString manufacturer = dquery.value(5).toString();
                            TotalGP = TotalGP + price*count;
                            out << "            " << "Articul: " << articul << " Provider: " << provider << " Name: " << name << " Price: " << price << " Count: " << count << " Manufacturer: " << manufacturer << endl;

                        }
                    }

                    //cout << "getted_articul: " << getted_articul.toStdString() << " articul_name: " << articul_name.toStdString() << endl;
                    //if(getted_articul == articul_name){
                    //    qDebug() << "edited articul name had been addad in database yet";
                    //    ArticulNameCheckSucces = false;
                    //}
                    out << "        " << "Group: " << groupp_name << " total price = " << TotalGP << endl;
                    TotalSP = TotalSP+TotalGP;
                    out << "        " << endl;
                    }
                }
                out << "    " << "Spetification: " << spec_name << " total price = " << TotalSP << endl;
                TotalPP = TotalPP+TotalSP;
                out << "    " << endl;

            }//__________________________________________________
            out << "Project: " << ui_Main->SelectProjectcomboBox->currentText() << " total price = " << TotalPP << endl;
            out << "    " << endl;
        }
        // Закрываем файл
        file.close();
        ui_PSP.hide();
      }
      else{

          QMessageBox msgBox;
          msgBox.setWindowTitle("Error");
          msgBox.setText("Could not open file");
          msgBox.exec();
      }
}
