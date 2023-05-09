
#include<iostream>
using namespace std;
class student;
class teacher
{
int y;
public:
void fun(student);//definition of member function

};

class student
{
int a;
friend void teacher ::fun(student);//delaration of member function
public:
student(int a)
{
this->a=a;
}
// friend class teacher;
};
void fun(student x)
{
    cout<<x.a;
}


int main()
{
student s1(7);
teacher s;
s.fun(s1);
return 0;
}