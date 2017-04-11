#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow) {

    ui->setupUi(this);
    this->setWindowTitle("Gazelle");
    headerText = ui->headerText;
    viewProcessesButton = ui->viewProcessesButton;
    selectDeselectAllButton = ui->selectDeselectAll;
    selected = false;
    connect(selectDeselectAllButton, SIGNAL(clicked()), this, SLOT(selectDeselectButtonClicked()));
    connect(viewProcessesButton, SIGNAL(clicked()), this, SLOT(viewProcessesButtonClicked()));
    checkBoxes = new QList<QCheckBox*>();
    option1 = ui->checkBox1;
    option2 = ui->checkBox2;
    option3 = ui->checkBox3;
    option4 = ui->checkBox4;
    option5 = ui->checkBox5;
    option6 = ui->checkBox6;
    option7 = ui->checkBox7;
    option8 = ui->checkBox8;
    option9 = ui->checkBox9;
    option10 = ui->checkBox10;
    option11 = ui->checkBox11;
    option12 = ui->checkBox12;
    option13 = ui->checkBox13;
    option14 = ui->checkBox14;
    option15 = ui->checkBox15;
    option16 = ui->checkBox16;
    option17 = ui->checkBox17;
    option18 = ui->checkBox18;
    option19 = ui->checkBox19;
    option20 = ui->checkBox20;
    option21 = ui->checkBox21;
    option22 = ui->checkBox22;
    option23 = ui->checkBox23;
    option24 = ui->checkBox24;
    option25 = ui->checkBox25;
    option26 = ui->checkBox26;
    option27 = ui->checkBox27;
    option28 = ui->checkBox28;
    option29 = ui->checkBox29;
    option30 = ui->checkBox30;
    option31 = ui->checkBox31;
    option32 = ui->checkBox32;
    option33 = ui->checkBox33;
    option34 = ui->checkBox34;
    option35 = ui->checkBox35;
    option36 = ui->checkBox36;
    option37 = ui->checkBox37;
    option38 = ui->checkBox38;
    option39 = ui->checkBox39;
    option40 = ui->checkBox40;
    option41 = ui->checkBox41;
    option42 = ui->checkBox42;
    option43 = ui->checkBox43;
    option44 = ui->checkBox44;
    option45 = ui->checkBox45;
    option46 = ui->checkBox46;
    option47 = ui->checkBox47;
    option48 = ui->checkBox48;
    option49 = ui->checkBox49;
    option50 = ui->checkBox50;
    option51 = ui->checkBox51;
    option52 = ui->checkBox52;
    option1->installEventFilter(this);
    option2->installEventFilter(this);
    option3->installEventFilter(this);
    option4->installEventFilter(this);
    option5->installEventFilter(this);
    option6->installEventFilter(this);
    option7->installEventFilter(this);
    option8->installEventFilter(this);
    option9->installEventFilter(this);
    option10->installEventFilter(this);
    option11->installEventFilter(this);
    option12->installEventFilter(this);
    option13->installEventFilter(this);
    option14->installEventFilter(this);
    option15->installEventFilter(this);
    option16->installEventFilter(this);
    option17->installEventFilter(this);
    option18->installEventFilter(this);
    option19->installEventFilter(this);
    option20->installEventFilter(this);
    option21->installEventFilter(this);
    option22->installEventFilter(this);
    option23->installEventFilter(this);
    option24->installEventFilter(this);
    option25->installEventFilter(this);
    option26->installEventFilter(this);
    option27->installEventFilter(this);
    option28->installEventFilter(this);
    option29->installEventFilter(this);
    option30->installEventFilter(this);
    option31->installEventFilter(this);
    option32->installEventFilter(this);
    option33->installEventFilter(this);
    option34->installEventFilter(this);
    option35->installEventFilter(this);
    option36->installEventFilter(this);
    option37->installEventFilter(this);
    option38->installEventFilter(this);
    option39->installEventFilter(this);
    option40->installEventFilter(this);
    option41->installEventFilter(this);
    option42->installEventFilter(this);
    option43->installEventFilter(this);
    option44->installEventFilter(this);
    option45->installEventFilter(this);
    option46->installEventFilter(this);
    option47->installEventFilter(this);
    option48->installEventFilter(this);
    option49->installEventFilter(this);
    option50->installEventFilter(this);
    option51->installEventFilter(this);
    option52->installEventFilter(this);
    checkBoxes->append(option1);
    checkBoxes->append(option2);
    checkBoxes->append(option3);
    checkBoxes->append(option4);
    checkBoxes->append(option5);
    checkBoxes->append(option6);
    checkBoxes->append(option7);
    checkBoxes->append(option8);
    checkBoxes->append(option9);
    checkBoxes->append(option10);
    checkBoxes->append(option11);
    checkBoxes->append(option12);
    checkBoxes->append(option13);
    checkBoxes->append(option14);
    checkBoxes->append(option15);
    checkBoxes->append(option16);
    checkBoxes->append(option17);
    checkBoxes->append(option18);
    checkBoxes->append(option19);
    checkBoxes->append(option20);
    checkBoxes->append(option21);
    checkBoxes->append(option22);
    checkBoxes->append(option23);
    checkBoxes->append(option24);
    checkBoxes->append(option25);
    checkBoxes->append(option26);
    checkBoxes->append(option27);
    checkBoxes->append(option28);
    checkBoxes->append(option29);
    checkBoxes->append(option30);
    checkBoxes->append(option31);
    checkBoxes->append(option32);
    checkBoxes->append(option33);
    checkBoxes->append(option34);
    checkBoxes->append(option35);
    checkBoxes->append(option36);
    checkBoxes->append(option37);
    checkBoxes->append(option38);
    checkBoxes->append(option39);
    checkBoxes->append(option40);
    checkBoxes->append(option41);
    checkBoxes->append(option42);
    checkBoxes->append(option43);
    checkBoxes->append(option44);
    checkBoxes->append(option45);
    checkBoxes->append(option46);
    checkBoxes->append(option47);
    checkBoxes->append(option48);
    checkBoxes->append(option49);
    checkBoxes->append(option50);
    checkBoxes->append(option51);
    checkBoxes->append(option52);
}

