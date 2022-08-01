#ifndef USERCONTROLLER_H
#define USERCONTROLLER_H
#include "Task/User.h"
#include "Task/mainwindow.h"
#include "Task/login.h"
class userControl:public QMainWindow{
public:

    QVector <User*> u ;
    MainWindow *m;
    login *l;
    userControl(){
        m = new MainWindow();
        l = new login();
        m->show();
        connect(m, &MainWindow::login, this, &userControl::showLogin);
        connect(l, &login::MainWindow, this, &userControl::showMainwindow);
    }
    private slots:
    void showLogin(User* newUser){
        u.append(newUser);
        l->setData(u);
        l->setList();
        m->close();
        l->show();
    }
    void showMainwindow(){
        l->close();
        m->show();
    }
};
#endif // USERCONTROLLER_H
