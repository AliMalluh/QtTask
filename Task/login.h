#ifndef LOGIN_H
#define LOGIN_H

#include <qt5/QtWidgets/QDialog>
#include "Task/User.h"
namespace Ui {
class login;
}

class login : public QDialog
{
    Q_OBJECT

public:
    explicit login(QWidget *parent = 0);
    ~login();
    void setList();
    void setData(QVector <User*> list){
        this->list = list;
    }
    QVector <User*> getData(){
        return list;
    }


signals:
    void MainWindow();

private slots:
    void on_Done_clicked();

    void on_pushButton_clicked();

private:
    Ui::login *ui;
    QVector <User*> list;

};

#endif // LOGIN_H
