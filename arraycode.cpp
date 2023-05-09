//implementaion -->search,deletion and insertion;
#include<iostream>
using namespace std;
class array
{
int arr[100];
int s=0;
public:
insert(int index,int value)
{
    arr[index]=value;
    s++;
}
int search(int value)
{
    for(int i=0;i<size();i++)
    {
        if(arr[i]==value)
        return 1;
        
    }
    return -1;
}
int at(int index)
{
return arr[index];
}
int size()
{
    return s;
}
void del(int index)
{

for( int i=index;i<s-1;i++)
{
  arr[i]=arr[i+1];
}
arr[s]=0;
s--;
}
insertat(int index,int value)
{

for(int i=s-1;i>=index ;i--)
{
    arr[i+1]=arr[i];
}
arr[index]=value;
s++;
}
};

int main()
{
array a;
int n,x;
cout<<"Enter the number of values : ";
cin>>x;

for(int i=0;i<x;i++)
{
cin>>n;
a.insert(i,n);
}
cout<<endl;
cout<<"printing elements: "<<endl;
for(int i=0;i<a.size();i++)
{
    cout<<a.at(i)<<" ";
}
cout<<endl;

cout<<"Enter the value you want to search: ";
cin>>n;

if(a.search(n))
cout<<"This value is present ";

else
{
    cout<<"This value is not present";
}
cout<<endl;
cout<<"Enter the index you want to delete :";
cin>>n;
a.del(n);
cout<<endl;
cout<<"printing elements: "<<endl;
for(int i=0;i<a.size();i++)
{
    cout<<a.at(i)<<" ";
}
cout<<endl<<"Inserting a at 0 position: "<<endl;
a.insertat(0,8);
cout<<endl;
cout<<"printing elements: "<<endl;
for(int i=0;i<a.size();i++)
{
    cout<<a.at(i)<<" ";
}

    return 0;
}