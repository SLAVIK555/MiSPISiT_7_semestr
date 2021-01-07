/********************************************************************************
** Form generated from reading UI file 'addnewspetification.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDNEWSPETIFICATION_H
#define UI_ADDNEWSPETIFICATION_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AddNewSpetification
{
public:
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QLabel *ANSlabel;
    QLabel *Nlabel;
    QLineEdit *ANSamelineEdit;
    QPushButton *ANSpushButton;

    void setupUi(QDialog *AddNewSpetification)
    {
        if (AddNewSpetification->objectName().isEmpty())
            AddNewSpetification->setObjectName(QString::fromUtf8("AddNewSpetification"));
        AddNewSpetification->resize(400, 300);
        gridLayoutWidget = new QWidget(AddNewSpetification);
        gridLayoutWidget->setObjectName(QString::fromUtf8("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(10, 30, 381, 211));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        ANSlabel = new QLabel(gridLayoutWidget);
        ANSlabel->setObjectName(QString::fromUtf8("ANSlabel"));
        QFont font;
        font.setPointSize(15);
        ANSlabel->setFont(font);
        ANSlabel->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(ANSlabel, 0, 1, 1, 1);

        Nlabel = new QLabel(gridLayoutWidget);
        Nlabel->setObjectName(QString::fromUtf8("Nlabel"));

        gridLayout->addWidget(Nlabel, 1, 0, 1, 1);

        ANSamelineEdit = new QLineEdit(gridLayoutWidget);
        ANSamelineEdit->setObjectName(QString::fromUtf8("ANSamelineEdit"));

        gridLayout->addWidget(ANSamelineEdit, 1, 1, 1, 1);

        ANSpushButton = new QPushButton(gridLayoutWidget);
        ANSpushButton->setObjectName(QString::fromUtf8("ANSpushButton"));

        gridLayout->addWidget(ANSpushButton, 2, 1, 1, 1);


        retranslateUi(AddNewSpetification);

        QMetaObject::connectSlotsByName(AddNewSpetification);
    } // setupUi

    void retranslateUi(QDialog *AddNewSpetification)
    {
        AddNewSpetification->setWindowTitle(QApplication::translate("AddNewSpetification", "Dialog", nullptr));
        ANSlabel->setText(QApplication::translate("AddNewSpetification", "Add New Spetification", nullptr));
        Nlabel->setText(QApplication::translate("AddNewSpetification", "Name: ", nullptr));
        ANSpushButton->setText(QApplication::translate("AddNewSpetification", "Add New Spetification", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AddNewSpetification: public Ui_AddNewSpetification {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDNEWSPETIFICATION_H
