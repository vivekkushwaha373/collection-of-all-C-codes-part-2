#include<iostream>
using namespace std;

class teacher
{
int y;
public:
void setdata(int x)
{
y=x;
}
int returny()
{
    return y;
}
// operator student()
// {
//    student t1;
//    t1.setdata(10);
//    return t1;
// }
void getdata()
{
    cout<<"teacher a: "<<y<<endl;
}
};

//---------------------------------------------------------------------------------------

class student
{
int a;
public:
student()
{
    //default constructor is important;
}
student(teacher C)
{
    a=C.returny();
}
void setdata(int x)
{
    a=x;
} 
void getdata()
{
    cout<<"student a: "<<a<<endl;
}
};
int main()
{
student A1;
teacher A2;
A1.setdata(10);
A2.setdata(9);
A1.getdata();
A2.getdata();
A1=A2;
A1.getdata();
A2.getdata();
return 0;
}