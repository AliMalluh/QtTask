#include "login.h"
#include "ui_login.h"
#include "mainwindow.h"
#include <QMessageBox>
login::login(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::login)
{
    ui->setupUi(this);
    QVector <User*> u = userControl::get();
    for (auto i : u ){
        ui->listWidget->addItem(i->getName());
    }
}

login::~login()
{
    delete ui;
}

void login::on_Done_clicked()
{
    QString name = ui->NameEdit->text();
    QString pass = ui->PassEdit->text();
    QVector <User*> u = userControl::get();
    bool temp = false;
    for (auto i : u ){
       if(name==i->getName())
       {
           if (pass == i->getPassword())
           {
            temp = true;
           }
       }
    }
    if (temp){
    QMessageBox::about(this,"Notify","Successfully");
    }
    else QMessageBox::warning(this,"Notify","Not verifyed");
}

void login::on_pushButton_clicked()
{
    hide();
    MainWindow *main;
    main = new MainWindow(this);
    main->show();
}
