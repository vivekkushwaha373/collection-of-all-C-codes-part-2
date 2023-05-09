#include<iostream>
using namespace std;
// class student;

class  student
{
public:
int s=10;

void display()
{
    cout<<s;
}
};
class teacher
{
int t=9;
public:
operator student()
{
    student S;
    t=S.s;
    return S;    
}
void display()
{
    cout<<t;
}
};
int main()
{
    teacher t1;
    student s1;
    s1=t1;
    t1.display();
    return 0;
}