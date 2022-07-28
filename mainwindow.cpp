#include "mainwindow.h"
#include "ui_mainwindow.h"


MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    ui->NameEdit->setPlaceholderText("Enter Your Name:");
    ui->PassEdit->setPlaceholderText("Enter Your Password:");
    ui->EmailEdit->setPlaceholderText("Enter Your Email:");
    ui->PhoneEdit->setPlaceholderText("Enter Your Phone:");

}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_Done_clicked()
{
    QString name = ui->NameEdit->text();
    QString pass = ui->PassEdit->text();
    QString email = ui->EmailEdit->text();
    QString phone = ui->PhoneEdit->text();
    QString gender;
    if(ui->MaleBox->isChecked())
    {
        gender = ui->MaleBox->text();
    }else gender = ui->FemaleBox->text();
    QString date = ui->dateEdit->date().toString();
    User* user = new User(name,email,pass,phone,gender,date);
    userControl::Add(user);
    hide();
    log = new login(this);
    log->show();

}

void MainWindow::on_MaleBox_clicked()
{
    ui->FemaleBox->setChecked(false);
}

void MainWindow::on_FemaleBox_clicked()
{
    ui->MaleBox->setChecked(false);

}
