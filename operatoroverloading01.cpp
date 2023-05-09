#include<iostream>
using namespace std;
//jab hu baat karte hai urinary operator ki tab hum ye naahi dekhytye ki 
class chile
{
int a;
public:
chile()
{
    a=0;
}
friend void operator+=(chile &x,int);

void display()
{
    cout<<a<<" ";
}
};
void operator+=(chile &x,int)
{
    x.a=7;

}

int main()
{
 chile x;
 x+=5;// object x calling the '+' operator funtion 
 x.display();
    return 0;
}