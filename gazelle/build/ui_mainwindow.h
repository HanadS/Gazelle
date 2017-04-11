/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QVBoxLayout *verticalLayout;
    QVBoxLayout *verticalLayout_2;
    QLabel *headerText;
    QPushButton *viewProcessesButton;
    QGridLayout *gridLayout_2;
    QCheckBox *checkBox32;
    QCheckBox *checkBox35;
    QCheckBox *checkBox25;
    QCheckBox *checkBox27;
    QCheckBox *checkBox37;
    QCheckBox *checkBox50;
    QCheckBox *checkBox33;
    QCheckBox *checkBox8;
    QCheckBox *checkBox24;
    QCheckBox *checkBox11;
    QCheckBox *checkBox22;
    QCheckBox *checkBox20;
    QCheckBox *checkBox44;
    QCheckBox *checkBox49;
    QCheckBox *checkBox12;
    QCheckBox *checkBox43;
    QCheckBox *checkBox21;
    QCheckBox *checkBox29;
    QCheckBox *checkBox40;
    QCheckBox *checkBox51;
    QCheckBox *checkBox3;
    QCheckBox *checkBox19;
    QCheckBox *checkBox15;
    QCheckBox *checkBox10;
    QCheckBox *checkBox30;
    QCheckBox *checkBox39;
    QCheckBox *checkBox26;
    QCheckBox *checkBox45;
    QCheckBox *checkBox4;
    QCheckBox *checkBox38;
    QCheckBox *checkBox23;
    QCheckBox *checkBox52;
    QCheckBox *checkBox6;
    QCheckBox *checkBox1;
    QCheckBox *checkBox2;
    QCheckBox *checkBox31;
    QCheckBox *checkBox7;
    QCheckBox *checkBox5;
    QCheckBox *checkBox46;
    QCheckBox *checkBox14;
    QCheckBox *checkBox41;
    QCheckBox *checkBox17;
    QCheckBox *checkBox18;
    QCheckBox *checkBox34;
    QCheckBox *checkBox47;
    QCheckBox *checkBox42;
    QCheckBox *checkBox48;
    QCheckBox *checkBox13;
    QCheckBox *checkBox28;
    QCheckBox *checkBox9;
    QCheckBox *checkBox36;
    QCheckBox *checkBox16;
    QVBoxLayout *verticalLayout_3;
    QPushButton *selectDeselectAll;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;
    QMenuBar *menuBar;
    QMenu *menuGazelle;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(523, 573);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        verticalLayout = new QVBoxLayout(centralWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(-1, -1, -1, 25);
        headerText = new QLabel(centralWidget);
        headerText->setObjectName(QStringLiteral("headerText"));
        QSizePolicy sizePolicy(QSizePolicy::Maximum, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(headerText->sizePolicy().hasHeightForWidth());
        headerText->setSizePolicy(sizePolicy);
        headerText->setMinimumSize(QSize(0, 35));
        headerText->setAlignment(Qt::AlignCenter);
        headerText->setWordWrap(true);
        headerText->setMargin(9);

        verticalLayout_2->addWidget(headerText, 0, Qt::AlignHCenter);

        viewProcessesButton = new QPushButton(centralWidget);
        viewProcessesButton->setObjectName(QStringLiteral("viewProcessesButton"));

        verticalLayout_2->addWidget(viewProcessesButton);


        verticalLayout->addLayout(verticalLayout_2);

        gridLayout_2 = new QGridLayout();
        gridLayout_2->setSpacing(6);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        checkBox32 = new QCheckBox(centralWidget);
        checkBox32->setObjectName(QStringLiteral("checkBox32"));

        gridLayout_2->addWidget(checkBox32, 8, 3, 1, 1);

        checkBox35 = new QCheckBox(centralWidget);
        checkBox35->setObjectName(QStringLiteral("checkBox35"));

        gridLayout_2->addWidget(checkBox35, 9, 2, 1, 1);

        checkBox25 = new QCheckBox(centralWidget);
        checkBox25->setObjectName(QStringLiteral("checkBox25"));

        gridLayout_2->addWidget(checkBox25, 7, 0, 1, 1);

        checkBox27 = new QCheckBox(centralWidget);
        checkBox27->setObjectName(QStringLiteral("checkBox27"));

        gridLayout_2->addWidget(checkBox27, 7, 2, 1, 1);

        checkBox37 = new QCheckBox(centralWidget);
        checkBox37->setObjectName(QStringLiteral("checkBox37"));

        gridLayout_2->addWidget(checkBox37, 10, 0, 1, 1);

        checkBox50 = new QCheckBox(centralWidget);
        checkBox50->setObjectName(QStringLiteral("checkBox50"));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(checkBox50->sizePolicy().hasHeightForWidth());
        checkBox50->setSizePolicy(sizePolicy1);

        gridLayout_2->addWidget(checkBox50, 13, 1, 1, 1);

        checkBox33 = new QCheckBox(centralWidget);
        checkBox33->setObjectName(QStringLiteral("checkBox33"));

        gridLayout_2->addWidget(checkBox33, 9, 0, 1, 1);

        checkBox8 = new QCheckBox(centralWidget);
        checkBox8->setObjectName(QStringLiteral("checkBox8"));

        gridLayout_2->addWidget(checkBox8, 1, 3, 1, 1);

        checkBox24 = new QCheckBox(centralWidget);
        checkBox24->setObjectName(QStringLiteral("checkBox24"));

        gridLayout_2->addWidget(checkBox24, 6, 3, 1, 1);

        checkBox11 = new QCheckBox(centralWidget);
        checkBox11->setObjectName(QStringLiteral("checkBox11"));

        gridLayout_2->addWidget(checkBox11, 2, 2, 1, 1);

        checkBox22 = new QCheckBox(centralWidget);
        checkBox22->setObjectName(QStringLiteral("checkBox22"));

        gridLayout_2->addWidget(checkBox22, 6, 1, 1, 1);

        checkBox20 = new QCheckBox(centralWidget);
        checkBox20->setObjectName(QStringLiteral("checkBox20"));

        gridLayout_2->addWidget(checkBox20, 4, 3, 1, 1);

        checkBox44 = new QCheckBox(centralWidget);
        checkBox44->setObjectName(QStringLiteral("checkBox44"));

        gridLayout_2->addWidget(checkBox44, 11, 3, 1, 1);

        checkBox49 = new QCheckBox(centralWidget);
        checkBox49->setObjectName(QStringLiteral("checkBox49"));

        gridLayout_2->addWidget(checkBox49, 13, 0, 1, 1);

        checkBox12 = new QCheckBox(centralWidget);
        checkBox12->setObjectName(QStringLiteral("checkBox12"));
        sizePolicy1.setHeightForWidth(checkBox12->sizePolicy().hasHeightForWidth());
        checkBox12->setSizePolicy(sizePolicy1);

        gridLayout_2->addWidget(checkBox12, 2, 3, 1, 1);

        checkBox43 = new QCheckBox(centralWidget);
        checkBox43->setObjectName(QStringLiteral("checkBox43"));

        gridLayout_2->addWidget(checkBox43, 11, 2, 1, 1);

        checkBox21 = new QCheckBox(centralWidget);
        checkBox21->setObjectName(QStringLiteral("checkBox21"));

        gridLayout_2->addWidget(checkBox21, 6, 0, 1, 1);

        checkBox29 = new QCheckBox(centralWidget);
        checkBox29->setObjectName(QStringLiteral("checkBox29"));

        gridLayout_2->addWidget(checkBox29, 8, 0, 1, 1);

        checkBox40 = new QCheckBox(centralWidget);
        checkBox40->setObjectName(QStringLiteral("checkBox40"));

        gridLayout_2->addWidget(checkBox40, 10, 3, 1, 1);

        checkBox51 = new QCheckBox(centralWidget);
        checkBox51->setObjectName(QStringLiteral("checkBox51"));
        sizePolicy1.setHeightForWidth(checkBox51->sizePolicy().hasHeightForWidth());
        checkBox51->setSizePolicy(sizePolicy1);

        gridLayout_2->addWidget(checkBox51, 13, 2, 1, 1);

        checkBox3 = new QCheckBox(centralWidget);
        checkBox3->setObjectName(QStringLiteral("checkBox3"));

        gridLayout_2->addWidget(checkBox3, 0, 2, 1, 1);

        checkBox19 = new QCheckBox(centralWidget);
        checkBox19->setObjectName(QStringLiteral("checkBox19"));

        gridLayout_2->addWidget(checkBox19, 4, 2, 1, 1);

        checkBox15 = new QCheckBox(centralWidget);
        checkBox15->setObjectName(QStringLiteral("checkBox15"));

        gridLayout_2->addWidget(checkBox15, 3, 2, 1, 1);

        checkBox10 = new QCheckBox(centralWidget);
        checkBox10->setObjectName(QStringLiteral("checkBox10"));

        gridLayout_2->addWidget(checkBox10, 2, 1, 1, 1);

        checkBox30 = new QCheckBox(centralWidget);
        checkBox30->setObjectName(QStringLiteral("checkBox30"));

        gridLayout_2->addWidget(checkBox30, 8, 1, 1, 1);

        checkBox39 = new QCheckBox(centralWidget);
        checkBox39->setObjectName(QStringLiteral("checkBox39"));

        gridLayout_2->addWidget(checkBox39, 10, 2, 1, 1);

        checkBox26 = new QCheckBox(centralWidget);
        checkBox26->setObjectName(QStringLiteral("checkBox26"));

        gridLayout_2->addWidget(checkBox26, 7, 1, 1, 1);

        checkBox45 = new QCheckBox(centralWidget);
        checkBox45->setObjectName(QStringLiteral("checkBox45"));

        gridLayout_2->addWidget(checkBox45, 12, 0, 1, 1);

        checkBox4 = new QCheckBox(centralWidget);
        checkBox4->setObjectName(QStringLiteral("checkBox4"));

        gridLayout_2->addWidget(checkBox4, 0, 3, 1, 1);

        checkBox38 = new QCheckBox(centralWidget);
        checkBox38->setObjectName(QStringLiteral("checkBox38"));

        gridLayout_2->addWidget(checkBox38, 10, 1, 1, 1);

        checkBox23 = new QCheckBox(centralWidget);
        checkBox23->setObjectName(QStringLiteral("checkBox23"));

        gridLayout_2->addWidget(checkBox23, 6, 2, 1, 1);

        checkBox52 = new QCheckBox(centralWidget);
        checkBox52->setObjectName(QStringLiteral("checkBox52"));

        gridLayout_2->addWidget(checkBox52, 13, 3, 1, 1);

        checkBox6 = new QCheckBox(centralWidget);
        checkBox6->setObjectName(QStringLiteral("checkBox6"));

        gridLayout_2->addWidget(checkBox6, 1, 1, 1, 1);

        checkBox1 = new QCheckBox(centralWidget);
        checkBox1->setObjectName(QStringLiteral("checkBox1"));

        gridLayout_2->addWidget(checkBox1, 0, 0, 1, 1);

        checkBox2 = new QCheckBox(centralWidget);
        checkBox2->setObjectName(QStringLiteral("checkBox2"));
        sizePolicy1.setHeightForWidth(checkBox2->sizePolicy().hasHeightForWidth());
        checkBox2->setSizePolicy(sizePolicy1);

        gridLayout_2->addWidget(checkBox2, 0, 1, 1, 1);

        checkBox31 = new QCheckBox(centralWidget);
        checkBox31->setObjectName(QStringLiteral("checkBox31"));

        gridLayout_2->addWidget(checkBox31, 8, 2, 1, 1);

        checkBox7 = new QCheckBox(centralWidget);
        checkBox7->setObjectName(QStringLiteral("checkBox7"));
        sizePolicy1.setHeightForWidth(checkBox7->sizePolicy().hasHeightForWidth());
        checkBox7->setSizePolicy(sizePolicy1);

        gridLayout_2->addWidget(checkBox7, 1, 2, 1, 1);

        checkBox5 = new QCheckBox(centralWidget);
        checkBox5->setObjectName(QStringLiteral("checkBox5"));

        gridLayout_2->addWidget(checkBox5, 1, 0, 1, 1);

        checkBox46 = new QCheckBox(centralWidget);
        checkBox46->setObjectName(QStringLiteral("checkBox46"));

        gridLayout_2->addWidget(checkBox46, 12, 1, 1, 1);

        checkBox14 = new QCheckBox(centralWidget);
        checkBox14->setObjectName(QStringLiteral("checkBox14"));

        gridLayout_2->addWidget(checkBox14, 3, 1, 1, 1);

        checkBox41 = new QCheckBox(centralWidget);
        checkBox41->setObjectName(QStringLiteral("checkBox41"));

        gridLayout_2->addWidget(checkBox41, 11, 0, 1, 1);

        checkBox17 = new QCheckBox(centralWidget);
        checkBox17->setObjectName(QStringLiteral("checkBox17"));
        sizePolicy1.setHeightForWidth(checkBox17->sizePolicy().hasHeightForWidth());
        checkBox17->setSizePolicy(sizePolicy1);

        gridLayout_2->addWidget(checkBox17, 4, 0, 1, 1);

        checkBox18 = new QCheckBox(centralWidget);
        checkBox18->setObjectName(QStringLiteral("checkBox18"));

        gridLayout_2->addWidget(checkBox18, 4, 1, 1, 1);

        checkBox34 = new QCheckBox(centralWidget);
        checkBox34->setObjectName(QStringLiteral("checkBox34"));

        gridLayout_2->addWidget(checkBox34, 9, 1, 1, 1);

        checkBox47 = new QCheckBox(centralWidget);
        checkBox47->setObjectName(QStringLiteral("checkBox47"));

        gridLayout_2->addWidget(checkBox47, 12, 2, 1, 1);

        checkBox42 = new QCheckBox(centralWidget);
        checkBox42->setObjectName(QStringLiteral("checkBox42"));

        gridLayout_2->addWidget(checkBox42, 11, 1, 1, 1);

        checkBox48 = new QCheckBox(centralWidget);
        checkBox48->setObjectName(QStringLiteral("checkBox48"));

        gridLayout_2->addWidget(checkBox48, 12, 3, 1, 1);

        checkBox13 = new QCheckBox(centralWidget);
        checkBox13->setObjectName(QStringLiteral("checkBox13"));

        gridLayout_2->addWidget(checkBox13, 3, 0, 1, 1);

        checkBox28 = new QCheckBox(centralWidget);
        checkBox28->setObjectName(QStringLiteral("checkBox28"));

        gridLayout_2->addWidget(checkBox28, 7, 3, 1, 1);

        checkBox9 = new QCheckBox(centralWidget);
        checkBox9->setObjectName(QStringLiteral("checkBox9"));

        gridLayout_2->addWidget(checkBox9, 2, 0, 1, 1);

        checkBox36 = new QCheckBox(centralWidget);
        checkBox36->setObjectName(QStringLiteral("checkBox36"));

        gridLayout_2->addWidget(checkBox36, 9, 3, 1, 1);

        checkBox16 = new QCheckBox(centralWidget);
        checkBox16->setObjectName(QStringLiteral("checkBox16"));

        gridLayout_2->addWidget(checkBox16, 3, 3, 1, 1);


        verticalLayout->addLayout(gridLayout_2);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        selectDeselectAll = new QPushButton(centralWidget);
        selectDeselectAll->setObjectName(QStringLiteral("selectDeselectAll"));

        verticalLayout_3->addWidget(selectDeselectAll);


        verticalLayout->addLayout(verticalLayout_3);

        MainWindow->setCentralWidget(centralWidget);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 523, 25));
        menuGazelle = new QMenu(menuBar);
        menuGazelle->setObjectName(QStringLiteral("menuGazelle"));
        MainWindow->setMenuBar(menuBar);

        menuBar->addAction(menuGazelle->menuAction());

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0));
        headerText->setText(QApplication::translate("MainWindow", "Mouse over an option to begin.", 0));
        viewProcessesButton->setText(QApplication::translate("MainWindow", "View Processes", 0));
        checkBox32->setText(QApplication::translate("MainWindow", "Blocked", 0));
        checkBox35->setText(QApplication::translate("MainWindow", "Wchan", 0));
        checkBox25->setText(QApplication::translate("MainWindow", "RSSLim", 0));
        checkBox27->setText(QApplication::translate("MainWindow", "Endcode", 0));
        checkBox37->setText(QApplication::translate("MainWindow", "CNswap", 0));
        checkBox50->setText(QApplication::translate("MainWindow", "Env Start", 0));
        checkBox33->setText(QApplication::translate("MainWindow", "Sigignore", 0));
        checkBox8->setText(QApplication::translate("MainWindow", "TPGID", 0));
        checkBox24->setText(QApplication::translate("MainWindow", "RSS", 0));
        checkBox11->setText(QApplication::translate("MainWindow", "CMinflt", 0));
        checkBox22->setText(QApplication::translate("MainWindow", "Starttime", 0));
        checkBox20->setText(QApplication::translate("MainWindow", "Numthreads", 0));
        checkBox44->setText(QApplication::translate("MainWindow", "C Guest Time", 0));
        checkBox49->setText(QApplication::translate("MainWindow", "Arg End", 0));
        checkBox12->setText(QApplication::translate("MainWindow", "Majflt", 0));
        checkBox43->setText(QApplication::translate("MainWindow", "Guest Time", 0));
        checkBox21->setText(QApplication::translate("MainWindow", "ITrealvalue", 0));
        checkBox29->setText(QApplication::translate("MainWindow", "Kstkesp", 0));
        checkBox40->setText(QApplication::translate("MainWindow", "RT_priority", 0));
        checkBox51->setText(QApplication::translate("MainWindow", "Env End", 0));
        checkBox3->setText(QApplication::translate("MainWindow", "State", 0));
        checkBox19->setText(QApplication::translate("MainWindow", "Nice", 0));
        checkBox15->setText(QApplication::translate("MainWindow", "Stime", 0));
        checkBox10->setText(QApplication::translate("MainWindow", "Minflt", 0));
        checkBox30->setText(QApplication::translate("MainWindow", "Kstkeip", 0));
        checkBox39->setText(QApplication::translate("MainWindow", "Processor", 0));
        checkBox26->setText(QApplication::translate("MainWindow", "StartCode", 0));
        checkBox45->setText(QApplication::translate("MainWindow", "Start Data", 0));
        checkBox4->setText(QApplication::translate("MainWindow", "Parent PID", 0));
        checkBox38->setText(QApplication::translate("MainWindow", "Exit Signal", 0));
        checkBox23->setText(QApplication::translate("MainWindow", "VSize", 0));
        checkBox52->setText(QApplication::translate("MainWindow", "Exit Code", 0));
        checkBox6->setText(QApplication::translate("MainWindow", "Session", 0));
        checkBox1->setText(QApplication::translate("MainWindow", "PID", 0));
        checkBox2->setText(QApplication::translate("MainWindow", "COMM", 0));
        checkBox31->setText(QApplication::translate("MainWindow", "Signal", 0));
        checkBox7->setText(QApplication::translate("MainWindow", "TTY_NR", 0));
        checkBox5->setText(QApplication::translate("MainWindow", "PGRP", 0));
        checkBox46->setText(QApplication::translate("MainWindow", "End Data", 0));
        checkBox14->setText(QApplication::translate("MainWindow", "Utime", 0));
        checkBox41->setText(QApplication::translate("MainWindow", "Policy", 0));
        checkBox17->setText(QApplication::translate("MainWindow", "CStime", 0));
        checkBox18->setText(QApplication::translate("MainWindow", "Priority", 0));
        checkBox34->setText(QApplication::translate("MainWindow", "Sigcatch", 0));
        checkBox47->setText(QApplication::translate("MainWindow", "Start BK", 0));
        checkBox42->setText(QApplication::translate("MainWindow", "Aggregated Block", 0));
        checkBox48->setText(QApplication::translate("MainWindow", "Arg Start", 0));
        checkBox13->setText(QApplication::translate("MainWindow", "CMajflt", 0));
        checkBox28->setText(QApplication::translate("MainWindow", "Startstack", 0));
        checkBox9->setText(QApplication::translate("MainWindow", "Flags", 0));
        checkBox36->setText(QApplication::translate("MainWindow", "Nswap", 0));
        checkBox16->setText(QApplication::translate("MainWindow", "Cutime", 0));
        selectDeselectAll->setText(QApplication::translate("MainWindow", "Select / Deselect All", 0));
        menuGazelle->setTitle(QApplication::translate("MainWindow", "Gazelle", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
