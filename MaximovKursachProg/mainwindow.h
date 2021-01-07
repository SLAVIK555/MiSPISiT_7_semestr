#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "QtSql/QSqlDatabase"
#include "QSqlQuery"
#include <QString>
#include <QTextEdit>
#include <QPlainTextEdit>
#include <QtSql>
#include <QMessageBox>

#include "databaseclass.h"
#include "auth_window.h"
#include "reg_window.h"
#include "addnewproject.h"
#include "delselectedproject.h"
#include "addnewspetification.h"
#include "delselectedspetification.h"
#include "addnewgroupp.h"
#include "delselectedgroupp.h"
#include "addnewdetail.h"
#include "editselectesdetail.h"
#include "delselecteddetail.h"
#include "printselectedspetification.h"
#include "printselectedproject.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:

    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    void display(); // прототип пользовательской функции отображения
    bool connectDB(); // прототип метода подключения к БД
    bool chekUnicProjName();
    bool chekUnicSpecName();
    bool checUnicGrouppName();
    bool checUnicArticulName();
    bool checUnicArticulName2();
    void displayProject();
    void displaySpetifications();
    void displayGroups();
    void displayDetails();
    QString proj_db_input;
    QString spec_db_input;
    QString groupp_db_input;
    QString detail_db_input;
    QString edit_db_input;
    //QString anscbc;

    QString CurrentUser;

private:
    Ui::MainWindow *ui_Main;

    auth_window ui_Auth; // экземпляры окна авторизации и окна регистрации
    reg_window ui_Reg; // принадлежат главному окну
    AddNewProject ui_ANP;
    DelSelectedProject ui_DSP;
    AddNewSpetification ui_ANS;
    DelSelectedSpetification ui_DSS;
    AddNewGroupp ui_ANG;
    DelSelectedGroupp ui_DSG;
    AddNewDetail ui_AND;
    EditSelectesDetail ui_EDS;
    DelSelectedDetail ui_DSD;
    PrintSelectedSpetification ui_PSS;
    PrintSelectedProject ui_PSP;

    QString m_username; // строки для обработки
    QString m_userpass; // пользовательского ввода

    QString db_input; // строка для отправки запроса к БД

    QSqlDatabase mw_db; // экземпляр подключения к БД

    int user_counter; // счетчик пользователей
    bool m_loginSuccesfull; // флаг успешной авторизации
    bool only_mine; //флаг просмотра в режиме "только мое" 1-только мое, 0-нет

private slots:
    void authorizeUser(); // пользовательские слоты
    void registerWindowShow();
    void registerUser();
    //void on_pushButton_clicked();
    void on_DisplayProjectspushButton_clicked();
    void on_ViewselectedProjectpushButton_clicked();
    void ANP();
    void on_AddnewProjectpushButton_clicked();
    void on_DelselectedProjectpushButton_clicked();
    void DSP();
    void noDSP();
    void on_OnlyMinecheckBox_stateChanged(int arg1);
    void on_AddnewSpecpushButton_clicked();
    void ANS();
    void on_SelectProjectcomboBox_currentTextChanged(const QString &arg1);
    //void ANSCBC();
    void on_DelselectedSpecpushButton_clicked();
    void DSS();
    void noDSS();
    void on_SpetificationstableView_clicked(const QModelIndex &index);
    void on_ANGpushButton_clicked();
    void on_DSGpushButton_clicked();
    void ANG();
    void DSG();
    void noDSG();
    void on_GroupstableView_clicked(const QModelIndex &index);
    void on_ANDpushButton_clicked();
    void AND();
    void on_ESDpushButton_clicked();
    void on_DetailstableView_clicked(const QModelIndex &index);
    void EDS();
    void DSD();
    void noDSD();
    void on_DSDpushButton_clicked();
    void on_PSSpushButton_clicked();
    void PSS();
    void on_PrintselectedProjectpushButton_clicked();
    void PSP();
};
#endif // MAINWINDOW_H
