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
   friend void operator%(int,student&);
       
    void display()
    {
    cout<<a;
    }
};
void operator%(int,student &C)
 {
     (C.a)++;
 }
int main()
{
student o,j;
o.setvalue(7);
2%o;
o.display();
}