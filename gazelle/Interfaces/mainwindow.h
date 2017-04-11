#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <Interfaces/processdetailswindow.h>
#include <QHBoxLayout>
#include <QLabel>
#include <QPushButton>
#include <QCheckBox>
#include <QMessageBox>
#include <QtGui>
#include <QString>
#include <Logic/arraylist.h>
#include <Logic/utils.h>
#include <QDesktopWidget>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
    ArrayList* processList;
    bool eventFilter(QObject *obj, QEvent *event);

public slots:
    void viewProcessesButtonClicked();
    void selectDeselectButtonClicked();

private:
    void getAllProcessIds(ArrayList* arrayList);
    QString getProcessNameFromStatusFile(int processId);
    Ui::MainWindow *ui;
    QLabel* headerText;
    QPushButton* viewProcessesButton;
    QPushButton* selectDeselectAllButton;
    bool selected;
    QList<QCheckBox*>* checkBoxes;
    QCheckBox* option1;
    QCheckBox* option2;
    QCheckBox* option3;
    QCheckBox* option4;
    QCheckBox* option5;
    QCheckBox* option6;
    QCheckBox* option7;
    QCheckBox* option8;
    QCheckBox* option9;
    QCheckBox* option10;
    QCheckBox* option11;
    QCheckBox* option12;
    QCheckBox* option13;
    QCheckBox* option14;
    QCheckBox* option15;
    QCheckBox* option16;
    QCheckBox* option17;
    QCheckBox* option18;
    QCheckBox* option19;
    QCheckBox* option20;
    QCheckBox* option21;
    QCheckBox* option22;
    QCheckBox* option23;
    QCheckBox* option24;
    QCheckBox* option25;
    QCheckBox* option26;
    QCheckBox* option27;
    QCheckBox* option28;
    QCheckBox* option29;
    QCheckBox* option30;
    QCheckBox* option31;
    QCheckBox* option32;
    QCheckBox* option33;
    QCheckBox* option34;
    QCheckBox* option35;
    QCheckBox* option36;
    QCheckBox* option37;
    QCheckBox* option38;
    QCheckBox* option39;
    QCheckBox* option40;
    QCheckBox* option41;
    QCheckBox* option42;
    QCheckBox* option43;
    QCheckBox* option44;
    QCheckBox* option45;
    QCheckBox* option46;
    QCheckBox* option47;
    QCheckBox* option48;
    QCheckBox* option49;
    QCheckBox* option50;
    QCheckBox* option51;
    QCheckBox* option52;
};

#endif // MAINWINDOW_H
