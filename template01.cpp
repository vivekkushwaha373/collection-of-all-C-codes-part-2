#include<iostream>
using namespace std;
template <typename T,typename t1>
t1 add(T a,T b)
{
    return a+b; 
}

int main()
{
cout<<add<float,int>(9.1,4.5);
return 0;
}