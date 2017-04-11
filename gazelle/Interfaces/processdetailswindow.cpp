#include "processdetailswindow.h"
#include "ui_processdetailswindow.h"

ProcessDetailsWindow::ProcessDetailsWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::ProcessDetailsWindow) {

    ui->setupUi(this);
    processes = new ArrayList();
    headers = new QList<QString>();
    table = ui->tableWidget;
    refreshButton = ui->refreshButton;
    killButton = ui->killButton;
    connect(refreshButton, SIGNAL(clicked()), SLOT(refreshButtonClicked()));
    connect(killButton, SIGNAL(clicked()), SLOT(killButtonClicked()));

    Utils::getAllProcessIds(processes);
}

ProcessDetailsWindow::~ProcessDetailsWindow() {
    delete ui;
    delete processes;
    delete headers;
    delete table;
    delete killButton;
}

void ProcessDetailsWindow::killButtonClicked() {
    QItemSelectionModel *select = table->selectionModel();
    QSet<int> *selectedRowSet = new QSet<int>();

    if (select->hasSelection()) {
        QString printText = "You've selected the following process(es): ";
        QModelIndexList selectedRows = select->selection().indexes();
        for (int i = 0; i < selectedRows.size(); ++i) {
            selectedRowSet->insert(selectedRows.at(i).row());
        }

        QSet<int>::iterator i;
        for (i = selectedRowSet->begin(); i != selectedRowSet->end(); ++i) {
            QString add = "";
            add.sprintf("%d, ", processes->get(*i));
            printText.append(add);
        }

        QMessageBox::information(this, "Information", printText);

        QSet<int>::iterator j;
        for (j = selectedRowSet->begin(); j != selectedRowSet->end(); ++j) {
            int processId = processes->get(*j);
            table->removeRow(*j);
            killProcess(processId);
        }

    } else {
        QMessageBox::information(this, "Information", "Please click on the table to select a process first.");
    }
}

void ProcessDetailsWindow::refreshButtonClicked() {
    repopulateProcessTable();
}

void ProcessDetailsWindow::killProcess(int pidToKill) {
    pid_t pid = pidToKill;
    kill(pid, SIGTERM);
}

void ProcessDetailsWindow::repopulateProcessTable() {
    table->setRowCount(0);
    table->setColumnCount(0);
    processes = new ArrayList();
    Utils::getAllProcessIds(processes);


    table->setRowCount(processes->size());
    table->setColumnCount(headers->size() + 1);

    for (int ridx = 0 ; ridx < table->rowCount() ; ridx++ )
    {
        int processId = processes->get(ridx);

        QTableWidgetItem* item = new QTableWidgetItem();
        item->setFlags(item->flags() ^ Qt::ItemIsEditable);
        item->setText(Utils::getProcessNameFromStatusFile(processId));
        table->setItem(ridx,0,item);

        for (int cidx = 1 ; cidx < table->columnCount(); cidx++)
        {
          QString valueName = headers->at(cidx - 1);
          QString variable = getProcessVariableWithId(processId, valueName);
          QTableWidgetItem* item = new QTableWidgetItem();
          item->setFlags(item->flags() ^ Qt::ItemIsEditable);
          item->setText(variable);
          ui->tableWidget->setItem(ridx,cidx,item);
        }
    }

    QTableWidgetItem* name = new QTableWidgetItem(QString("Name"),QTableWidgetItem::Type);
    table->setHorizontalHeaderItem(0, name);

    for (int i = 0; i < headers->size(); i++) {
        QTableWidgetItem* qtwi = new QTableWidgetItem(QString(headers->at(i)),QTableWidgetItem::Type);
        table->setHorizontalHeaderItem(i + 1, qtwi);
    }
}

void ProcessDetailsWindow::populateProcessTable() {
    table->setRowCount(processes->size());
    table->setColumnCount(headers->size() + 1);

    for (int ridx = 0 ; ridx < table->rowCount() ; ridx++ )
    {
        int processId = processes->get(ridx);

        QTableWidgetItem* item = new QTableWidgetItem();
        item->setFlags(item->flags() ^ Qt::ItemIsEditable);
        item->setText(Utils::getProcessNameFromStatusFile(processId));
        table->setItem(ridx,0,item);

        for (int cidx = 1 ; cidx < table->columnCount(); cidx++)
        {
          QString valueName = headers->at(cidx - 1);
          QString variable = getProcessVariableWithId(processId, valueName);
          QTableWidgetItem* item = new QTableWidgetItem();
          item->setFlags(item->flags() ^ Qt::ItemIsEditable);
          item->setText(variable);
          ui->tableWidget->setItem(ridx,cidx,item);
        }
    }
    QTableWidgetItem* name = new QTableWidgetItem(QString("Name"),QTableWidgetItem::Type);
    table->setHorizontalHeaderItem(0, name);

    for (int i = 0; i < headers->size(); i++) {
        QTableWidgetItem* qtwi = new QTableWidgetItem(QString(headers->at(i)),QTableWidgetItem::Type);
        table->setHorizontalHeaderItem(i + 1, qtwi);
    }
}

