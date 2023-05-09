#include<bits/stdc++.h>
using namespace std;
class car1
{
protected:
int car_prize;
char car_name[50];
public:
car1()
{
    car_prize=2000000;
    strcpy(car_name,"honda");
}
virtual void f1()
{
    cout<<car_prize<<" "<<car_name<<endl;
}

};
class car2: public car1
{
char car_type[20];
public:
car2()
{
    strcpy(car_type,"ferrari");
}
void f1()
{
    cout<<car_prize<<" "<<car_name<<" "<<car_type<<endl;
}

};
int main()
{
car1 s;
car1 *x;
car2 a;
car2 *p;
p=&a;
x=&a;
x->f1();
p->f1();

    return 0;
}