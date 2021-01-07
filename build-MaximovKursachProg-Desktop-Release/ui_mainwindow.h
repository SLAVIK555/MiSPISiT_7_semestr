/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QLabel *Groupslabel;
    QPushButton *DelselectedSpecpushButton;
    QLabel *Detailslabel;
    QLabel *Spetificationslabel;
    QTableView *DetailstableView;
    QTableView *GroupstableView;
    QTableView *SpetificationstableView;
    QPushButton *AddnewSpecpushButton;
    QPushButton *PSSpushButton;
    QPushButton *ANGpushButton;
    QPushButton *DSGpushButton;
    QPushButton *ANDpushButton;
    QPushButton *ESDpushButton;
    QPushButton *DSDpushButton;
    QCheckBox *OnlyMinecheckBox;
    QComboBox *SelectProjectcomboBox;
    QLabel *SelectProjectlabel;
    QPushButton *AddnewProjectpushButton;
    QPushButton *DelselectedProjectpushButton;
    QPushButton *PrintselectedProjectpushButton;
    QPushButton *ViewselectedProjectpushButton;
    QPushButton *DisplayProjectspushButton;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1311, 619);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        gridLayoutWidget = new QWidget(centralwidget);
        gridLayoutWidget->setObjectName(QString::fromUtf8("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(10, 100, 1121, 441));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        Groupslabel = new QLabel(gridLayoutWidget);
        Groupslabel->setObjectName(QString::fromUtf8("Groupslabel"));
        Groupslabel->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(Groupslabel, 0, 1, 1, 1);

        DelselectedSpecpushButton = new QPushButton(gridLayoutWidget);
        DelselectedSpecpushButton->setObjectName(QString::fromUtf8("DelselectedSpecpushButton"));

        gridLayout->addWidget(DelselectedSpecpushButton, 3, 0, 1, 1);

        Detailslabel = new QLabel(gridLayoutWidget);
        Detailslabel->setObjectName(QString::fromUtf8("Detailslabel"));
        Detailslabel->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(Detailslabel, 0, 2, 1, 1);

        Spetificationslabel = new QLabel(gridLayoutWidget);
        Spetificationslabel->setObjectName(QString::fromUtf8("Spetificationslabel"));
        Spetificationslabel->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(Spetificationslabel, 0, 0, 1, 1);

        DetailstableView = new QTableView(gridLayoutWidget);
        DetailstableView->setObjectName(QString::fromUtf8("DetailstableView"));

        gridLayout->addWidget(DetailstableView, 1, 2, 1, 1);

        GroupstableView = new QTableView(gridLayoutWidget);
        GroupstableView->setObjectName(QString::fromUtf8("GroupstableView"));

        gridLayout->addWidget(GroupstableView, 1, 1, 1, 1);

        SpetificationstableView = new QTableView(gridLayoutWidget);
        SpetificationstableView->setObjectName(QString::fromUtf8("SpetificationstableView"));

        gridLayout->addWidget(SpetificationstableView, 1, 0, 1, 1);

        AddnewSpecpushButton = new QPushButton(gridLayoutWidget);
        AddnewSpecpushButton->setObjectName(QString::fromUtf8("AddnewSpecpushButton"));

        gridLayout->addWidget(AddnewSpecpushButton, 2, 0, 1, 1);

        PSSpushButton = new QPushButton(gridLayoutWidget);
        PSSpushButton->setObjectName(QString::fromUtf8("PSSpushButton"));

        gridLayout->addWidget(PSSpushButton, 4, 0, 1, 1);

        ANGpushButton = new QPushButton(gridLayoutWidget);
        ANGpushButton->setObjectName(QString::fromUtf8("ANGpushButton"));

        gridLayout->addWidget(ANGpushButton, 2, 1, 1, 1);

        DSGpushButton = new QPushButton(gridLayoutWidget);
        DSGpushButton->setObjectName(QString::fromUtf8("DSGpushButton"));

        gridLayout->addWidget(DSGpushButton, 3, 1, 1, 1);

        ANDpushButton = new QPushButton(gridLayoutWidget);
        ANDpushButton->setObjectName(QString::fromUtf8("ANDpushButton"));

        gridLayout->addWidget(ANDpushButton, 2, 2, 1, 1);

        ESDpushButton = new QPushButton(gridLayoutWidget);
        ESDpushButton->setObjectName(QString::fromUtf8("ESDpushButton"));

        gridLayout->addWidget(ESDpushButton, 3, 2, 1, 1);

        DSDpushButton = new QPushButton(gridLayoutWidget);
        DSDpushButton->setObjectName(QString::fromUtf8("DSDpushButton"));

        gridLayout->addWidget(DSDpushButton, 4, 2, 1, 1);

        OnlyMinecheckBox = new QCheckBox(centralwidget);
        OnlyMinecheckBox->setObjectName(QString::fromUtf8("OnlyMinecheckBox"));
        OnlyMinecheckBox->setGeometry(QRect(10, 10, 161, 22));
        SelectProjectcomboBox = new QComboBox(centralwidget);
        SelectProjectcomboBox->setObjectName(QString::fromUtf8("SelectProjectcomboBox"));
        SelectProjectcomboBox->setGeometry(QRect(420, 10, 131, 24));
        SelectProjectlabel = new QLabel(centralwidget);
        SelectProjectlabel->setObjectName(QString::fromUtf8("SelectProjectlabel"));
        SelectProjectlabel->setGeometry(QRect(320, 10, 91, 21));
        AddnewProjectpushButton = new QPushButton(centralwidget);
        AddnewProjectpushButton->setObjectName(QString::fromUtf8("AddnewProjectpushButton"));
        AddnewProjectpushButton->setGeometry(QRect(730, 10, 131, 24));
        DelselectedProjectpushButton = new QPushButton(centralwidget);
        DelselectedProjectpushButton->setObjectName(QString::fromUtf8("DelselectedProjectpushButton"));
        DelselectedProjectpushButton->setGeometry(QRect(870, 10, 161, 24));
        PrintselectedProjectpushButton = new QPushButton(centralwidget);
        PrintselectedProjectpushButton->setObjectName(QString::fromUtf8("PrintselectedProjectpushButton"));
        PrintselectedProjectpushButton->setGeometry(QRect(1040, 10, 161, 24));
        ViewselectedProjectpushButton = new QPushButton(centralwidget);
        ViewselectedProjectpushButton->setObjectName(QString::fromUtf8("ViewselectedProjectpushButton"));
        ViewselectedProjectpushButton->setGeometry(QRect(560, 10, 161, 24));
        DisplayProjectspushButton = new QPushButton(centralwidget);
        DisplayProjectspushButton->setObjectName(QString::fromUtf8("DisplayProjectspushButton"));
        DisplayProjectspushButton->setGeometry(QRect(180, 10, 131, 24));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 1311, 21));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", nullptr));
        Groupslabel->setText(QApplication::translate("MainWindow", "Groups", nullptr));
        DelselectedSpecpushButton->setText(QApplication::translate("MainWindow", "Delete selected Spetification", nullptr));
        Detailslabel->setText(QApplication::translate("MainWindow", "                                                                               Details                                                                               ", nullptr));
        Spetificationslabel->setText(QApplication::translate("MainWindow", "Spetifications", nullptr));
        AddnewSpecpushButton->setText(QApplication::translate("MainWindow", "Add new Spetification", nullptr));
        PSSpushButton->setText(QApplication::translate("MainWindow", "Print selected Spetification", nullptr));
        ANGpushButton->setText(QApplication::translate("MainWindow", "Add new Group", nullptr));
        DSGpushButton->setText(QApplication::translate("MainWindow", "Delete selected Group", nullptr));
        ANDpushButton->setText(QApplication::translate("MainWindow", "Add new Detail", nullptr));
        ESDpushButton->setText(QApplication::translate("MainWindow", "Edit selected Delail", nullptr));
        DSDpushButton->setText(QApplication::translate("MainWindow", "Delete selected Detail", nullptr));
        OnlyMinecheckBox->setText(QApplication::translate("MainWindow", "Only Mine CheckBox", nullptr));
        SelectProjectlabel->setText(QApplication::translate("MainWindow", "Select Project", nullptr));
        AddnewProjectpushButton->setText(QApplication::translate("MainWindow", "Add new Project", nullptr));
        DelselectedProjectpushButton->setText(QApplication::translate("MainWindow", "Delete selected Project", nullptr));
        PrintselectedProjectpushButton->setText(QApplication::translate("MainWindow", "Print selected Project", nullptr));
        ViewselectedProjectpushButton->setText(QApplication::translate("MainWindow", "View selected Project", nullptr));
        DisplayProjectspushButton->setText(QApplication::translate("MainWindow", "Display Projects", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
