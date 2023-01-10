#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

   connect(ui->pushButton,SIGNAL(clicked()),this,SLOT(OpenWindow()));
   connect(ui->pushButton,SIGNAL(clicked()),ptr,SLOT(DisplayWindow()));
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::OpenWindow()
{
    qDebug()<<"open";

    ptr->show();
}

