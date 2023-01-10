#ifndef DIALOG_H
#define DIALOG_H

#include <QDialog>
using namespace std;
namespace Ui {
class Dialog;
}

class Dialog : public QDialog
{
    Q_OBJECT

public:
    explicit Dialog(QWidget *parent = nullptr);
    ~Dialog();
   void data(vector<QString>v);
private:
    Ui::Dialog *ui;
};

#endif // DIALOG_H
