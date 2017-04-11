#ifndef UTILS_H
#define UTILS_H

#include <QWidget>
#include <QString>
#include <dirent.h>
#include <stddef.h>
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <ctype.h>
#include <QDesktopWidget>
#include <QApplication>
#include <Logic/arraylist.h>

class Utils {
public:
    static void setWindowToCenter(QWidget* window);
    static void getAllProcessIds(ArrayList *arrayList);
    static QString getProcessNameFromStatusFile(int processId);


private:
    Utils() {}
};

#endif // UTILS_H
