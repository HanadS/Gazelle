#include "utils.h"

void Utils::setWindowToCenter(QWidget* window) {
    QSize size = window->sizeHint();
    QDesktopWidget* desktop = QApplication::desktop();
    int width = desktop->width();
    int height = desktop->height();
    int mw = size.width();
    int mh = size.height();
    int centerW = (width/2) - (mw/2);
    int centerH = (height/2) - (mh/2);
    window->move(centerW, centerH);
}


void Utils::getAllProcessIds(ArrayList *arrayList) {
    DIR *directory;
    struct dirent *entry;

    if ((directory = opendir ("/proc")) != NULL) {
      while ((entry = readdir (directory)) != NULL) {
        char firstLetter = entry->d_name[0];
        if (isdigit(firstLetter)) {
          int processNumber = atoi(entry->d_name);
          arrayList->add(processNumber);
        }
      }
      closedir (directory);

    } else {
        printf("Could not open proc directory for reading.\n");
    }
}

QString Utils::getProcessNameFromStatusFile(int processId) {
    QString processName;

    char line[100];
    FILE *file;

    char statusFile[25];
    sprintf(statusFile, "/proc/%d/status", processId);

    file = fopen(statusFile, "r");
    if (file) {
      /* For the process name, we only need the first line of text.
         We can also be reasonably sure that there will always be that
         first line in status files. So we won't do any error checking
         here. In other situations, we'd want to use a while loop. */
      fgets(line, sizeof(line), file);

      processName.sprintf("%s", line);

      fclose(file);

    }

    return processName.mid(6, processName.size());
}
