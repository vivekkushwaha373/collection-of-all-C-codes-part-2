//stack implementaqtion through array
#include<iostream>
using namespace std;

void pop(int *);
void deletestack(int *);
void Top(int [],int *);
void IsEmptystack(int*);
void IsFullstack(int* top);
void push(int , int [],int *);
int size(int *);

void IsEmptystack(int* top)
{
if(*top==-1)
cout<<"Stack is Empty"<<endl;
else
cout<<"Stack is Not Empty"<<endl;
}

void IsFullstack(int* top)
{
    if(*top==99)
    cout<<"Stack is Full"<<endl;
    else
    cout<<"Stack is not Full yet"<<endl;
}
void pop(int *top)
{
    if(*top==-1)
    {
     cout<<"Element cannot be popped : Stack is Empty"<<endl;
     return ;
    }
    else
    {
  --(*top);
    }
}

void deletestack(int *top)
{

while(*top!=-1)
{
pop(top);
}
}


void Top(int arr[],int *top)
{
if(*top==-1)
cout<<"Stack is Empty : No top element"<<endl;
else
cout<<arr[*top];
}

void push(int value, int arr[],int *top)
{
    
    if(*top==99)
    {
      cout<<"Memory overflow: Element can not be pushed: "<<endl;
    }
    else
    {
    (*top)++;
    arr[*top]=value;
    }
}





int size(int *top)
{
    return *top+1;//size of the array
}


int main()
{
    int arr[100];
    int top=-1;
    push(2,arr,&top);
    push(3,arr,&top);
    pop(&top);
    pop(&top);
    push(7,arr,&top);
    deletestack(&top);
    IsEmptystack(&top);
    IsFullstack(&top);
    Top(arr,&top);
    return 0;
}