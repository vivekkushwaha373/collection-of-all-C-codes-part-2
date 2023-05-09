#include<iostream>
#include<cstdlib>
using namespace std;
class linklist;
class node
{
int value;
node* next;
friend class linklist;// public:

};
class linklist
{

 node* head;
 
 public:
  linklist()
  {
    head=NULL;
  }
  void insert(int x)
  {
    node *temp=new node;//dynamic memory allocation;
    temp->value=x;
    temp->next=NULL;
    if(head==NULL)
    {
      head=temp;
     
    }
    else
    {
        node* ptr=head;
        while(ptr->next!=NULL)
        {
            ptr=ptr->next;
        }
        ptr->next=temp;
        // delete ptr;
    }
  }
  void insertat(int i,int v)
  {
    node* t=new node;
    t->value=v;
    node* temp= head;
    if(i==1)
    {
        t->next=head;
        t->value=v;
        head=t;
    }
    else
    {
     while((i-1)!=1)
     {
        temp=temp->next;
        if(temp==NULL)
        {
            cout<<"Insertion is not possible";
            return ;
        }
        i--;
     }
     t->next=temp->next;
     temp->next=t;
    }
  }
  void search(int n)
  {
   int i=0;
   node* ptr=head;
   while(ptr!=NULL)
   { i++;
    if(ptr->value==n)
    cout<<"Element found at position "<< i ;
    ptr=ptr->next;
   }

  }
  void deleteat(int i)
  {
   node* temp=head;
   if(i==1)
   {
    head=head->next;
   }
   else
   {
   while((i-1)!=1)
   {
     temp=temp->next;
     if(temp==NULL)
     cout<<"Invalid delete Entry";
     --i;
   }
   temp->next=temp->next->next;
   }
  }
  void insertatbegin(int v)
  {
    node* temp=new node;
    temp->value=v;
    temp->next=head;
    head=temp;
  }
  display()
  {

    node* ptr=head;
    while(ptr!=NULL)
    {
        cout<<ptr->value<<" ";
        ptr=ptr->next;
    }
    cout<<endl;
  }
};

int main()
{
    linklist s;
    s.insert(1);
    s.insert(3);
    s.insert(5);
    s.insert(7);
    s.insertatbegin(8);
    s.insertatbegin(12);
    s.display();
    s.insertat(1,7);
    s.display();
    s.deleteat(1);
    s.display();
    s.search(7);
    return 0;
}