#include<iostream>
using namespace std;
class student 
{
    int age;
    int rollnum;
    public:
friend student operator+(int ,student);
void setdata(int a,int b)
{
  age =a;
  rollnum=b;
}
void display()
{

    cout<<age<<endl<<rollnum<<endl;
}
};
student operator+(studemt C)
{
    student temp;
    temp.age=C.age;
    temp.rollnum=C.rollnum;
    return temp;
}

int main()
{
student s1,s;
s.setdata(2,4);
s1=+s;
s1.display();
return 0;
}