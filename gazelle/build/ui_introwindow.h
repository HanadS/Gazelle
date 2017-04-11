/********************************************************************************
** Form generated from reading UI file 'introwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_INTROWINDOW_H
#define UI_INTROWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_IntroWindow
{
public:
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QLabel *titleText;
    QLabel *descriptionText;
    QPushButton *startButton;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *IntroWindow)
    {
        if (IntroWindow->objectName().isEmpty())
            IntroWindow->setObjectName(QStringLiteral("IntroWindow"));
        IntroWindow->resize(400, 400);
        centralwidget = new QWidget(IntroWindow);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        verticalLayout_2 = new QVBoxLayout(centralwidget);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setSizeConstraint(QLayout::SetDefaultConstraint);
        verticalLayout->setContentsMargins(-1, -1, -1, 25);
        titleText = new QLabel(centralwidget);
        titleText->setObjectName(QStringLiteral("titleText"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(titleText->sizePolicy().hasHeightForWidth());
        titleText->setSizePolicy(sizePolicy);
        QFont font;
        font.setFamily(QStringLiteral("Droid Sans"));
        font.setPointSize(24);
        font.setBold(true);
        font.setWeight(75);
        titleText->setFont(font);
        titleText->setMargin(50);

        verticalLayout->addWidget(titleText, 0, Qt::AlignHCenter);

        descriptionText = new QLabel(centralwidget);
        descriptionText->setObjectName(QStringLiteral("descriptionText"));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(descriptionText->sizePolicy().hasHeightForWidth());
        descriptionText->setSizePolicy(sizePolicy1);
        QFont font1;
        font1.setFamily(QStringLiteral("Droid Sans"));
        descriptionText->setFont(font1);
        descriptionText->setAlignment(Qt::AlignCenter);
        descriptionText->setWordWrap(true);

        verticalLayout->addWidget(descriptionText, 0, Qt::AlignHCenter);

        startButton = new QPushButton(centralwidget);
        startButton->setObjectName(QStringLiteral("startButton"));
        startButton->setFont(font1);

        verticalLayout->addWidget(startButton);


        verticalLayout_2->addLayout(verticalLayout);

        IntroWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(IntroWindow);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 400, 25));
        IntroWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(IntroWindow);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        IntroWindow->setStatusBar(statusbar);

        retranslateUi(IntroWindow);

        QMetaObject::connectSlotsByName(IntroWindow);
    } // setupUi

    void retranslateUi(QMainWindow *IntroWindow)
    {
        IntroWindow->setWindowTitle(QApplication::translate("IntroWindow", "MainWindow", 0));
        titleText->setText(QApplication::translate("IntroWindow", "Gazelle", 0));
        descriptionText->setText(QApplication::translate("IntroWindow", "A process manager that provides status information on processes.", 0));
        startButton->setText(QApplication::translate("IntroWindow", "Start", 0));
    } // retranslateUi

};

namespace Ui {
    class IntroWindow: public Ui_IntroWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INTROWINDOW_H
