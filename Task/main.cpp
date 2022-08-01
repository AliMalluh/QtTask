#include <qt5/QtWidgets/QApplication>
#include <string>
#include <vector>
#include "Task/usercontroller.h"


int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    userControl ms;
    return a.exec();
}
