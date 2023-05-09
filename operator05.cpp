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
operator[](int x)
{
    a++;
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
x[23];
x.display();
return 0;
}