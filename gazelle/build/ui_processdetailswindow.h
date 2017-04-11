/********************************************************************************
** Form generated from reading UI file 'processdetailswindow.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PROCESSDETAILSWINDOW_H
#define UI_PROCESSDETAILSWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ProcessDetailsWindow
{
public:
    QWidget *centralwidget;
    QGridLayout *gridLayout_2;
    QTableWidget *tableWidget;
    QVBoxLayout *verticalLayout;
    QPushButton *refreshButton;
    QPushButton *killButton;
    QMenuBar *menubar;
    QStatusBar *statusbar;
    QToolBar *toolBar;

    void setupUi(QMainWindow *ProcessDetailsWindow)
    {
        if (ProcessDetailsWindow->objectName().isEmpty())
            ProcessDetailsWindow->setObjectName(QStringLiteral("ProcessDetailsWindow"));
        ProcessDetailsWindow->resize(450, 500);
        centralwidget = new QWidget(ProcessDetailsWindow);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        gridLayout_2 = new QGridLayout(centralwidget);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        tableWidget = new QTableWidget(centralwidget);
        tableWidget->setObjectName(QStringLiteral("tableWidget"));

        gridLayout_2->addWidget(tableWidget, 0, 0, 1, 1);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        refreshButton = new QPushButton(centralwidget);
        refreshButton->setObjectName(QStringLiteral("refreshButton"));
        refreshButton->setEnabled(true);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(refreshButton->sizePolicy().hasHeightForWidth());
        refreshButton->setSizePolicy(sizePolicy);

        verticalLayout->addWidget(refreshButton, 0, Qt::AlignRight);

        killButton = new QPushButton(centralwidget);
        killButton->setObjectName(QStringLiteral("killButton"));
        sizePolicy.setHeightForWidth(killButton->sizePolicy().hasHeightForWidth());
        killButton->setSizePolicy(sizePolicy);

        verticalLayout->addWidget(killButton, 0, Qt::AlignRight);


        gridLayout_2->addLayout(verticalLayout, 1, 0, 1, 1);

        ProcessDetailsWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(ProcessDetailsWindow);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 450, 25));
        ProcessDetailsWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(ProcessDetailsWindow);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        ProcessDetailsWindow->setStatusBar(statusbar);
        toolBar = new QToolBar(ProcessDetailsWindow);
        toolBar->setObjectName(QStringLiteral("toolBar"));
        ProcessDetailsWindow->addToolBar(Qt::TopToolBarArea, toolBar);

        retranslateUi(ProcessDetailsWindow);

        QMetaObject::connectSlotsByName(ProcessDetailsWindow);
    } // setupUi

    void retranslateUi(QMainWindow *ProcessDetailsWindow)
    {
        ProcessDetailsWindow->setWindowTitle(QApplication::translate("ProcessDetailsWindow", "MainWindow", 0));
        refreshButton->setText(QApplication::translate("ProcessDetailsWindow", "Refresh", 0));
        killButton->setText(QApplication::translate("ProcessDetailsWindow", "Kill Process", 0));
        toolBar->setWindowTitle(QApplication::translate("ProcessDetailsWindow", "toolBar", 0));
    } // retranslateUi

};

namespace Ui {
    class ProcessDetailsWindow: public Ui_ProcessDetailsWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PROCESSDETAILSWINDOW_H
