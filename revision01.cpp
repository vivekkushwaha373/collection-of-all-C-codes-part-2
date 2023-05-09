//exception handling
#include<iostream>
using namespace std;
int main()
{
    int a;
    int b,c;
   
    cin>>b>>c;
    try
    {
    if(c!=0)
    a=b/c;
    else
    {
        throw "Invalid value of c";
    }

    }
    catch(char s)
    {
        cout<<s;
    }
    //generalise
    catch(...)
    {
        cout<<"I love my country"<<endl;
    }

    return 0;
}