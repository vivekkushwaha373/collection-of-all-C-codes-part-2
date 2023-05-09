//Initialiser list;
#include<iostream>
using namespace std;
class teacher
{
int n;
public:
teacher(int s)
{
    cout<<"teacher constructor is called"<<endl;
    n=s;
}
getvalue()
{
    cout<<n<<endl;
}
};
class student
{
    int a;
    int &b;
    teacher x;
    public:
    
    student(int x,int y,int g):b(x),a(y),x(g)
    {
//2 3 5
    }
    display()
    {
    x.getvalue();
    cout<<a<<" "<<b;
    
    }
   
};
int main()
{
    student x(2,3,5);
    x.display();
    return 0;
}