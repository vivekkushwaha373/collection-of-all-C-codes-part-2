#include<iostream>
using namespace std;
class A
{
protected:
int a=9;
public:
virtual void A1()
{
cout<<"A,a : "<<a;
}
};
class B: public A
{
public:
void A1()
{
cout<<"B,a : "<<a;
}
};
int main()
{
A *ptr;
B p;
ptr=&p;
ptr->A1();

    return 0;
}