QString ProcessDetailsWindow::getProcessVariableWithId(int processId, QString valueName) {
    QString variable = "";
    int pid;
    char comm[1000];
    char state;
    int ppid;
    int pgrp;
    int session;
    int tty_nr;
    int tpgid;
    unsigned int flags;
    unsigned long minflt;
    unsigned long cminflt;
    unsigned long majflt;
    unsigned long cmajflt;
    unsigned long utime;
    unsigned long stime;
    long cutime;
    long cstime;
    long priority;
    long nice;
    long numThreads;
    long itrealvalue;
    long long unsigned int starttime;
    unsigned long vsize;
    long rss;
    unsigned long rsslim;
    unsigned long startcode;
    unsigned long endcode;
    unsigned  long startstack;
    unsigned  long kstkesp;
    unsigned  long kstkeip;
    unsigned long signal;
    unsigned long blocked;
    unsigned long sigignore;
    unsigned long sigcatch;
    unsigned long wchan;
    unsigned long nswap;
    unsigned long  cnswap;
    int exit_signal;
    int processor;
    unsigned int rt_priority;
    unsigned int policy;
    long long unsigned int delayacct_blkio_ticks;
    unsigned long guest_Time;
    long cguest_time;
    unsigned long start_data;
    unsigned long end_data;
    unsigned long start_brk;
    unsigned long arg_start;
    unsigned long arg_end;
    unsigned long env_start;
    unsigned long env_end;
    int exit_code;

    FILE *file;
    char statusFile[100];
    sprintf(statusFile, "/proc/%d/stat", processId);

    file = fopen(statusFile, "r");
    if (file) {
        fscanf(file, "%d %s %c %d %d %d %d %d %u     %lu %lu %lu %lu    %lu %lu %ld %ld   %ld %ld %ld %ld  %llu  %lu   %ld %lu %lu %lu %lu %lu %lu   %lu %lu %lu %lu  %lu %lu %lu %d %d %u %u %llu %lu %ld %lu %lu %lu %lu %lu %lu %lu %d ", &pid, comm, &state, &ppid,&pgrp, &session, &tty_nr, &tpgid, &flags, &minflt, &cminflt, &majflt, &cmajflt, &utime, &stime,&cutime, &cstime, &priority, &nice, &numThreads, &itrealvalue, &starttime, &vsize, &rss, &rsslim , &startcode, &endcode, &startstack , &kstkesp, &kstkeip, &signal, &blocked, &sigignore, &sigcatch, &wchan, &nswap, &cnswap, &exit_signal, &processor, &rt_priority, &policy, &delayacct_blkio_ticks, &guest_Time, &cguest_time, &start_data, &end_data, &start_brk, &arg_start, &arg_end, &env_start, &env_end, &exit_code);

        if (valueName.compare("PID") == 0) {
            variable = QString::number(pid);
        } else if (valueName.compare("COMM") == 0) {
            variable = comm;
        } else if (valueName.compare("State") == 0) {
            variable.push_back(state);
        } else if (valueName.compare("Parent PID") == 0) {
            variable = QString::number(ppid);
        } else if (valueName.compare("PGRP") == 0) {
            variable = QString::number(pgrp);
        } else if (valueName.compare("Session") == 0) {
            variable = QString::number(session);
        } else if (valueName.compare("TTY_NR") == 0) {
            variable = QString::number(tty_nr);
        } else if (valueName.compare("TPGID") == 0) {
            variable = QString::number(tpgid);
        } else if (valueName.compare("Flags") == 0) {
            variable = QString::number(flags);
        } else if (valueName.compare("Minflt") == 0) {
            char string[100];
            sprintf(string, "%lu", minflt);
            variable = string;
        } else if (valueName.compare("CMinflt") == 0) {
            char string[100];
            sprintf(string, "%lu", cminflt);
            variable = string;
        } else if (valueName.compare("Majflt") == 0) {
            char string[100];
            sprintf(string, "%lu", majflt);
            variable = string;
        } else if (valueName.compare("CMajflt") == 0) {
            char string[100];
            sprintf(string, "%lu", cmajflt);
            //
            variable = string;
        } else if (valueName.compare("Utime") == 0) {
            char string[100];
            sprintf(string, "%lu", utime);
            variable = string;
        } else if (valueName.compare("Stime") == 0) {
            char string[100];
            sprintf(string, "%lu", stime);
            variable = string;
        } else if (valueName.compare("Cutime") == 0) {
            char string[100];
            sprintf(string, "%lu", cutime);
            variable = string;
        } else if (valueName.compare("CStime") == 0) {
            char string[100];
            sprintf(string, "%lu", cstime);
            variable = string;
        } else if (valueName.compare("Priority") == 0) {
            char string[100];
            sprintf(string, "%lu", priority);
            variable = string;
        } else if (valueName.compare("Nice") == 0) {
            char string[100];
            sprintf(string, "%lu", nice);
            variable = string;
        } else if (valueName.compare("Numthreads") == 0) {
            char string[100];
            sprintf(string, "%lu", numThreads);
            variable = string;
        } else if (valueName.compare("ITrealvalue") == 0) {
            char string[100];
            sprintf(string, "%lu", itrealvalue);
            variable = string;
        } else if (valueName.compare("Starttime") == 0) {
            char string[100];
            sprintf(string, "%llu", starttime);
            variable = string;
        } else if (valueName.compare("VSize") == 0) {
            char string[100];
            sprintf(string, "%lu", vsize);
            variable = string;
        } else if (valueName.compare("RSS") == 0) {
            char string[100];
            sprintf(string, "%lu", rss);
            variable = string;
        } else if (valueName.compare("RSSLim") == 0) {
            char string[100];
            sprintf(string, "%lu", rsslim);
            variable = string;
        } else if (valueName.compare("StartCode") == 0) {
            char string[100];
            sprintf(string, "%lu", startcode);
            variable = string;
        } else if (valueName.compare("Endcode") == 0) {
            char string[100];
            sprintf(string, "%lu", endcode);
            variable = string;
        } else if (valueName.compare("Startstack") == 0) {
            char string[100];
            sprintf(string, "%lu", startstack);
            variable = string;
        } else if (valueName.compare("Kstkesp") == 0) {
            char string[100];
            sprintf(string, "%lu", kstkesp);
            variable = string;
        } else if (valueName.compare("Kstkeip") == 0) {
            char string[100];
            sprintf(string, "%lu", kstkeip);
            variable = string;
        } else if (valueName.compare("Signal") == 0) {
            char string[100];
            sprintf(string, "%lu", signal);
            variable = string;
        } else if (valueName.compare("Blocked") == 0) {
            char string[100];
            sprintf(string, "%lu", blocked);
            variable = string;
        } else if (valueName.compare("Sigignore") == 0) {
            char string[100];
            sprintf(string, "%lu", sigignore);
            variable = string;
        } else if (valueName.compare("Sigcatch") == 0) {
            char string[100];
            sprintf(string, "%lu", sigcatch);
            variable = string;
        } else if (valueName.compare("Wchan") == 0) {
            char string[100];
            sprintf(string, "%lu", wchan);
            variable = string;
        } else if (valueName.compare("Nswap") == 0) {
            char string[100];
            sprintf(string, "%lu", nswap);
            variable = string;
        } else if (valueName.compare("CNswap") == 0) {
            char string[100];
            sprintf(string, "%lu", cnswap);
            variable = string;
        } else if (valueName.compare("Exit Signal") == 0) {
            variable = QString::number(exit_signal);
        } else if (valueName.compare("Processor") == 0) {
            variable = QString::number(processor);
        } else if (valueName.compare("RT_priority") == 0) {
            variable = QString::number(rt_priority);
        } else if (valueName.compare("Policy") == 0) {
            variable = QString::number(policy);
        } else if (valueName.compare("Aggregated Block") == 0) {
            char string[100];
            sprintf(string, "%llu", delayacct_blkio_ticks);
            variable = string;
        } else if (valueName.compare("Guest Time") == 0) {
            char string[100];
            sprintf(string, "%lu", guest_Time);
            variable = string;
        } else if (valueName.compare("C Guest Time") == 0) {
            char string[100];
            sprintf(string, "%lu", cguest_time);
            variable = string;
        } else if (valueName.compare("Start Data") == 0) {
            char string[100];
            sprintf(string, "%lu", start_data);
            variable = string;
        } else if (valueName.compare("End Data") == 0) {
            char string[100];
            sprintf(string, "%lu", end_data);
            variable = string;
        } else if (valueName.compare("Start BK") == 0) {
            char string[100];
            sprintf(string, "%lu", start_brk);
            variable = string;
        } else if (valueName.compare("Arg Start") == 0) {
            char string[100];
            sprintf(string, "%lu", arg_start);
            variable = string;
        } else if (valueName.compare("Arg End") == 0) {
            char string[100];
            sprintf(string, "%lu", arg_end);
            variable = string;
        } else if (valueName.compare("Env Start") == 0) {
            char string[100];
            sprintf(string, "%lu", env_start);
            variable = string;
        } else if (valueName.compare("Env End") == 0) {
            char string[100];
            sprintf(string, "%lu", env_end);
            variable = string;
        } else if (valueName.compare("Exit Code") == 0) {
            variable = QString::number(exit_code);
        } else {
            variable = "I'm a variable!";
        }
    }

    fclose(file);
    return variable;
}
