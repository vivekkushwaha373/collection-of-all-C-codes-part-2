#include<iostream>
#include<cstdlib>
using namespace std;
class DLL;
class node
{
friend class DLL;
node *prev;
int value;
node *next;
};
class DLL
{
node *head;
// friend class node;
public:
DLL()
{
    head=NULL;
}


void deletion(int n)
{ 
 node *t=head;
if(n<=0)
{
    cout<<"given element doesn't exist"<<endl;
}
else if(n==1)
{
  
    head=t->next;
}
else
{
while((n-1)>1)
{
t=t->next;
if(t->next==NULL)
{
    cout<<"Given Element doesn't exist"<<endl;
    return ;
}
n--;
}
t->next=t->next->next;
if(t->next!=NULL)
{
    t->next->next->prev=t;
}
}
}



void insertatmid(int n,int  v)
{
node* temp=new node;
temp->value=v;
if(n==1)
{
    
   
    temp->next=head;
    temp->prev=NULL;
    head=temp;
}
else
{
node *t=head;
while((n-1)>1)
{
    if(t->next==NULL)
    {cout<<"Insertion is not possible"<<endl;
     return ;
    }
    t=t->next;
    n--;
}
temp->next=t->next;
temp->prev=t;

}
}
insert(int v)
{
node *ptr= new node();
ptr->value=v;
ptr->next=NULL;
if(head==NULL)
{
    ptr->prev=head;
    head=ptr;//heaf=ptr;
}
else
{
     node *t=head;
     while(t->next!=NULL)
     {
      t=t->next;
     }
     t->next=ptr;
     ptr->prev=t;
}
}

void display()
{
    node *t=head;
    while(t!=NULL)
    {
        cout<<t->value<<" ";
        t=t->next;
    }
    cout<<endl;
    
}

};
int main()
{
DLL s;
s.insert(1);
s.insert(2);
s.insert(3);
s.insert(4);
s.insert(9);
s.display();
// s.insertatmid(8,3);
s.deletion(5);
s.display();
return 0;
}