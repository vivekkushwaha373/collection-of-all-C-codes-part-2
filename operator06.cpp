#include<iostream>
using namespace std;
class student
{
public:
int a;
student(){}
student(int x)
{
a=x;
}
display()
{
    cout<<a;
}
student operator-()
{
return *this;
}
student operator+(student C)
{
student d;
d.a=C.a+a;
return d;

}
};

int main()
{
  student c1(4),c2(5),c3(6);
  c1=-c2+c3;
  c1.display();
    return 0;
}