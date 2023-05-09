// initializer list functionality
//remember 1-2-2 rule always;
#include<iostream>
using namespace std;
class men
{
    public:
  men(int y)
  {

  }
};
class student
{
    men s1;
    int a;
    int b;
    public:
    student(int m): s1(6),a(m), b(a)
    {

    }
    void setdata(int s)
    {
        a=s;
    }
    void getdata()
    {
     cout<<b<<endl;
     cout<<a<<endl;
    }
};
int main()
{
student s1(6);
s1.getdata();
s1.setdata(5);
s1.getdata();

    return 0;
}