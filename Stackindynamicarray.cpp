#include<bits/stdc++.h>
#include<cstdlib>
using namespace std;
class Stack
{
int *ptr;
int top=-1;
int size=0;
int Capacity;
public:

Stack()
{
    Capacity=1;
    ptr=new int[Capacity];
 
}

void push(int value)
{
if(Capacity==size)
{
    
    resize();
}
   
    top++;
    
    ptr[top]=value;
    
    size++;
}

void pop()
{
if(IsEmptyStack())
cout<<"Element cannot be popped: "<<endl;
else
{
top--;
size--;
}
}

void Top()
{

if(IsEmptyStack())
cout<<"No Top element found : Stack is Empty"<<endl;
else
cout<<ptr[top]<<endl;
}

int Size()
{
return size;
}

bool IsEmptyStack()
{
if(top==-1)
return true;
else
return false;
}

bool IsFullstack()
{
if(size==Capacity)
return true;
else
return false;
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
    Capacity=Capacity*2;
    return;
}

~Stack()
{
delete[]ptr;
top=-1;
Capacity=0;
}

};
int main()
{
    Stack s;
   
   
    s.push(9);
    s.push(2);
    s.push(8);
    s.Top();
    s.pop();
    s.pop();
    s.pop();
    cout<<"size="<<s.Size()<<endl;
    s.push(8);
    s.push(43);
    s.push(9);
    s.push(21);
    s.Top();
    cout<<"size="<<s.Size()<<endl;
    if(s.IsEmptyStack())
    cout<<"Empty Stack"<<endl;
    else
    cout<<"Not Empty"<<endl;
    if(s.IsFullstack())
    cout<<"Stack is Full"<<endl;
    else
    cout<<"Not Full"<<endl;
    return 0;
}