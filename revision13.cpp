#include<iostream>
using namespace std;
// class teacher;
class teacher
{
public:
int m;
teacher(){}

void getvalue();

};
class student
{
int a;
public:
geta()
{
    return a;
}
operator teacher()
{
    teacher C;
    C.m=a;
    return C;
}

student()
{

}
student(student&s)
{
    cout<<"Copy constructor is called"<<endl;
    a=s.a;
}

student(int s)
{
cout<<"Constructor is Called"<<endl;
a=s;
}
operator int()
{
    return 4;
}
getvalue()
{
cout<<a;
}

};



void teacher::getvalue()
{
cout<<m;
}
int main()
{
    student s(8);
    teacher x;    
    x=s;
    x.getvalue();
    return 0;
}