#ifndef INTROWINDOW_H
#define INTROWINDOW_H

#include <QMainWindow>
#include <QPushButton>
#include <QDesktopWidget>
#include <QLabel>
#include <Interfaces/mainwindow.h>
#include <QGraphicsOpacityEffect>
#include <QPropertyAnimation>
#include <Logic/utils.h>

namespace Ui {
class IntroWindow;
}

class IntroWindow : public QMainWindow {
    Q_OBJECT

public:
    explicit IntroWindow(QWidget *parent = 0);
    ~IntroWindow();

public slots:
    void                pushButtonClicked();

private:
    Ui::IntroWindow     *ui;
    QLabel              *titleText;
    QLabel              *descriptionText;
    QPushButton         *startButton;
};

#endif // INTROWINDOW_H
