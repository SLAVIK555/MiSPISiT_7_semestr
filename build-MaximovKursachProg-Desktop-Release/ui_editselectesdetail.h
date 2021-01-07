/********************************************************************************
** Form generated from reading UI file 'editselectesdetail.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EDITSELECTESDETAIL_H
#define UI_EDITSELECTESDETAIL_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_EditSelectesDetail
{
public:
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QComboBox *ESPCcomboBox;
    QLineEdit *EANPVlineEdit;
    QLineEdit *EANNlineEdit;
    QCheckBox *EANPVcheckBox;
    QComboBox *ESPVcomboBox;
    QCheckBox *EANAcheckBox;
    QComboBox *ESAcomboBox;
    QLineEdit *EANPClineEdit;
    QCheckBox *EANPCcheckBox;
    QComboBox *ESMcomboBox;
    QLabel *EANDlabel;
    QCheckBox *EANNcheckBox;
    QComboBox *ESCcomboBox;
    QLineEdit *EANClineEdit;
    QCheckBox *EANCcheckBox;
    QComboBox *ESNcomboBox;
    QLineEdit *EANAlineEdit;
    QLineEdit *EANMlineEdit;
    QCheckBox *EANMcheckBox;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QPushButton *pushButton;

    void setupUi(QDialog *EditSelectesDetail)
    {
        if (EditSelectesDetail->objectName().isEmpty())
            EditSelectesDetail->setObjectName(QString::fromUtf8("EditSelectesDetail"));
        EditSelectesDetail->resize(601, 461);
        gridLayoutWidget = new QWidget(EditSelectesDetail);
        gridLayoutWidget->setObjectName(QString::fromUtf8("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(21, 20, 561, 391));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        ESPCcomboBox = new QComboBox(gridLayoutWidget);
        ESPCcomboBox->setObjectName(QString::fromUtf8("ESPCcomboBox"));

        gridLayout->addWidget(ESPCcomboBox, 11, 1, 1, 1);

        EANPVlineEdit = new QLineEdit(gridLayoutWidget);
        EANPVlineEdit->setObjectName(QString::fromUtf8("EANPVlineEdit"));

        gridLayout->addWidget(EANPVlineEdit, 7, 1, 1, 1);

        EANNlineEdit = new QLineEdit(gridLayoutWidget);
        EANNlineEdit->setObjectName(QString::fromUtf8("EANNlineEdit"));

        gridLayout->addWidget(EANNlineEdit, 10, 1, 1, 1);

        EANPVcheckBox = new QCheckBox(gridLayoutWidget);
        EANPVcheckBox->setObjectName(QString::fromUtf8("EANPVcheckBox"));

        gridLayout->addWidget(EANPVcheckBox, 7, 0, 1, 1);

        ESPVcomboBox = new QComboBox(gridLayoutWidget);
        ESPVcomboBox->setObjectName(QString::fromUtf8("ESPVcomboBox"));

        gridLayout->addWidget(ESPVcomboBox, 5, 1, 1, 1);

        EANAcheckBox = new QCheckBox(gridLayoutWidget);
        EANAcheckBox->setObjectName(QString::fromUtf8("EANAcheckBox"));

        gridLayout->addWidget(EANAcheckBox, 4, 0, 1, 1);

        ESAcomboBox = new QComboBox(gridLayoutWidget);
        ESAcomboBox->setObjectName(QString::fromUtf8("ESAcomboBox"));

        gridLayout->addWidget(ESAcomboBox, 2, 1, 1, 1);

        EANPClineEdit = new QLineEdit(gridLayoutWidget);
        EANPClineEdit->setObjectName(QString::fromUtf8("EANPClineEdit"));

        gridLayout->addWidget(EANPClineEdit, 12, 1, 1, 1);

        EANPCcheckBox = new QCheckBox(gridLayoutWidget);
        EANPCcheckBox->setObjectName(QString::fromUtf8("EANPCcheckBox"));

        gridLayout->addWidget(EANPCcheckBox, 12, 0, 1, 1);

        ESMcomboBox = new QComboBox(gridLayoutWidget);
        ESMcomboBox->setObjectName(QString::fromUtf8("ESMcomboBox"));

        gridLayout->addWidget(ESMcomboBox, 15, 1, 1, 1);

        EANDlabel = new QLabel(gridLayoutWidget);
        EANDlabel->setObjectName(QString::fromUtf8("EANDlabel"));
        QFont font;
        font.setPointSize(15);
        EANDlabel->setFont(font);
        EANDlabel->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(EANDlabel, 0, 1, 1, 1);

        EANNcheckBox = new QCheckBox(gridLayoutWidget);
        EANNcheckBox->setObjectName(QString::fromUtf8("EANNcheckBox"));

        gridLayout->addWidget(EANNcheckBox, 10, 0, 1, 1);

        ESCcomboBox = new QComboBox(gridLayoutWidget);
        ESCcomboBox->setObjectName(QString::fromUtf8("ESCcomboBox"));

        gridLayout->addWidget(ESCcomboBox, 13, 1, 1, 1);

        EANClineEdit = new QLineEdit(gridLayoutWidget);
        EANClineEdit->setObjectName(QString::fromUtf8("EANClineEdit"));

        gridLayout->addWidget(EANClineEdit, 14, 1, 1, 1);

        EANCcheckBox = new QCheckBox(gridLayoutWidget);
        EANCcheckBox->setObjectName(QString::fromUtf8("EANCcheckBox"));

        gridLayout->addWidget(EANCcheckBox, 14, 0, 1, 1);

        ESNcomboBox = new QComboBox(gridLayoutWidget);
        ESNcomboBox->setObjectName(QString::fromUtf8("ESNcomboBox"));

        gridLayout->addWidget(ESNcomboBox, 8, 1, 1, 1);

        EANAlineEdit = new QLineEdit(gridLayoutWidget);
        EANAlineEdit->setObjectName(QString::fromUtf8("EANAlineEdit"));

        gridLayout->addWidget(EANAlineEdit, 4, 1, 1, 1);

        EANMlineEdit = new QLineEdit(gridLayoutWidget);
        EANMlineEdit->setObjectName(QString::fromUtf8("EANMlineEdit"));

        gridLayout->addWidget(EANMlineEdit, 16, 1, 1, 1);

        EANMcheckBox = new QCheckBox(gridLayoutWidget);
        EANMcheckBox->setObjectName(QString::fromUtf8("EANMcheckBox"));

        gridLayout->addWidget(EANMcheckBox, 16, 0, 1, 1);

        label = new QLabel(gridLayoutWidget);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 2, 0, 1, 1);

        label_2 = new QLabel(gridLayoutWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 5, 0, 1, 1);

        label_3 = new QLabel(gridLayoutWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout->addWidget(label_3, 8, 0, 1, 1);

        label_4 = new QLabel(gridLayoutWidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        gridLayout->addWidget(label_4, 11, 0, 1, 1);

        label_5 = new QLabel(gridLayoutWidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        gridLayout->addWidget(label_5, 13, 0, 1, 1);

        label_6 = new QLabel(gridLayoutWidget);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        gridLayout->addWidget(label_6, 15, 0, 1, 1);

        pushButton = new QPushButton(EditSelectesDetail);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(20, 420, 561, 24));

        retranslateUi(EditSelectesDetail);

        QMetaObject::connectSlotsByName(EditSelectesDetail);
    } // setupUi

    void retranslateUi(QDialog *EditSelectesDetail)
    {
        EditSelectesDetail->setWindowTitle(QApplication::translate("EditSelectesDetail", "Dialog", nullptr));
        EANPVcheckBox->setText(QApplication::translate("EditSelectesDetail", "Edit an existing Provider:", nullptr));
        EANAcheckBox->setText(QApplication::translate("EditSelectesDetail", "Edit an existing Articul:", nullptr));
        EANPCcheckBox->setText(QApplication::translate("EditSelectesDetail", "Edit an existing Price:", nullptr));
        EANDlabel->setText(QApplication::translate("EditSelectesDetail", "Edit Selected Detail", nullptr));
        EANNcheckBox->setText(QApplication::translate("EditSelectesDetail", "Edit an existing Name:", nullptr));
        EANCcheckBox->setText(QApplication::translate("EditSelectesDetail", "Edit an existing Count:", nullptr));
        EANMcheckBox->setText(QApplication::translate("EditSelectesDetail", "Edit an existing Manufacturer:", nullptr));
        label->setText(QApplication::translate("EditSelectesDetail", "Select an existing Articul:", nullptr));
        label_2->setText(QApplication::translate("EditSelectesDetail", "Select an existing Provider:", nullptr));
        label_3->setText(QApplication::translate("EditSelectesDetail", "Select an existing Name:", nullptr));
        label_4->setText(QApplication::translate("EditSelectesDetail", "Select an existing Price:", nullptr));
        label_5->setText(QApplication::translate("EditSelectesDetail", "Select an existing Count:", nullptr));
        label_6->setText(QApplication::translate("EditSelectesDetail", "Select an existing Manufacturer:", nullptr));
        pushButton->setText(QApplication::translate("EditSelectesDetail", "Edit  Detail", nullptr));
    } // retranslateUi

};

namespace Ui {
    class EditSelectesDetail: public Ui_EditSelectesDetail {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EDITSELECTESDETAIL_H
