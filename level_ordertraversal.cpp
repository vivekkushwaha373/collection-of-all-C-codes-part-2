//program to find heigth in level order traversal;
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
     right=NULL;
     value=v;
    }

};
Height(node* root)
{
if(root==NULL)
return 0;
int lheight=Height(root->left);
int rheight=Height(root->right);
if(lheight>rheight)
return lheight+1;
else
return rheight+1;
}
void printcurrentlevel(node*root,int level)
{
if(root==NULL)
return;
if(level==1)
cout<<root->value<<" ";
printcurrentlevel(root->left,level-1);
printcurrentlevel(root->right,level-1);

}
//height through recursion;
printlevelorder(node* root)
{
int n=Height(root);
for(int i=1;i<=n;i++)
{
    printcurrentlevel(root,i);
    cout<<endl;
}
}

// int Heigth(node* root)
// {
// int count=0;
// queue<node*>s;
// s.push(NULL);
// if(root->left!=NULL)
// s.push(root->left);
// if(root->right!=NULL)
// s.push(root->right);
// while(!s.empty())
// {
//     if(s.front()==NULL)
//     {
//        s.pop();
//        count++;
//        if(s.empty()!=1)
//        s.push(NULL);
//        else
//        {
//         break;
//        }
//     }
//     node* temp=s.front();
//     s.pop();
//     if(temp->left!=NULL)
//     s.push(temp->left);
//     if(temp->right!=NULL)
//     s.push(temp->right);
   
// }

// return count;
// }

int main()
{
   node* root=new node(2);
   root->left=new node(4);
   root->right=new node(8);
   root->left->left=new node(6);
   root->left->right=new node(10);
   root->right->left=new node(11);
   root->right->right=new node(14);
   printlevelorder(root);
    return 0;
}