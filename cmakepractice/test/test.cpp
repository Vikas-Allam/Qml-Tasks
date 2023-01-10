#include "test.h"

test::test(const string str)
{
    s=str;
}

test::~test()
{

}

string test::testvalue()
{
    cout<<"test value:"<<s<<endl;
}
