#include<bits/stdc++.h>
using namespace std;
class node
{
friend class LL;
int value;
node *next;
};
class LL
{
node *head;
public:
LL()
{
 head=NULL;

}

insert(int x)
{
  node *temp=new node;
  temp->value=x;
  temp->next=NULL;
    if(head==NULL)
    {
        head=temp;
    }
    else
    {
        node *t=head;
        while(t->next!=NULL)
        {
           t=t->next;
        }
        t->next=temp;
    }
}
  
void display()
{
    node* t=head;
    while(t!=NULL)
    {
        cout<<t->value<<" ";
        t=t->next;
    }
}


};
int main()
{
    LL s;
    s.insert(1);
    s.insert(2);
    s.insert(3);
    s.insert(4);
    s.insert(5);
    s.display();

    return 0;
}