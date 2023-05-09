#include<iostream>
using namespace std;
class tree
{
    int arr[10]={0};
    int size=10;
    public:
    insert(int n,int v)
    {
       if(n==1)
       {
        arr[n]=v;
       }
       else if(arr[n/2]!=0 && n<size)
       {
          arr[n]=v;
       }
       else
       {
        cout<<"Parent node doesn't exist"<<endl;
       }

    }
    insertright(int n,int v)
    {
       if(arr[n]!=0 && (2*n+1)<size)
       {
           arr[2*n+1]=v;
       }
       else
       {
        cout<<"Element cannot be inserted"<<endl;
       }
    }
    insertleft(int n,int v)
    {
       if(arr[n]!=0 && 2*n<size)
       {
        arr[2*n]=v;
       }
       else
       {
        cout<<"Element cannot be inserted"<<endl;
       }
    }
    void deleteE(int i)
    {
         if(arr[i]!=0 && arr[2*1]==0 && arr[2*i]==0)  
         else
         cout<<""
    }
    printkardo()
    {
         for(int i=1;i<size;i++)
         {
            if(arr[i]!=0)
            cout<<arr[i]<<" ";
            else
            cout<<"-";
         }
    }
};
int main()
{
  tree t;
  t.insert(1,2);
  t.insertleft(1,8);
  t.insert(3,5);
  t.insert(6,7);
  t.insert(7,8);
  t.printkardo();
    return 0;
}