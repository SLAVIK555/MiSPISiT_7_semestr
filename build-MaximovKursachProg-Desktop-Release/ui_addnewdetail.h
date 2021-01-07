/********************************************************************************
** Form generated from reading UI file 'addnewdetail.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDNEWDETAIL_H
#define UI_ADDNEWDETAIL_H

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

class Ui_AddNewDetail
{
public:
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QComboBox *SPCcomboBox;
    QLineEdit *ANPVlineEdit;
    QLineEdit *ANNlineEdit;
    QCheckBox *ANPVcheckBox;
    QComboBox *SPVcomboBox;
    QCheckBox *ANAcheckBox;
    QComboBox *SAcomboBox;
    QLineEdit *ANPClineEdit;
    QCheckBox *ANPCcheckBox;
    QComboBox *SMcomboBox;
    QLabel *ANDlabel;
    QCheckBox *ANNcheckBox;
    QComboBox *SCcomboBox;
    QLineEdit *ANClineEdit;
    QCheckBox *ANCcheckBox;
    QComboBox *SNcomboBox;
    QLineEdit *ANAlineEdit;
    QLineEdit *ANMlineEdit;
    QCheckBox *ANMcheckBox;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QPushButton *pushButton;

    void setupUi(QDialog *AddNewDetail)
    {
        if (AddNewDetail->objectName().isEmpty())
            AddNewDetail->setObjectName(QString::fromUtf8("AddNewDetail"));
        AddNewDetail->resize(644, 477);
        gridLayoutWidget = new QWidget(AddNewDetail);
        gridLayoutWidget->setObjectName(QString::fromUtf8("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(40, 30, 561, 391));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        SPCcomboBox = new QComboBox(gridLayoutWidget);
        SPCcomboBox->setObjectName(QString::fromUtf8("SPCcomboBox"));

        gridLayout->addWidget(SPCcomboBox, 11, 1, 1, 1);

        ANPVlineEdit = new QLineEdit(gridLayoutWidget);
        ANPVlineEdit->setObjectName(QString::fromUtf8("ANPVlineEdit"));

        gridLayout->addWidget(ANPVlineEdit, 7, 1, 1, 1);

        ANNlineEdit = new QLineEdit(gridLayoutWidget);
        ANNlineEdit->setObjectName(QString::fromUtf8("ANNlineEdit"));

        gridLayout->addWidget(ANNlineEdit, 10, 1, 1, 1);

        ANPVcheckBox = new QCheckBox(gridLayoutWidget);
        ANPVcheckBox->setObjectName(QString::fromUtf8("ANPVcheckBox"));

        gridLayout->addWidget(ANPVcheckBox, 7, 0, 1, 1);

        SPVcomboBox = new QComboBox(gridLayoutWidget);
        SPVcomboBox->setObjectName(QString::fromUtf8("SPVcomboBox"));

        gridLayout->addWidget(SPVcomboBox, 5, 1, 1, 1);

        ANAcheckBox = new QCheckBox(gridLayoutWidget);
        ANAcheckBox->setObjectName(QString::fromUtf8("ANAcheckBox"));

        gridLayout->addWidget(ANAcheckBox, 4, 0, 1, 1);

        SAcomboBox = new QComboBox(gridLayoutWidget);
        SAcomboBox->setObjectName(QString::fromUtf8("SAcomboBox"));

        gridLayout->addWidget(SAcomboBox, 2, 1, 1, 1);

        ANPClineEdit = new QLineEdit(gridLayoutWidget);
        ANPClineEdit->setObjectName(QString::fromUtf8("ANPClineEdit"));

        gridLayout->addWidget(ANPClineEdit, 12, 1, 1, 1);

        ANPCcheckBox = new QCheckBox(gridLayoutWidget);
        ANPCcheckBox->setObjectName(QString::fromUtf8("ANPCcheckBox"));

        gridLayout->addWidget(ANPCcheckBox, 12, 0, 1, 1);

        SMcomboBox = new QComboBox(gridLayoutWidget);
        SMcomboBox->setObjectName(QString::fromUtf8("SMcomboBox"));

        gridLayout->addWidget(SMcomboBox, 15, 1, 1, 1);

        ANDlabel = new QLabel(gridLayoutWidget);
        ANDlabel->setObjectName(QString::fromUtf8("ANDlabel"));
        QFont font;
        font.setPointSize(15);
        ANDlabel->setFont(font);
        ANDlabel->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(ANDlabel, 0, 1, 1, 1);

        ANNcheckBox = new QCheckBox(gridLayoutWidget);
        ANNcheckBox->setObjectName(QString::fromUtf8("ANNcheckBox"));

        gridLayout->addWidget(ANNcheckBox, 10, 0, 1, 1);

        SCcomboBox = new QComboBox(gridLayoutWidget);
        SCcomboBox->setObjectName(QString::fromUtf8("SCcomboBox"));

        gridLayout->addWidget(SCcomboBox, 13, 1, 1, 1);

        ANClineEdit = new QLineEdit(gridLayoutWidget);
        ANClineEdit->setObjectName(QString::fromUtf8("ANClineEdit"));

        gridLayout->addWidget(ANClineEdit, 14, 1, 1, 1);

        ANCcheckBox = new QCheckBox(gridLayoutWidget);
        ANCcheckBox->setObjectName(QString::fromUtf8("ANCcheckBox"));

        gridLayout->addWidget(ANCcheckBox, 14, 0, 1, 1);

        SNcomboBox = new QComboBox(gridLayoutWidget);
        SNcomboBox->setObjectName(QString::fromUtf8("SNcomboBox"));

        gridLayout->addWidget(SNcomboBox, 8, 1, 1, 1);

        ANAlineEdit = new QLineEdit(gridLayoutWidget);
        ANAlineEdit->setObjectName(QString::fromUtf8("ANAlineEdit"));

        gridLayout->addWidget(ANAlineEdit, 4, 1, 1, 1);

        ANMlineEdit = new QLineEdit(gridLayoutWidget);
        ANMlineEdit->setObjectName(QString::fromUtf8("ANMlineEdit"));

        gridLayout->addWidget(ANMlineEdit, 16, 1, 1, 1);

        ANMcheckBox = new QCheckBox(gridLayoutWidget);
        ANMcheckBox->setObjectName(QString::fromUtf8("ANMcheckBox"));

        gridLayout->addWidget(ANMcheckBox, 16, 0, 1, 1);

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

        pushButton = new QPushButton(AddNewDetail);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(39, 430, 561, 24));

        retranslateUi(AddNewDetail);

        QMetaObject::connectSlotsByName(AddNewDetail);
    } // setupUi

    void retranslateUi(QDialog *AddNewDetail)
    {
        AddNewDetail->setWindowTitle(QApplication::translate("AddNewDetail", "Dialog", nullptr));
        ANPVcheckBox->setText(QApplication::translate("AddNewDetail", "Add new Provider:", nullptr));
        ANAcheckBox->setText(QApplication::translate("AddNewDetail", "Add new Articul:", nullptr));
        ANPCcheckBox->setText(QApplication::translate("AddNewDetail", "Add new Price:", nullptr));
        ANDlabel->setText(QApplication::translate("AddNewDetail", "Add New Detail", nullptr));
        ANNcheckBox->setText(QApplication::translate("AddNewDetail", "Add new Name:", nullptr));
        ANCcheckBox->setText(QApplication::translate("AddNewDetail", "Add new Count:", nullptr));
        ANMcheckBox->setText(QApplication::translate("AddNewDetail", "Add new Manufacturer:", nullptr));
        label->setText(QApplication::translate("AddNewDetail", "Select Articul:", nullptr));
        label_2->setText(QApplication::translate("AddNewDetail", "Select Provider:", nullptr));
        label_3->setText(QApplication::translate("AddNewDetail", "Select Name:", nullptr));
        label_4->setText(QApplication::translate("AddNewDetail", "Select Price:", nullptr));
        label_5->setText(QApplication::translate("AddNewDetail", "Select Count:", nullptr));
        label_6->setText(QApplication::translate("AddNewDetail", "Select Manufacturer:", nullptr));
        pushButton->setText(QApplication::translate("AddNewDetail", "Add New Detail", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AddNewDetail: public Ui_AddNewDetail {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDNEWDETAIL_H
