#ifndef TEST_H
#define TEST_H

#include <QObject>

class test:public QObject
{
    Q_OBJECT
public:
    test();
public slots:
    void fun();
};

#endif // TEST_H
