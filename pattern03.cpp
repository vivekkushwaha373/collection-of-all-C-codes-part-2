#include<iostream>
using namespace std;
int main()
{
    for(int i=1;i<=4;i++)
    {
        for(int j=1;j<=4;j++)
        {
            if(j>4-i)
            cout<<j-(4-i);
            else
            cout<<" ";
        }
        for(int j=1;j<=4;j++)
        {
            if(j<i)
            cout<<i-j;
            else
            cout<<" ";
        }

        cout<<endl;
    }
}