#include<iostream>
using namespace std;
class student
{

int a; 
public:
friend void operator||(int,student&);
void operator->(int y)
{
  a=y;  
}
void display()
{
    cout<<a;
}
};
void operator||(int z,student &y)
{

y.a=z;

}
int main()
{
    student s1,s2;
    student *ptr;
    ptr=&s2;
    9||s1;
    s1.display();
    ptr->4;
    s2.display();
    return 0;
}