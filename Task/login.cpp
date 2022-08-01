#include "Task/login.h"
#include "Task/ui_login.h"
#include <qt5/QtWidgets/QMessageBox>
login::login(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::login)
{
    ui->setupUi(this);
}

void login :: setList(){
    ui->listWidget->clear();
    for (auto i : list ){
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
    bool temp = false;
    for (auto i : list ){
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
    emit MainWindow();
}
