#include "mainwindow.h"
#include <QApplication>
#include <string>
#include <vector>


QVector <User*> userControl::v = QVector <User*>();
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();
    return a.exec();
}
