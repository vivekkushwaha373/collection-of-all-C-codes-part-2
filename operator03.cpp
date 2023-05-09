#include<iostream>
using namespace std;
class student
{
    
    public:
    int a;
    setvalue(int x)
    {
     a=x;
    }
   friend void operator<<(student&,int);
       
    void display()
    {
    cout<<a;
    }
};
void operator<<(student &C,int)
 {
     (C.a)++;
 }
int main()
{
student o,j;
o.setvalue(7);
o<<2;
o.display();
}