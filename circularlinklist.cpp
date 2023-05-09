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
 node* ptr;
 public:
  linklist()
  {
    head=NULL;
  }
  void insert(int x)
  {
    node *temp=new node;//dynamic memory allocation;
    temp->value=x;
    temp->next=head;
    if(head==NULL)
    {
      head=temp;
      ptr=temp;
    }
    else
    {
        while(ptr->next!=NULL)
        {
            ptr=ptr->next;
        }
        ptr->next=temp;
        
    }
  }
  display()
  {

    node *temp= new node;
    do
    {

        cout<<head->value<<" ";
        head=head->next;

    }while(head->next!=temp);
  }
};

int main()
{
    linklist s;
    s.insert(1);
    s.insert(3);
    s.insert(5);
    s.insert(7);
    s.display();
    return 0;
}