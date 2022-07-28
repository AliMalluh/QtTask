#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "login.h"
#include "User.h"
#include "usercontroller.h"
namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();


private slots:
    void on_Done_clicked();

    void on_MaleBox_clicked();

    void on_FemaleBox_clicked();

private:
    Ui::MainWindow *ui;
    login  *log;
};

#endif // MAINWINDOW_H
