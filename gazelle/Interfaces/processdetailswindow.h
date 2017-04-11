#ifndef PROCESSDETAILSWINDOW_H
#define PROCESSDETAILSWINDOW_H

#include <QMainWindow>
#include <QPushButton>
#include <QLabel>
#include <QTableWidget>
#include <QList>
#include <Logic/arraylist.h>
#include <QMessageBox>
#include <QItemSelectionModel>
#include <QModelIndexList>
#include <QModelIndex>
#include <fstream>
#include <sys/types.h>
#include <signal.h>
#include <Logic/utils.h>

namespace Ui {
class ProcessDetailsWindow;
}

class ProcessDetailsWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit ProcessDetailsWindow(QWidget *parent = 0);
    ~ProcessDetailsWindow();
    void populateProcessTable();
    void repopulateProcessTable();
    QString getProcessVariableWithId(int processId, QString valueName);
    QTableWidget*       table;
    QList<QString>*     headers;
    ArrayList*          processes;

public slots:
    void refreshButtonClicked();
    void killButtonClicked();

private:
    void killProcess(int pidToKill);
    Ui::ProcessDetailsWindow    *ui;
    QPushButton                 *refreshButton;
    QPushButton                 *killButton;
};

#endif // PROCESSDETAILSWINDOW_H
