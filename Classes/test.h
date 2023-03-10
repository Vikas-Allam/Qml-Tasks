#ifndef TEST_H
#define TEST_H

#include <QDialog>

namespace Ui {
class Test;
}

class Test : public QDialog
{
    Q_OBJECT

public:
    explicit Test(QWidget *parent = nullptr);
    ~Test();
public slots:
    void DisplayWindow();

private:
    Ui::Test *ui;
};

#endif // TEST_H
