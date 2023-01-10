#include "dialog.h"
#include "ui_dialog.h"

Dialog::Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog)
{
    ui->setupUi(this);
    connect(ui->pushButton,SIGNAL(clicked()),ui->listWidget,SLOT(clear()));
}
Dialog::~Dialog()
{
    delete ui;
}

void Dialog::data(vector<QString>v)
{

    for(int i=0;i<v.size();i++)
 ui->listWidget->addItem(v.at(i));
}
