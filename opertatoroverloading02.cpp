#include<iostream>
using namespace std;
class child
{
int a=1;
public:
int operator,(int i)
{
   
    a=i;
    return a;
}
void display()
{
    cout<<++a;
}
};
int main()
{
//    int s;
   child x,y;
   x,(y,7);
   x.display();

    return 0;
}