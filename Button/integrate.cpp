#include "integrate.h"
#include<QTimer>
Integrate::Integrate(QObject *parent): QObject(parent)
{

 connect(timer,SIGNAL(timeout()),this,SLOT(close()));
 connect(timer2,SIGNAL(timeout()),this,SLOT(close1()));
 connect(timer3,SIGNAL(timeout()),this,SLOT(close2()));

 timer->setInterval(3000);
timer2->setInterval(6000);
timer3->setInterval(9000);

}

void Integrate::start()
{
 s="starting";
 emit notice(QVariant(s));

 timer->start();
 timer2->start();
 timer3->start();
    qDebug()<<"start";

}/*
void Integrate::stop()
{
   timer->stop();
   timer2->stop();
   timer3->stop();
   s="stopped";
   emit notice(QVariant(s));

}*/
void Integrate::close()
{
    s="timeout";


    emit notice(QVariant(s));




}

void Integrate::close1()
{
 s1="timeout1";
     emit notice(QVariant(s1));
}

void Integrate::close2()
{
    s2="timeout2";
      emit notice(QVariant(s2));
}


