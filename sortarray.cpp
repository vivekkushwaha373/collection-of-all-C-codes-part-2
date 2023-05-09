#include<iostream>
#define INT_MAX 22222222 
using namespace std;
int main()
{   int temp;
    int a[5];
    // int min=INT_MAX;
    for(int i=0;i<5;i++)
    {
        cout<<"enter the "<<i+1<<" number ";
        cin>>a[i];
    }
    // for(int i=0;i<5;i++)
    // {
    //   if(min>a[i])
    //   min=a[i];
    // }
   
    for(int i=0;i<5;i++)
    {
    for(int j=i;j<5;j++)
    {
    if(a[i]>a[j])
    {  
       temp=a[i];
       a[i]=a[j];
       a[j]= temp;
    }
    }
    }
    cout<<"sorting in ascending order"<<endl;
    for(int i=0;i<5;i++)
    {
        cout<<a[i]<<endl;
    }

     for(int i=0;i<5;i++)
    {
    for(int j=i;j<5;j++)
    {
    if(a[i]<a[j])
    {  
       temp=a[i];
       a[i]=a[j];
       a[j]= temp;
    }
    }
    }
    cout<<endl<<"sorting is descending order"<<endl;
    for(int i=0;i<5;i++)
    {
        cout<<a[i]<<endl;
    }
}