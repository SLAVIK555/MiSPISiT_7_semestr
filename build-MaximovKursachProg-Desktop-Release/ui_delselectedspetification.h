/********************************************************************************
** Form generated from reading UI file 'delselectedspetification.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DELSELECTEDSPETIFICATION_H
#define UI_DELSELECTEDSPETIFICATION_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_DelSelectedSpetification
{
public:
    QPushButton *DSSNopushButton;
    QPushButton *DSSYespushButton;
    QLabel *DSSAsklabel;

    void setupUi(QDialog *DelSelectedSpetification)
    {
        if (DelSelectedSpetification->objectName().isEmpty())
            DelSelectedSpetification->setObjectName(QString::fromUtf8("DelSelectedSpetification"));
        DelSelectedSpetification->resize(681, 238);
        DSSNopushButton = new QPushButton(DelSelectedSpetification);
        DSSNopushButton->setObjectName(QString::fromUtf8("DSSNopushButton"));
        DSSNopushButton->setGeometry(QRect(12, 160, 321, 24));
        DSSYespushButton = new QPushButton(DelSelectedSpetification);
        DSSYespushButton->setObjectName(QString::fromUtf8("DSSYespushButton"));
        DSSYespushButton->setGeometry(QRect(340, 160, 331, 24));
        DSSAsklabel = new QLabel(DelSelectedSpetification);
        DSSAsklabel->setObjectName(QString::fromUtf8("DSSAsklabel"));
        DSSAsklabel->setGeometry(QRect(10, 60, 659, 71));
        QFont font;
        font.setPointSize(15);
        DSSAsklabel->setFont(font);
        DSSAsklabel->setAlignment(Qt::AlignCenter);

        retranslateUi(DelSelectedSpetification);

        QMetaObject::connectSlotsByName(DelSelectedSpetification);
    } // setupUi

    void retranslateUi(QDialog *DelSelectedSpetification)
    {
        DelSelectedSpetification->setWindowTitle(QApplication::translate("DelSelectedSpetification", "Dialog", nullptr));
        DSSNopushButton->setText(QApplication::translate("DelSelectedSpetification", "No", nullptr));
        DSSYespushButton->setText(QApplication::translate("DelSelectedSpetification", "Yes", nullptr));
        DSSAsklabel->setText(QApplication::translate("DelSelectedSpetification", "Are you sure you want to delete the selected spetification?", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DelSelectedSpetification: public Ui_DelSelectedSpetification {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DELSELECTEDSPETIFICATION_H
