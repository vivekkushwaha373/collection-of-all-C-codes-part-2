//typecasting --> operater overloading;
#include<iostream>
using namespace std;
class student
{
    int a;
    public:
    void setdata(int y)
    {
     a=y;
    }
    operator int()
    {
    return a;      
    }
    
};
int main()
{
int x;
student s1;
s1.setdata(5);
x=s1;
cout<<x;
return 0;
}
//----------------------------------------------------------------------------------
