#include<bits/stdc++.h>
using namespace std;
int main()
{
    for(int i=0;i<4;i++)
    {
        for(int j=0;j<4;j++)
        {
           if(j>=i)
           cout<<char(65-i+j);
           else
           cout<<" ";
           
        }
        for(int j=0;j<4;j++)
        {
           if(j>i)
           cout<<char(68-j);
     
        
           
        }
        cout<<endl;
    }
    return 0;
}