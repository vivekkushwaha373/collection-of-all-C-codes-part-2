#include<iostream>
using namespace std;
class child
{
int a;
public:
void display()
{
    cout<<"SPSbahoot___________";
}
child* operator->()
{
a=9;
return this;
}

};
int main()
{
    child s;
    s->display();
    return 0;
}