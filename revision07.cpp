//ambiguity resolutyiok
#include<iostream>
using namespace std;
class s1
{
public:
s1()
{
    cout<<"Constructor of s1 is called: "<<endl;
}
void printmessage()
{
    cout<<"Ravi pratap chutiya hai"<<endl;
}

};
class s2
{
public:
s2()
{
    cout<<"constructor of s2 is called: "<<endl;
}
void printmessage()
{
    cout<<"Ravi pratap bewakoof hai"<<endl;
}

};
class s3 : public s1, public s2
{
public:
s3()
{
    cout<<"constructor of s3 is called"<<endl;
}

};
int main()
{
s3 o3;
o3.s1::printmessage();
o3.s2::printmessage();
    return 0;
}