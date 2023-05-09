#include<iostream>
using namespace std;
int main()
{
    for(int i=1;i<=4;i++)
    {
        
        for(int j=1;j<=4;j++)
        {
          if(j>=i)
          cout<<j-(i-1);
          else
          cout<<" ";
        }
        for(int j=1;j<=4;j++)
        {
           if(j>i)
           cout<<4-j+1;
        //    else
        //    cout<<" "; 
        }
        cout<<endl;
    }
    return 0;
}