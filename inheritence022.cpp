#include<iostream>
using namespace std;
class student
{
private:
int a;
protected:
void fun1()
{
    cout<<"student class function is called";
}
};


class teacher:private student
{
public:
void fun2()
{
    fun1();
}
};
int main()
{
    
    
    teacher s1;
    s1.fun2();
    
    
    
    return 0;
}