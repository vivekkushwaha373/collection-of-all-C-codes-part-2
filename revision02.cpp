#include<iostream>
using namespace std;
int main()
{
   // dynamic memory allocation;
   // similar to C langage but it is more modified version;
 
   // int *ptr=(int*)malloc(sizeof(int)*4)
    int *ptr;
    ptr=new int();// Or ptr=new int;
    // problems in c langauge during memory allocation:
    //here we don't require to give the size of int 
    *ptr=9;
    cout<<*ptr;
    // we have to release the memroy as well;
    // In C language we do it with the help of free keyword;
    //free(ptr);
    delete []ptr;
    delete ptr;

    return 0;
}