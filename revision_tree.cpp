/*
drawbacks:
1--> Wastage of memory 
2--> Size of the  array is fixed;
*/
#include<bits/stdc++.h>
using namespace std;
class Tree 
{
int arr[100]={0};
int size=100;
public:
insert(int n,int v)
{
if(n==1)
{
    arr[n]=v;
}
else if(arr[n/2]!=0 && n<size)
{
arr[n]=v;
}
else
{
    cout<<"No parent node exist"<<endl;
}
}
Printtree()
{
    if(arr[1]==0)
    cout<<"tree is Empty"<<endl;
    else
    {
    for(int i=1;i<size;i++)
    {
         if(arr[i]!=0)
         cout<<arr[i];
         else
         cout<<" ";
    }
    }
}
deleteE(int n)
{
if(arr[n/2]!=0)
arr[n]=0;
else
cout<<"Element cannot be deleted"<<endl;
}
};

int main()
{
Tree s1;
s1.insert(1,2);
s1.insert(2,3);
s1.insert(5,7);
s1.deleteE(2);
s1.Printtree();
    return 0;
}