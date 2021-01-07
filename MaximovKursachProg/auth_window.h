#ifndef AUTH_WINDOW_H
#define AUTH_WINDOW_H

#include <QDialog>
//#include "databaseclass.h"

namespace Ui {
class auth_window;
}

class auth_window : public QDialog
{
    Q_OBJECT

public:
    explicit auth_window(QWidget *parent = nullptr);
    ~auth_window();
    QString getLogin();
    QString getPass();
    QString getDBPath();

signals:
    void login_button_clicked();
    void register_button_clicked();

private slots:
    void on_NameLineEdit_textEdited(const QString &arg1);
    void on_PasswordLineEdit_textEdited(const QString &arg1);
    void on_LoginPushButton_clicked();
    void on_RegisterPushButton_clicked();
    //void on_DataBasePathLineEdit_textEdited(const QString &arg1);

private:
    Ui::auth_window *ui;
    QString m_username;
    QString m_userpass;
    //QString CurrentDataBasePath;
};

#endif // AUTH_WINDOW_H
