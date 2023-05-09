#include<iostream>
using namespace std;
class student
{
int a;
public:
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

int main()
{
    student s;    
    int x=4;
    x=s;
    cout<<x;
    // s.getvalue();
    return 0;
}