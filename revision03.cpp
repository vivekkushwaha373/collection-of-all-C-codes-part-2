//shallow copy and deep copy--> 
#include<iostream>
using namespace std;
class student

{
    int a;
    int *ptr=NULL;
    public:
    setdata(int m)
    {
        a=m;
        ptr=&a;
    }
    getdata()
    {
        cout<<a<<endl;
    }
    operator=(student &C)
    {
      ptr=(C.ptr);
    }
};

int main()
{
 student s1;
 student s2;
 s1.setdata(2);
 s2.setdata(3);
 s1.getdata();
 s2.getdata();
 s1=s2;
 s1.getdata();
 s2.getdata();
 s1.setdata(5);
 s2.getdata();
 s2.setdata(10);
 s1.getdata();
    return 0;
}