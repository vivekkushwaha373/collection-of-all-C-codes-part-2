#include<iostream>
using namespace std;
class student 
{
    public:
    static int a;
    int b;
};
int student::a;
int main()
{

student s1;
cout<<s1.a;
return 0;
}