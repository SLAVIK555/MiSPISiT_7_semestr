/********************************************************************************
** Form generated from reading UI file 'addnewgroupp.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDNEWGROUPP_H
#define UI_ADDNEWGROUPP_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AddNewGroupp
{
public:
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QLabel *ANGlabel;
    QLabel *ANGlabel_2;
    QLineEdit *ANGamelineEdit;
    QPushButton *ANGpushButton;

    void setupUi(QDialog *AddNewGroupp)
    {
        if (AddNewGroupp->objectName().isEmpty())
            AddNewGroupp->setObjectName(QString::fromUtf8("AddNewGroupp"));
        AddNewGroupp->resize(400, 300);
        gridLayoutWidget = new QWidget(AddNewGroupp);
        gridLayoutWidget->setObjectName(QString::fromUtf8("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(10, 30, 381, 211));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        ANGlabel = new QLabel(gridLayoutWidget);
        ANGlabel->setObjectName(QString::fromUtf8("ANGlabel"));
        QFont font;
        font.setPointSize(15);
        ANGlabel->setFont(font);
        ANGlabel->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(ANGlabel, 0, 1, 1, 1);

        ANGlabel_2 = new QLabel(gridLayoutWidget);
        ANGlabel_2->setObjectName(QString::fromUtf8("ANGlabel_2"));

        gridLayout->addWidget(ANGlabel_2, 1, 0, 1, 1);

        ANGamelineEdit = new QLineEdit(gridLayoutWidget);
        ANGamelineEdit->setObjectName(QString::fromUtf8("ANGamelineEdit"));

        gridLayout->addWidget(ANGamelineEdit, 1, 1, 1, 1);

        ANGpushButton = new QPushButton(gridLayoutWidget);
        ANGpushButton->setObjectName(QString::fromUtf8("ANGpushButton"));

        gridLayout->addWidget(ANGpushButton, 2, 1, 1, 1);


        retranslateUi(AddNewGroupp);

        QMetaObject::connectSlotsByName(AddNewGroupp);
    } // setupUi

    void retranslateUi(QDialog *AddNewGroupp)
    {
        AddNewGroupp->setWindowTitle(QApplication::translate("AddNewGroupp", "Dialog", nullptr));
        ANGlabel->setText(QApplication::translate("AddNewGroupp", "Add New Group", nullptr));
        ANGlabel_2->setText(QApplication::translate("AddNewGroupp", "Name: ", nullptr));
        ANGpushButton->setText(QApplication::translate("AddNewGroupp", "Add New Group", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AddNewGroupp: public Ui_AddNewGroupp {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDNEWGROUPP_H
