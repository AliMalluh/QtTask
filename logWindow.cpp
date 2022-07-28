#include "logwindow.h"
#include "ui_logWindow.h"
#include "User.h"
logWindow::logWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::logWindow)
{
    ui->setupUi(this);

}

logWindow::~logWindow()
{
    delete ui;
}

