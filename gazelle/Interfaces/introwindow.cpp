#include "introwindow.h"
#include "ui_introwindow.h"

IntroWindow::IntroWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::IntroWindow) {

    ui->setupUi(this);
    startButton = ui->startButton;
    connect(startButton, SIGNAL(clicked()), this, SLOT(pushButtonClicked()));
    titleText = ui->titleText;
    descriptionText = ui->descriptionText;

    /* Title text animation. */
    QGraphicsOpacityEffect *eff = new QGraphicsOpacityEffect(this);
    titleText->setGraphicsEffect(eff);
    QPropertyAnimation *a = new QPropertyAnimation(eff,"opacity");
    a->setDuration(450);
    a->setStartValue(0);
    a->setEndValue(1);
    a->setEasingCurve(QEasingCurve::InBack);
    a->start(QPropertyAnimation::DeleteWhenStopped);

    /* Description text animation. */
    QGraphicsOpacityEffect *eff2 = new QGraphicsOpacityEffect(this);
    descriptionText->setGraphicsEffect(eff2);
    QPropertyAnimation *a2 = new QPropertyAnimation(eff2
                                                    ,"opacity");
    a2->setDuration(1050);
    a2->setStartValue(0);
    a2->setEndValue(1);
    a2->setEasingCurve(QEasingCurve::InBack);
    a2->start(QPropertyAnimation::DeleteWhenStopped);

    /* Start button animation. */
    QGraphicsOpacityEffect *eff3 = new QGraphicsOpacityEffect(this);
    startButton->setGraphicsEffect(eff3);
    QPropertyAnimation *a3 = new QPropertyAnimation(eff3,"opacity");
    a3->setDuration(1350);
    a3->setStartValue(0);
    a3->setEndValue(1);
    a3->setEasingCurve(QEasingCurve::InBack);
    a3->start(QPropertyAnimation::DeleteWhenStopped);

}

void IntroWindow::pushButtonClicked() {
    MainWindow *mainWindow = new MainWindow();
    this->hide();
    Utils::setWindowToCenter(mainWindow);
    mainWindow->show();
}

IntroWindow::~IntroWindow() {
    delete ui;
}
