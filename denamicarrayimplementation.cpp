#include<iostream>
using namespace std;
class dynamicarray
{
int *ptr;
int size=0;
int capacity=0;
public:
search(int n)
{
    for(int i=0;i<size;i++)
    {
        if(n==ptr[i])
        return i;
    }
    return -1;
}
reverse()
{ 
    int *temp=new int[size];
  
    for(int i=size-1;i>=0;i--)
    {
        temp[size-1-i]=ptr[i];
        
        //array reversal
    }
    delete[]ptr;
    ptr=temp;
}
dynamicarray()
{
    ptr=new int[1];
    size=0;
    capacity=1;
}
//array search
Accesselement(int index)
{
if(index>size)
cout<<"Element is not found";
else
cout<<ptr[index]<<endl;
}
//insertion in array
insert(int index,int value)
{
if(capacity==size)
{
    resize();
}
if(index>capacity)
{
    cout<<"insertion is not possible";
}
else
{
    ptr[index]=value;
    size++;
}
}
void resize()
{
    int *temp=new int[2*size];
    for(int i=0;i<size;i++)
    {
        temp[i]=ptr[i];
    }
    delete[]ptr;
    ptr=temp;
    capacity=size*2;
}
insertat(int index,int value)
{
if(size==capacity)
resize();
else
{
for(int i=size-1;i>=index;i--)
{
    ptr[i+1]=ptr[i];
}
ptr[index]=value;
size++;
}
}
deleteat(int index)
{
for(int i=index;i<size-1;i++)
{
    ptr[i]=ptr[i+1];
}
ptr[size-1]=0;
size--;
}
shrinktofit()
{
int *temp=new int[size];
for(int i=0;i<size;i++)
temp[i]=ptr[i];
delete[]ptr;
ptr=temp;
capacity=size;
}
printmyarray()
{
    for(int i=0;i<size;i++)
    {
        cout<<ptr[i]<<" ";
    }
    cout<<endl;
    cout<<"size= "<<size<<endl;
    cout<<"Capacity= "<<capacity<<endl;
}
~dynamicarray()
{

  delete[]ptr;
  size=0;
  capacity=0;
}
};
int main()
{
    dynamicarray a;
    a.insert(0,1);
    a.insert(1,2);
    a.insert(2,5);
    a.insert(3,8);
    a.insert(4,7);
    a.insert(5,1);
    a.printmyarray();
    a.insertat(0,3);
    a.printmyarray();
    a.deleteat(0);
    a.printmyarray();
    a.Accesselement(5);
    a.reverse();
    a.printmyarray();
    int n=a.search(4);
    if(n==-1)
    {
        cout<<"Element not found: ";
        cout<<endl;
    }
    else
    {
        cout<<"Element found at index "<<n;
        cout<<endl;
    }
    return 0;
}