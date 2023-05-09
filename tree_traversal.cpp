#include<iostream>
using namespace std; 
class node
{

public:
node* right;
int value;  
node* left;
node(int v)
{  
    right= NULL;
    value= v;
    left=  NULL;
}
void preorder()
{
if(this!=NULL)
{
cout<<this->value<<" ";
this->left->preorder();
this->right->preorder();
}
}

void inorder()
{
if(this==NULL)
return ;
if(this!=NULL)
{
this->left->inorder();
cout<<this->value<<" ";
this->right->inorder();
}
}

void postorder()
{
if(this!=NULL)
{
this->left->postorder();
this->right->postorder();
cout<<this->value<<" ";
}
}
};

int main()
{
node *root=new node(2);
root->left=new node(4);
root->right=new node(8);
root->left->left=new node(6);
root->left->right=new node(10);
root->right->left=new node(11);
root->right->right=new node(14);
root->preorder();
cout<<endl;
root->inorder();
cout<<endl;
root->postorder();
cout<<endl;
return 0;
}