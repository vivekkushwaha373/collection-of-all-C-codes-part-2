#include<iostream>
using namespace std;
class Queue
{
int arr[100];
int rear;
int front;
int size;
public:
Queue()
{
    rear=-1;
    front=-1;
    size=0;
}
push_back(int v)
{
  if(rear==-1)
  {
    rear++;
    front++;
    arr[rear]=v;
  }
  else
  {
     if(rear==size-1)
     {
        cout<<"overflow"<<endl;
     }
     else
     {
     arr[++rear]=v;
     }
  }
}
push_front(int v)
{
  for(int i=rear;i>=front;i--)
  {
     arr[i+1]=arr[i];
  }  
  arr[front]=v;
  rear++;
}

pop_back()
{
if(rear==-1)
{
    cout<<"Underflow"<<endl;
}
else
{
    rear--;
}
}
pop_front()
{
front++;
}
print_my_queue()
{
    for(int i=front;i<rear+1;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
};
int main()
{
    Queue s1;
    s1.push_back(1);
    s1.push_front(3);
    s1.push_back(2);
    s1.push_back(3);
    s1.push_back(4);
    s1.push_back(6);
    s1.print_my_queue();

    return 0;
}