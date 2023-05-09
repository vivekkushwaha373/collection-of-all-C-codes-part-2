#include<iostream>
using namespace std;
class student 
{
public:
int a;
void setval(int x)
{
a=x;
}
student* operator->()
{
    a++;
    return this;
}
void display()
{
    cout<<a;
}
};
int main()
{
student x,i;
x.setval(8);
x->display();
// x.diaplay();
return 0;
}