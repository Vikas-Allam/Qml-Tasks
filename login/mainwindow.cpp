#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "dialog.h"

#include<QMessageBox>
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    UserName="vikas";
            Password="9524";
            v.push_back("vikas");
            v.push_back("akash");
            v.push_back("vrushabh");
}
MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_clicked()
{

    Dialog *enter=new Dialog();
    QString User_Name=ui->lineEdit->text();
    QString Password_=ui->lineEdit_2->text();
    enter->data(v);
    if(User_Name==UserName&&Password==Password_)
    {

    QMessageBox::information(this,"Alert","LOGIN SUCCESS");
        enter->show();
    }
    else
{
        QMessageBox::information(this,"Alert","LOGIN Failed");
    }


}

