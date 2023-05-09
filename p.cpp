#include<iostream>
using namespace std;
int main()
{

    int *ptr;
    ptr=new int();//s
    if(!ptr)
    {
        cout<<"memory is not allocated";
        return 0;
    }
  cout<<*ptr<<endl;
}