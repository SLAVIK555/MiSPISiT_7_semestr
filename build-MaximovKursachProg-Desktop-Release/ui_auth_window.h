/********************************************************************************
** Form generated from reading UI file 'auth_window.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_AUTH_WINDOW_H
#define UI_AUTH_WINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_auth_window
{
public:
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QPushButton *RegisterPushButton;
    QPushButton *LoginPushButton;
    QLabel *label_2;
    QLabel *label_3;
    QLineEdit *NameLineEdit;
    QLabel *label;
    QLineEdit *PasswordLineEdit;

    void setupUi(QDialog *auth_window)
    {
        if (auth_window->objectName().isEmpty())
            auth_window->setObjectName(QString::fromUtf8("auth_window"));
        auth_window->resize(415, 335);
        gridLayoutWidget = new QWidget(auth_window);
        gridLayoutWidget->setObjectName(QString::fromUtf8("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(30, 10, 351, 251));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        RegisterPushButton = new QPushButton(gridLayoutWidget);
        RegisterPushButton->setObjectName(QString::fromUtf8("RegisterPushButton"));

        gridLayout->addWidget(RegisterPushButton, 5, 1, 1, 1);

        LoginPushButton = new QPushButton(gridLayoutWidget);
        LoginPushButton->setObjectName(QString::fromUtf8("LoginPushButton"));

        gridLayout->addWidget(LoginPushButton, 4, 1, 1, 1);

        label_2 = new QLabel(gridLayoutWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label_2, 2, 0, 1, 1);

        label_3 = new QLabel(gridLayoutWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label_3, 3, 0, 1, 1);

        NameLineEdit = new QLineEdit(gridLayoutWidget);
        NameLineEdit->setObjectName(QString::fromUtf8("NameLineEdit"));

        gridLayout->addWidget(NameLineEdit, 2, 1, 1, 1);

        label = new QLabel(gridLayoutWidget);
        label->setObjectName(QString::fromUtf8("label"));
        QFont font;
        font.setPointSize(14);
        label->setFont(font);
        label->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label, 1, 1, 1, 1);

        PasswordLineEdit = new QLineEdit(gridLayoutWidget);
        PasswordLineEdit->setObjectName(QString::fromUtf8("PasswordLineEdit"));

        gridLayout->addWidget(PasswordLineEdit, 3, 1, 1, 1);


        retranslateUi(auth_window);

        QMetaObject::connectSlotsByName(auth_window);
    } // setupUi

    void retranslateUi(QDialog *auth_window)
    {
        auth_window->setWindowTitle(QApplication::translate("auth_window", "Dialog", nullptr));
        RegisterPushButton->setText(QApplication::translate("auth_window", "Register", nullptr));
        LoginPushButton->setText(QApplication::translate("auth_window", "Log In", nullptr));
        label_2->setText(QApplication::translate("auth_window", "Name:", nullptr));
        label_3->setText(QApplication::translate("auth_window", "Password:", nullptr));
        label->setText(QApplication::translate("auth_window", "Autorisation", nullptr));
    } // retranslateUi

};

namespace Ui {
    class auth_window: public Ui_auth_window {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_AUTH_WINDOW_H
