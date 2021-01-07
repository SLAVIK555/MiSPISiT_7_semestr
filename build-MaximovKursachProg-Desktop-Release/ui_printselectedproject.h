/********************************************************************************
** Form generated from reading UI file 'printselectedproject.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PRINTSELECTEDPROJECT_H
#define UI_PRINTSELECTEDPROJECT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_PrintSelectedProject
{
public:
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QLabel *label_2;
    QLabel *label;
    QLineEdit *PSPlineEdit;
    QPushButton *PSPpushButton;

    void setupUi(QDialog *PrintSelectedProject)
    {
        if (PrintSelectedProject->objectName().isEmpty())
            PrintSelectedProject->setObjectName(QString::fromUtf8("PrintSelectedProject"));
        PrintSelectedProject->resize(381, 280);
        verticalLayoutWidget = new QWidget(PrintSelectedProject);
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

        PSPlineEdit = new QLineEdit(verticalLayoutWidget);
        PSPlineEdit->setObjectName(QString::fromUtf8("PSPlineEdit"));

        verticalLayout->addWidget(PSPlineEdit);

        PSPpushButton = new QPushButton(verticalLayoutWidget);
        PSPpushButton->setObjectName(QString::fromUtf8("PSPpushButton"));

        verticalLayout->addWidget(PSPpushButton);


        retranslateUi(PrintSelectedProject);

        QMetaObject::connectSlotsByName(PrintSelectedProject);
    } // setupUi

    void retranslateUi(QDialog *PrintSelectedProject)
    {
        PrintSelectedProject->setWindowTitle(QApplication::translate("PrintSelectedProject", "Dialog", nullptr));
        label_2->setText(QApplication::translate("PrintSelectedProject", "Printing Project", nullptr));
        label->setText(QApplication::translate("PrintSelectedProject", "Enter full path to .txt file with filename", nullptr));
        PSPpushButton->setText(QApplication::translate("PrintSelectedProject", "Print", nullptr));
    } // retranslateUi

};

namespace Ui {
    class PrintSelectedProject: public Ui_PrintSelectedProject {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PRINTSELECTEDPROJECT_H