MainWindow::~MainWindow() {
    delete ui;
}

void MainWindow::viewProcessesButtonClicked() {
    ProcessDetailsWindow *processDetailsWindow = new ProcessDetailsWindow;
    for (int i = 0; i < checkBoxes->size(); i++) {
        if (checkBoxes->at(i)->isChecked()) {
            processDetailsWindow->headers->append(checkBoxes->at(i)->text());
        }
    }

    processDetailsWindow->populateProcessTable();
    Utils::setWindowToCenter(processDetailsWindow);
    processDetailsWindow->show();
}

void MainWindow::selectDeselectButtonClicked() {
    if (selected) {
        for (int i = 0; i < checkBoxes->size(); i++) {
            checkBoxes->at(i)->setChecked(false);
        }
        selected = false;
    } else {
        for (int i = 0; i < checkBoxes->size(); i++) {
            checkBoxes->at(i)->setChecked(true);
        }
        selected = true;
    }
}

bool MainWindow::eventFilter(QObject *obj, QEvent *event) {

    if (obj == (QObject*)option1) {
        if (event->type() == QEvent::Enter)
        {
            headerText->setText("The process\'s id.");
        }
        if (event->type() == QEvent::Leave)
        {
            headerText->setText("Mouse over an option to begin.");
        }
        return QWidget::eventFilter(obj, event);
    }
    if (obj == (QObject*)option2) {
        if (event->type() == QEvent::Enter)
        {
            headerText->setText("The process\'s comm.");
        }
        if (event->type() == QEvent::Leave)
        {
            headerText->setText("Mouse over an option to begin.");
        }
        return QWidget::eventFilter(obj, event);
    }
    if (obj == (QObject*)option3) {
        if (event->type() == QEvent::Enter)
        {
            headerText->setText("The running state of the process.");
        }
        if (event->type() == QEvent::Leave)
        {
            headerText->setText("Mouse over an option to begin.");
        }
        return QWidget::eventFilter(obj, event);
    }
    if (obj == (QObject*)option4) {
        if (event->type() == QEvent::Enter)
        {
            headerText->setText("The process\'s parent id.");
        }
        if (event->type() == QEvent::Leave)
        {
            headerText->setText("Mouse over an option to begin.");
        }
        return QWidget::eventFilter(obj, event);
    }
    if (obj == (QObject*)option5) {
        if (event->type() == QEvent::Enter)
        {
            headerText->setText("The process group ID of the process.");
        }
        if (event->type() == QEvent::Leave)
        {
            headerText->setText("Mouse over an option to begin.");
        }
        return QWidget::eventFilter(obj, event);
    }
    if (obj == (QObject*)option6) {
        if (event->type() == QEvent::Enter)
        {
            headerText->setText("The session ID of the process.");
        }
        if (event->type() == QEvent::Leave)
        {
            headerText->setText("Mouse over an option to begin.");
        }
        return QWidget::eventFilter(obj, event);
    }
    if (obj == (QObject*)option7) {
        if (event->type() == QEvent::Enter)
        {
            headerText->setText("The controlling terminal of the process.");
        }
        if (event->type() == QEvent::Leave)
        {
            headerText->setText("Mouse over an option to begin.");
        }
        return QWidget::eventFilter(obj, event);
    }
    if (obj == (QObject*)option8) {
        if (event->type() == QEvent::Enter)
        {
            headerText->setText("The ID of the foreground process group of the controlling terminal of the process.");
        }
        if (event->type() == QEvent::Leave)
        {
            headerText->setText("Mouse over an option to begin.");
        }
        return QWidget::eventFilter(obj, event);
    }
    if (obj == (QObject*)option9) {
        if (event->type() == QEvent::Enter)
        {
            headerText->setText("The kernel flags word of the process.");
        }
        if (event->type() == QEvent::Leave)
        {
            headerText->setText("Mouse over an option to begin.");
        }
        return QWidget::eventFilter(obj, event);
    }
    if (obj == (QObject*)option10) {
        if (event->type() == QEvent::Enter)
        {
            headerText->setText("The number of minor faults the process has made which have not required loading a memory page from disk.");
        }
        if (event->type() == QEvent::Leave)
        {
            headerText->setText("Mouse over an option to begin.");
        }
        return QWidget::eventFilter(obj, event);
    }
    if (obj == (QObject*)option11) {
        if (event->type() == QEvent::Enter)
        {
            headerText->setText("The number of minor faults that the process\'s waited-for children have made.");
        }
        if (event->type() == QEvent::Leave)
        {
            headerText->setText("Mouse over an option to begin.");
        }
        return QWidget::eventFilter(obj, event);
    }
    if (obj == (QObject*)option12) {
        if (event->type() == QEvent::Enter)
        {
            headerText->setText("The number of major faults the process has made which have required loading a memory page from disk.");
        }
        if (event->type() == QEvent::Leave)
        {
            headerText->setText("Mouse over an option to begin.");
        }
        return QWidget::eventFilter(obj, event);
    }
    if (obj == (QObject*)option13) {
        if (event->type() == QEvent::Enter)
        {
            headerText->setText("The number of major faults that the process's waited-for children have made.");
        }
        if (event->type() == QEvent::Leave)
        {
            headerText->setText("Mouse over an option to begin.");
        }
        return QWidget::eventFilter(obj, event);
    }
    if (obj == (QObject*)option14) {
        if (event->type() == QEvent::Enter)
        {
            headerText->setText("Amount of time that this process has been scheduled in user mode.");
        }
        if (event->type() == QEvent::Leave)
        {
            headerText->setText("Mouse over an option to begin.");
        }
        return QWidget::eventFilter(obj, event);
    }
    if (obj == (QObject*)option15) {
        if (event->type() == QEvent::Enter)
        {
            headerText->setText("Amount of time that this process has been scheduled in kernel mode.");
        }
        if (event->type() == QEvent::Leave)
        {
            headerText->setText("Mouse over an option to begin.");
        }
        return QWidget::eventFilter(obj, event);
    }
    if (obj == (QObject*)option16) {
        if (event->type() == QEvent::Enter)
        {
            headerText->setText("Amount of time that this process's waited-for children have been scheduled in user mode.");
        }
        if (event->type() == QEvent::Leave)
        {
            headerText->setText("Mouse over an option to begin.");
        }
        return QWidget::eventFilter(obj, event);
    }
    if (obj == (QObject*)option17) {
        if (event->type() == QEvent::Enter)
        {
            headerText->setText("Amount of time that this process's waited-for children have been scheduled in kernel mode.");
        }
        if (event->type() == QEvent::Leave)
        {
            headerText->setText("Mouse over an option to begin.");
        }
        return QWidget::eventFilter(obj, event);
    }
    if (obj == (QObject*)option18) {
        if (event->type() == QEvent::Enter)
        {
            headerText->setText("Number in the range -2 to -100, corresponding to real-time priorities.");
        }
        if (event->type() == QEvent::Leave)
        {
            headerText->setText("Mouse over an option to begin.");
        }
        return QWidget::eventFilter(obj, event);
    }
    if (obj == (QObject*)option19) {
        if (event->type() == QEvent::Enter)
        {
            headerText->setText("Nice value.");
        }
        if (event->type() == QEvent::Leave)
        {
            headerText->setText("Mouse over an option to begin.");
        }
        return QWidget::eventFilter(obj, event);
    }
    if (obj == (QObject*)option20) {
        if (event->type() == QEvent::Enter)
        {
            headerText->setText("Number of threads in this process");
        }
        if (event->type() == QEvent::Leave)
        {
            headerText->setText("Mouse over an option to begin.");
        }
        return QWidget::eventFilter(obj, event);
    }
    if (obj == (QObject*)option21) {
        if (event->type() == QEvent::Enter)
        {
            headerText->setText("The time in jiffies before the next SIGALRM is sent to the process due to an interval timer.");
        }
        if (event->type() == QEvent::Leave)
        {
            headerText->setText("Mouse over an option to begin.");
        }
        return QWidget::eventFilter(obj, event);
    }
    if (obj == (QObject*)option22) {
        if (event->type() == QEvent::Enter)
        {
            headerText->setText("The time the process started after system boot.");
        }
        if (event->type() == QEvent::Leave)
        {
            headerText->setText("Mouse over an option to begin.");
        }
        return QWidget::eventFilter(obj, event);
    }
    if (obj == (QObject*)option23) {
        if (event->type() == QEvent::Enter)
        {
            headerText->setText("Virtual memory size in bytes.");
        }
        if (event->type() == QEvent::Leave)
        {
            headerText->setText("Mouse over an option to begin.");
        }
        return QWidget::eventFilter(obj, event);
    }
    if (obj == (QObject*)option24) {
        if (event->type() == QEvent::Enter)
        {
            headerText->setText("Resident Set Size: number of pages the process has in real memory.");
        }
        if (event->type() == QEvent::Leave)
        {
            headerText->setText("Mouse over an option to begin.");
        }
        return QWidget::eventFilter(obj, event);
    }
    if (obj == (QObject*)option25) {
        if (event->type() == QEvent::Enter)
        {
            headerText->setText("Current soft limit in bytes on the rss of the process");
        }
        if (event->type() == QEvent::Leave)
        {
            headerText->setText("Mouse over an option to begin.");
        }
        return QWidget::eventFilter(obj, event);
    }
    if (obj == (QObject*)option26) {
        if (event->type() == QEvent::Enter)
        {
            headerText->setText("The address above which program text can run.");
        }
        if (event->type() == QEvent::Leave)
        {
            headerText->setText("Mouse over an option to begin.");
        }
        return QWidget::eventFilter(obj, event);
    }
    if (obj == (QObject*)option27) {
        if (event->type() == QEvent::Enter)
        {
            headerText->setText("The address below which program text can run.");
        }
        if (event->type() == QEvent::Leave)
        {
            headerText->setText("Mouse over an option to begin.");
        }
        return QWidget::eventFilter(obj, event);
    }
    if (obj == (QObject*)option28) {
        if (event->type() == QEvent::Enter)
        {
            headerText->setText("The address of the start (i.e., bottom) of the stack.");
        }
        if (event->type() == QEvent::Leave)
        {
            headerText->setText("Mouse over an option to begin.");
        }
        return QWidget::eventFilter(obj, event);
    }
    if (obj == (QObject*)option29) {
        if (event->type() == QEvent::Enter)
        {
            headerText->setText("The current value of ESP (stack pointer), as found in the kernel stack page for the process.");
        }
        if (event->type() == QEvent::Leave)
        {
            headerText->setText("Mouse over an option to begin.");
        }
        return QWidget::eventFilter(obj, event);
    }
    if (obj == (QObject*)option30) {
        if (event->type() == QEvent::Enter)
        {
            headerText->setText("The current EIP.");
        }
        if (event->type() == QEvent::Leave)
        {
            headerText->setText("Mouse over an option to begin.");
        }
        return QWidget::eventFilter(obj, event);
    }
    if (obj == (QObject*)option31) {
        if (event->type() == QEvent::Enter)
        {
            headerText->setText("The bitmap of pending signals, displayed as a decimal number.");
        }
        if (event->type() == QEvent::Leave)
        {
            headerText->setText("Mouse over an option to begin.");
        }
        return QWidget::eventFilter(obj, event);
    }
    if (obj == (QObject*)option32) {
        if (event->type() == QEvent::Enter)
        {
            headerText->setText("The bitmap of blocked signals, displayed as a decimal number.");
        }
        if (event->type() == QEvent::Leave)
        {
            headerText->setText("Mouse over an option to begin.");
        }
        return QWidget::eventFilter(obj, event);
    }
    if (obj == (QObject*)option33) {
        if (event->type() == QEvent::Enter)
        {
            headerText->setText("The bitmap of ignored signals, displayed as a decimal number.");
        }
        if (event->type() == QEvent::Leave)
        {
            headerText->setText("Mouse over an option to begin.");
        }
        return QWidget::eventFilter(obj, event);
    }
    if (obj == (QObject*)option34) {
        if (event->type() == QEvent::Enter)
        {
            headerText->setText("The bitmap of caught signals, displayed as a decimal number.");
        }
        if (event->type() == QEvent::Leave)
        {
            headerText->setText("Mouse over an option to begin.");
        }
        return QWidget::eventFilter(obj, event);
    }
    if (obj == (QObject*)option35) {
        if (event->type() == QEvent::Enter)
        {
            headerText->setText("This is the \"channel\" in which the process is waiting.  It is the address of a location in the kernel where the process is sleeping.");
        }
        if (event->type() == QEvent::Leave)
        {
            headerText->setText("Mouse over an option to begin.");
        }
        return QWidget::eventFilter(obj, event);
    }
    if (obj == (QObject*)option36) {
        if (event->type() == QEvent::Enter)
        {
            headerText->setText("Number of pages swapped (not maintained).");
        }
        if (event->type() == QEvent::Leave)
        {
            headerText->setText("Mouse over an option to begin.");
        }
        return QWidget::eventFilter(obj, event);
    }
    if (obj == (QObject*)option37) {
        if (event->type() == QEvent::Enter)
        {
            headerText->setText("Cumulative nswap for child processes.");
        }
        if (event->type() == QEvent::Leave)
        {
            headerText->setText("Mouse over an option to begin.");
        }
        return QWidget::eventFilter(obj, event);
    }
    if (obj == (QObject*)option38) {
        if (event->type() == QEvent::Enter)
        {
            headerText->setText("Signal to be sent to parent when process dies.");
        }
        if (event->type() == QEvent::Leave)
        {
            headerText->setText("Mouse over an option to begin.");
        }
        return QWidget::eventFilter(obj, event);
    }
    if (obj == (QObject*)option39) {
        if (event->type() == QEvent::Enter)
        {
            headerText->setText("CPU number last executed on.");
        }
        if (event->type() == QEvent::Leave)
        {
            headerText->setText("Mouse over an option to begin.");
        }
        return QWidget::eventFilter(obj, event);
    }
    if (obj == (QObject*)option40) {
        if (event->type() == QEvent::Enter)
        {
            headerText->setText("Real-time scheduling priority, a number in the range 1 to 99.");
        }
        if (event->type() == QEvent::Leave)
        {
            headerText->setText("Mouse over an option to begin.");
        }
        return QWidget::eventFilter(obj, event);
    }
    if (obj == (QObject*)option41) {
        if (event->type() == QEvent::Enter)
        {
            headerText->setText("Scheduling policy (see sched_setscheduler(2)). that sets both the scheduling policy and parameters for the thread.");
        }
        if (event->type() == QEvent::Leave)
        {
            headerText->setText("Mouse over an option to begin.");
        }
        return QWidget::eventFilter(obj, event);
    }
    if (obj == (QObject*)option42) {
        if (event->type() == QEvent::Enter)
        {
            headerText->setText("Aggregated block I/O delays, measured in clock ticks centiseconds.");
        }
        if (event->type() == QEvent::Leave)
        {
            headerText->setText("Mouse over an option to begin.");
        }
        return QWidget::eventFilter(obj, event);
    }
    if (obj == (QObject*)option43) {
        if (event->type() == QEvent::Enter)
        {
            headerText->setText("Guest time of the process (time spent running a virtual CPU for a guest operating system), measured in clock ticks.");
        }
        if (event->type() == QEvent::Leave)
        {
            headerText->setText("Mouse over an option to begin.");
        }
        return QWidget::eventFilter(obj, event);
    }
    if (obj == (QObject*)option44) {
        if (event->type() == QEvent::Enter)
        {
            headerText->setText("Guest time of the process (time spent running a virtual CPU for a guest operating system), measured in clock ticks");
        }
        if (event->type() == QEvent::Leave)
        {
            headerText->setText("Mouse over an option to begin.");
        }
        return QWidget::eventFilter(obj, event);
    }
    if (obj == (QObject*)option45) {
        if (event->type() == QEvent::Enter)
        {
            headerText->setText("Address above which program initialized and uninitialized (BSS) data are placed");
        }
        if (event->type() == QEvent::Leave)
        {
            headerText->setText("Mouse over an option to begin.");
        }
        return QWidget::eventFilter(obj, event);
    }
    if (obj == (QObject*)option46) {
        if (event->type() == QEvent::Enter)
        {
            headerText->setText("Address below which program initialized and uninitialized (BSS) data are placed");
        }
        if (event->type() == QEvent::Leave)
        {
            headerText->setText("Mouse over an option to begin.");
        }
        return QWidget::eventFilter(obj, event);
    }
    if (obj == (QObject*)option47) {
        if (event->type() == QEvent::Enter)
        {
            headerText->setText("Address above which program heap can be expanded with brk(2).ced");
        }
        if (event->type() == QEvent::Leave)
        {
            headerText->setText("Mouse over an option to begin.");
        }
        return QWidget::eventFilter(obj, event);
    }
    if (obj == (QObject*)option48) {
        if (event->type() == QEvent::Enter)
        {
            headerText->setText("Address above which program command-line arguments (argv) are placed.");
        }
        if (event->type() == QEvent::Leave)
        {
            headerText->setText("Mouse over an option to begin.");
        }
        return QWidget::eventFilter(obj, event);
    }
    if (obj == (QObject*)option49) {
        if (event->type() == QEvent::Enter)
        {
            headerText->setText("Address below program command-line arguments (argv) are placed.");
        }
        if (event->type() == QEvent::Leave)
        {
            headerText->setText("Mouse over an option to begin.");
        }
        return QWidget::eventFilter(obj, event);
    }
    if (obj == (QObject*)option50) {
        if (event->type() == QEvent::Enter)
        {
            headerText->setText("Address above which program environment is placed.");
        }
        if (event->type() == QEvent::Leave)
        {
            headerText->setText("Mouse over an option to begin.");
        }
        return QWidget::eventFilter(obj, event);
    }
    if (obj == (QObject*)option51) {
        if (event->type() == QEvent::Enter)
        {
            headerText->setText("Address below which program environment is placed.");
        }
        if (event->type() == QEvent::Leave)
        {
            headerText->setText("Mouse over an option to begin.");
        }
        return QWidget::eventFilter(obj, event);
    }
    if (obj == (QObject*)option52) {
        if (event->type() == QEvent::Enter)
        {
            headerText->setText("The thread's exit status in the form reported by waitpid.");
        }
        if (event->type() == QEvent::Leave)
        {
            headerText->setText("Mouse over an option to begin.");
        }
        return QWidget::eventFilter(obj, event);
    }

    return QWidget::eventFilter(obj, event);
}
