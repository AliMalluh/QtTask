#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <qt5/QtWidgets/QMainWindow>
#include "Task/User.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

signals:
    void login(User*);


private slots:
    void on_Done_clicked();

    void on_MaleBox_clicked();

    void on_FemaleBox_clicked();

private:
    Ui::MainWindow *ui;
    //login  *log;
};

#endif // MAINWINDOW_H
