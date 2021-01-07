/********************************************************************************
** Form generated from reading UI file 'addnewproject.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDNEWPROJECT_H
#define UI_ADDNEWPROJECT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AddNewProject
{
public:
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QLabel *ANPlabel;
    QLabel *Nlabel;
    QPushButton *ANPpushButton;
    QLineEdit *NamelineEdit;

    void setupUi(QDialog *AddNewProject)
    {
        if (AddNewProject->objectName().isEmpty())
            AddNewProject->setObjectName(QString::fromUtf8("AddNewProject"));
        AddNewProject->resize(400, 300);
        gridLayoutWidget = new QWidget(AddNewProject);
        gridLayoutWidget->setObjectName(QString::fromUtf8("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(10, 40, 381, 211));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        ANPlabel = new QLabel(gridLayoutWidget);
        ANPlabel->setObjectName(QString::fromUtf8("ANPlabel"));
        QFont font;
        font.setPointSize(15);
        ANPlabel->setFont(font);
        ANPlabel->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(ANPlabel, 0, 1, 1, 1);

        Nlabel = new QLabel(gridLayoutWidget);
        Nlabel->setObjectName(QString::fromUtf8("Nlabel"));

        gridLayout->addWidget(Nlabel, 1, 0, 1, 1);

        ANPpushButton = new QPushButton(gridLayoutWidget);
        ANPpushButton->setObjectName(QString::fromUtf8("ANPpushButton"));

        gridLayout->addWidget(ANPpushButton, 2, 1, 1, 1);

        NamelineEdit = new QLineEdit(gridLayoutWidget);
        NamelineEdit->setObjectName(QString::fromUtf8("NamelineEdit"));

        gridLayout->addWidget(NamelineEdit, 1, 1, 1, 1);


        retranslateUi(AddNewProject);

        QMetaObject::connectSlotsByName(AddNewProject);
    } // setupUi

    void retranslateUi(QDialog *AddNewProject)
    {
        AddNewProject->setWindowTitle(QApplication::translate("AddNewProject", "Dialog", nullptr));
        ANPlabel->setText(QApplication::translate("AddNewProject", "Add New Project", nullptr));
        Nlabel->setText(QApplication::translate("AddNewProject", "Name: ", nullptr));
        ANPpushButton->setText(QApplication::translate("AddNewProject", "Add New Project", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AddNewProject: public Ui_AddNewProject {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDNEWPROJECT_H
