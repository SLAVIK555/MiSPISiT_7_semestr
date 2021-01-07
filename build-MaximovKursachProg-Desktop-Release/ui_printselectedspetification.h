/********************************************************************************
** Form generated from reading UI file 'printselectedspetification.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PRINTSELECTEDSPETIFICATION_H
#define UI_PRINTSELECTEDSPETIFICATION_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_PrintSelectedSpetification
{
public:
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QLabel *label_2;
    QLabel *label;
    QLineEdit *PSSlineEdit;
    QPushButton *PSSpushButton;

    void setupUi(QDialog *PrintSelectedSpetification)
    {
        if (PrintSelectedSpetification->objectName().isEmpty())
            PrintSelectedSpetification->setObjectName(QString::fromUtf8("PrintSelectedSpetification"));
        PrintSelectedSpetification->resize(381, 300);
        verticalLayoutWidget = new QWidget(PrintSelectedSpetification);
        verticalLayoutWidget->setObjectName(QString::fromUtf8("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(10, 10, 361, 251));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(verticalLayoutWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        QFont font;
        font.setPointSize(15);
        label_2->setFont(font);
        label_2->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label_2);

        label = new QLabel(verticalLayoutWidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setFont(font);
        label->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label);

        PSSlineEdit = new QLineEdit(verticalLayoutWidget);
        PSSlineEdit->setObjectName(QString::fromUtf8("PSSlineEdit"));

        verticalLayout->addWidget(PSSlineEdit);

        PSSpushButton = new QPushButton(verticalLayoutWidget);
        PSSpushButton->setObjectName(QString::fromUtf8("PSSpushButton"));

        verticalLayout->addWidget(PSSpushButton);


        retranslateUi(PrintSelectedSpetification);

        QMetaObject::connectSlotsByName(PrintSelectedSpetification);
    } // setupUi

    void retranslateUi(QDialog *PrintSelectedSpetification)
    {
        PrintSelectedSpetification->setWindowTitle(QApplication::translate("PrintSelectedSpetification", "Dialog", nullptr));
        label_2->setText(QApplication::translate("PrintSelectedSpetification", "Printing Spetification", nullptr));
        label->setText(QApplication::translate("PrintSelectedSpetification", "Enter full path to .txt file with filename", nullptr));
        PSSpushButton->setText(QApplication::translate("PrintSelectedSpetification", "Print", nullptr));
    } // retranslateUi

};

namespace Ui {
    class PrintSelectedSpetification: public Ui_PrintSelectedSpetification {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PRINTSELECTEDSPETIFICATION_H
