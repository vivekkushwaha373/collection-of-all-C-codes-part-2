#include<bits/stdc++.h>
using namespace std;
class node
{
    public:
    node*left;
    int v;
    node*rigth;
    // public:
    node(int n)
    {
        left=NULL;
        v=n;
        rigth=NULL;
    }
    // preorder()
    // {
    //     if(this!=NULL)
    //     {
    //         cout<<v<<" ";
    //         left->preorder();
    //         rigth->preorder();
    //     }
          
    // }
    inorder()
    {
        if(this!=NULL)
        {
            left->inorder();
            cout<<v<<" ";
            rigth->inorder();
        }
     
    }
    postorder()
    {
        if(this!=NULL)
        {
            left->postorder();
            rigth->postorder();
            cout<<v<<" ";
        }
          
    }
};
preorder(node*root)
{
    if(root!=NULL)
 {   
    cout<<root->v<<" ";
    preorder(root->left);
    preorder(root->rigth);
  }
}
int main()
{
    node*root;
    root=new node(1);
    root->left=new node(2);
    root->rigth=new node(3);
    root->rigth->left=new node(4);
    root->rigth->rigth=new node(5);
    root->rigth->rigth->rigth=new node(9);
    root->rigth->rigth->left=new node(6);
    root->rigth->rigth->left->left=new node(7);
    root->rigth->rigth->left->rigth=new node(8);
    root->rigth->rigth->left->rigth->left=new node(9);
    preorder(root);
       cout<<endl;
    root->inorder();
       cout<<endl;
    root->postorder();

    return 0;
}