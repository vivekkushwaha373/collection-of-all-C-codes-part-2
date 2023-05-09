//heigth of the tree 
#include<bits/stdc++.h>
using namespace std;
class node
{
    public:
    node* left;
    int value;
    node* right;
    node(int v)
    {
     left=NULL;
     rigth=NULL;
     value=v;
    }

};
 
int Heigth(node* root)
{
int count=0;
queue<node*>s;

s.push(root);
s.push(NULL);
while(!s.empty())
{
    if(s.front()==NULL)
    {
       count++;
       s.pop();
    }
    node* temp=s.front();
    s.pop();
    if(temp->left!=NULL)
    s.push(temp->left);
    if(temp->rigth!=NULL)
    s.push(temp->right);
    s.push(NULL);
}
return count;
}

int main()
{
   node* root=new node(2);
   root->left=new node(4);
   root->right=new node(8);
   root->left->left=new node(6);
   root->left->right=new node(10);
   root->rigth->left=new node(11);
   root->rigth->rigth=new node(14);
   cout<<Heigth(root);
    return 0;
}