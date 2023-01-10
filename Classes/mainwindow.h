#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include"test.h"
QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

public slots:

 void OpenWindow();
private:
    Test *ptr=new Test();

    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
