#include<iostream>
using namespace std;
class item
{
int a,b;
public:
item(int x,int y)
{
    a=x;
    b=y;
}
void display()
{
    cout<<a<<" "<<b;
}
};
int main()
{
 item s1=item(9,0);
 s1.display();

    return 0;
}