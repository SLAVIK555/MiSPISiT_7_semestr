/********************************************************************************
** Form generated from reading UI file 'delselectedproject.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DELSELECTEDPROJECT_H
#define UI_DELSELECTEDPROJECT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_DelSelectedProject
{
public:
    QPushButton *NopushButton;
    QPushButton *YespushButton;
    QLabel *Asklabel;

    void setupUi(QDialog *DelSelectedProject)
    {
        if (DelSelectedProject->objectName().isEmpty())
            DelSelectedProject->setObjectName(QString::fromUtf8("DelSelectedProject"));
        DelSelectedProject->resize(685, 181);
        NopushButton = new QPushButton(DelSelectedProject);
        NopushButton->setObjectName(QString::fromUtf8("NopushButton"));
        NopushButton->setGeometry(QRect(12, 130, 321, 24));
        YespushButton = new QPushButton(DelSelectedProject);
        YespushButton->setObjectName(QString::fromUtf8("YespushButton"));
        YespushButton->setGeometry(QRect(340, 130, 331, 24));
        Asklabel = new QLabel(DelSelectedProject);
        Asklabel->setObjectName(QString::fromUtf8("Asklabel"));
        Asklabel->setGeometry(QRect(10, 30, 659, 71));
        QFont font;
        font.setPointSize(15);
        Asklabel->setFont(font);
        Asklabel->setAlignment(Qt::AlignCenter);

        retranslateUi(DelSelectedProject);

        QMetaObject::connectSlotsByName(DelSelectedProject);
    } // setupUi

    void retranslateUi(QDialog *DelSelectedProject)
    {
        DelSelectedProject->setWindowTitle(QApplication::translate("DelSelectedProject", "Dialog", nullptr));
        NopushButton->setText(QApplication::translate("DelSelectedProject", "No", nullptr));
        YespushButton->setText(QApplication::translate("DelSelectedProject", "Yes", nullptr));
        Asklabel->setText(QApplication::translate("DelSelectedProject", "Are you sure you want to delete the selected project?", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DelSelectedProject: public Ui_DelSelectedProject {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DELSELECTEDPROJECT_H
