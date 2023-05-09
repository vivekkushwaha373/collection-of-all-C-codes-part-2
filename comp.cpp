#include<iostream>
using namespace std;
class student
{
int real;
int complex;
public:
student(){
 //defalut constructor;   
}
setdata(int a,int b)
{
 real=a;
 complex=b;
 
}

getdata()
{
cout<<real<<" + "<<complex<<"i"<<endl;
}
void sum(student s2)
{   
    // real=s1.real+s2.real;
    // complex=s1.complex+s2.complex;
    cout<<"SUM= "<<real+s2.real<<" + "<<complex+s2.complex<<"i";
}

};

int main()
{
student s1(1),s2(2);

s1.setdata(2,3);
s2.setdata(2,5);
s1.getdata();
s2.getdata();
s1.sum(s2);
    return 0;
}