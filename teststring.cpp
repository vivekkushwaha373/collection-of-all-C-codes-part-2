#include<iostream>
using namespace std;
int main()
{
    char a[2][6];
    for(int i=0;i<2;i++)
    {  cout<<"enter the "<<i+1<<" value: ";
        cin>>a[i];
    }
    for(int i=0;i<2;i++)
    {
        cout<<a[i]<<endl;
    }
    return 0;
}