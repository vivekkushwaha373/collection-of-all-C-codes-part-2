#include<iostream>
using namespace std;

int main()
{
 int a,b,c;
 cout<<"Enter two numbers: "<<endl;
 cin>>a>>b;
 try
 {
if(b==0)
throw "gadaha ye kya kar raha hai";
if(b==1)
throw exception();

 c=a/b;
 cout<<c;
 }
 catch(const char *str)
 {
    cout<<str;
 }
 //agar maine aisa throw diya gisko catch karne ke liye koi hain hi nahi to dikat hai
// iska solution hain ki app-> catch(...)
catch(...)
{
    cout<<"Invalid value Entered";
}
    return 0;
}