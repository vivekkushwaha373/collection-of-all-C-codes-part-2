#include<iostream>
using namespace std;
class student
{
    public:
    int a;
    student(int x)
    {
        a=x;
    }
    student(){}
    operator++()
    {
        a++;
    }
    display()
    {
        cout<<a;
    }
};
int main()
{
student C(4);
C++;
C.display();
return 0;
}