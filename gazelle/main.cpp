#include <Interfaces/introwindow.h>
#include <Logic/utils.h>

int main(int argc, char *argv[]) {

    /* Initialize application. */
    QApplication a(argc, argv);

    /* Initialize introduction window. */
    IntroWindow w;
    Utils::setWindowToCenter(&w);

    /* Show window. */
    w.show();

    return a.exec();

}
