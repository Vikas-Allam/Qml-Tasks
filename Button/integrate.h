#ifndef INTEGRATE_H
#define INTEGRATE_H

#include<QTimer>
#include <QObject>
#include<QVariant>

class Integrate:public QObject
{
    Q_OBJECT
public:
    Integrate(QObject *parent=nullptr);
signals:
      void notice(QVariant data);
public slots:

     void stop();
     void start();
   void close();
   void close1();
   void close2();

private:
    QTimer *timer=new QTimer(this);
     QTimer *timer2=new QTimer(this);

      QTimer *timer3=new QTimer(this);
    QString s,s1,s2;
};

#endif // INTEGRATE_H
