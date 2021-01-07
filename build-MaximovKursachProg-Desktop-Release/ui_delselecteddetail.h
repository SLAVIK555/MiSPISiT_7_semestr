/********************************************************************************
** Form generated from reading UI file 'delselecteddetail.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DELSELECTEDDETAIL_H
#define UI_DELSELECTEDDETAIL_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_DelSelectedDetail
{
public:
    QLabel *DSDAsklabel;
    QPushButton *DSDYespushButton;
    QPushButton *DSDNopushButton;

    void setupUi(QDialog *DelSelectedDetail)
    {
        if (DelSelectedDetail->objectName().isEmpty())
            DelSelectedDetail->setObjectName(QString::fromUtf8("DelSelectedDetail"));
        DelSelectedDetail->resize(682, 239);
        DSDAsklabel = new QLabel(DelSelectedDetail);
        DSDAsklabel->setObjectName(QString::fromUtf8("DSDAsklabel"));
        DSDAsklabel->setGeometry(QRect(8, 60, 659, 71));
        QFont font;
        font.setPointSize(15);
        DSDAsklabel->setFont(font);
        DSDAsklabel->setAlignment(Qt::AlignCenter);
        DSDYespushButton = new QPushButton(DelSelectedDetail);
        DSDYespushButton->setObjectName(QString::fromUtf8("DSDYespushButton"));
        DSDYespushButton->setGeometry(QRect(338, 160, 331, 24));
        DSDNopushButton = new QPushButton(DelSelectedDetail);
        DSDNopushButton->setObjectName(QString::fromUtf8("DSDNopushButton"));
        DSDNopushButton->setGeometry(QRect(10, 160, 321, 24));

        retranslateUi(DelSelectedDetail);

        QMetaObject::connectSlotsByName(DelSelectedDetail);
    } // setupUi

    void retranslateUi(QDialog *DelSelectedDetail)
    {
        DelSelectedDetail->setWindowTitle(QApplication::translate("DelSelectedDetail", "Dialog", nullptr));
        DSDAsklabel->setText(QApplication::translate("DelSelectedDetail", "Are you sure you want to delete the selected Group?", nullptr));
        DSDYespushButton->setText(QApplication::translate("DelSelectedDetail", "Yes", nullptr));
        DSDNopushButton->setText(QApplication::translate("DelSelectedDetail", "No", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DelSelectedDetail: public Ui_DelSelectedDetail {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DELSELECTEDDETAIL_H
