#include<iostream>
using namespace std;
class Cqueue
{
int size;
int arr[10];
int front;
int rear;
public:
Cqueue()
{
    front=-1;
    rear=-1;
    size=10;
}
Enqueue(int v)
{
    // cout<<rear<<" ";
    if(rear==-1)
    {
        rear=(rear+1)%size;
        front=(front+1)%size;
        arr[rear]=v;
    }
    else
    {
        if((rear+1)%size==front)
        {
            cout<<"overflow"<<endl;
        }
        else
        {
         
             rear=(rear+1)%size;
             arr[rear]=v;
        }
       
    }
}

Dequeue()
{
    if(front==-1)
    {
        cout<<"underflow"<<endl;
    }
    else if(front==rear)
    {
        front=rear=-1;
    }
    else
    {
         front=(front+1)%size;
    }
}

Print_Queue()
{
    for(int i=front;i!=rear;i=(i+1)%size)
    {
        cout<<arr[i]<<" ";
    }
    if(rear!=-1)
    cout<<arr[rear];
}
};
int main()
{
Cqueue s1;
s1.Enqueue(1);
s1.Enqueue(2);
s1.Enqueue(3);
s1.Enqueue(4);
s1.Enqueue(5);
s1.Enqueue(6);
s1.Enqueue(7);
s1.Enqueue(8);
s1.Enqueue(9);
s1.Enqueue(10);
s1.Dequeue();
s1.Enqueue(11);
s1.Print_Queue();
    return 0;
}