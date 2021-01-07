/********************************************************************************
** Form generated from reading UI file 'delselectedgroupp.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DELSELECTEDGROUPP_H
#define UI_DELSELECTEDGROUPP_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_DelSelectedGroupp
{
public:
    QPushButton *DSGYespushButton;
    QPushButton *DSGNopushButton;
    QLabel *DSGAsklabel;

    void setupUi(QDialog *DelSelectedGroupp)
    {
        if (DelSelectedGroupp->objectName().isEmpty())
            DelSelectedGroupp->setObjectName(QString::fromUtf8("DelSelectedGroupp"));
        DelSelectedGroupp->resize(680, 221);
        DSGYespushButton = new QPushButton(DelSelectedGroupp);
        DSGYespushButton->setObjectName(QString::fromUtf8("DSGYespushButton"));
        DSGYespushButton->setGeometry(QRect(340, 150, 331, 24));
        DSGNopushButton = new QPushButton(DelSelectedGroupp);
        DSGNopushButton->setObjectName(QString::fromUtf8("DSGNopushButton"));
        DSGNopushButton->setGeometry(QRect(12, 150, 321, 24));
        DSGAsklabel = new QLabel(DelSelectedGroupp);
        DSGAsklabel->setObjectName(QString::fromUtf8("DSGAsklabel"));
        DSGAsklabel->setGeometry(QRect(10, 50, 659, 71));
        QFont font;
        font.setPointSize(15);
        DSGAsklabel->setFont(font);
        DSGAsklabel->setAlignment(Qt::AlignCenter);

        retranslateUi(DelSelectedGroupp);

        QMetaObject::connectSlotsByName(DelSelectedGroupp);
    } // setupUi

    void retranslateUi(QDialog *DelSelectedGroupp)
    {
        DelSelectedGroupp->setWindowTitle(QApplication::translate("DelSelectedGroupp", "Dialog", nullptr));
        DSGYespushButton->setText(QApplication::translate("DelSelectedGroupp", "Yes", nullptr));
        DSGNopushButton->setText(QApplication::translate("DelSelectedGroupp", "No", nullptr));
        DSGAsklabel->setText(QApplication::translate("DelSelectedGroupp", "Are you sure you want to delete the selected Group?", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DelSelectedGroupp: public Ui_DelSelectedGroupp {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DELSELECTEDGROUPP_H
