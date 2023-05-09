#include<iostream>
using namespace std;
class complex
{
    int real;
    int img;
    public:
    complex(){real=0;img=0;}
    complex(int x,int y){real=x; img=y;}
    complex(int x){real=x;img=0;}
    complex(complex &C)
    {
        real=C.real;
        img=C.img;
    }
    void setdata(int x,int y)
    {
       real=x;
       img=y;
    }
    void display()
    {
        cout<<real<<" + "<<img<<"i"<<endl;
    }
    complex operator+(complex s2);
  
};
complex complex::operator+(complex s2)
  {
    complex temp;
    temp.real=real+s2.real;
    temp.img=img+s2.img;
    return temp;
}

int main()
{
   complex s1,s2,s,l(4,5);
   complex c=l;
   s1.setdata(2,5);
   s2.setdata(3,4);
   s1.display();
   s2.display();
   s=s1+s2;//s=s1.operator+(s2);
   s.display();
   c.display();
    return 0;
}