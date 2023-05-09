//use of template using class
#include<iostream>
#include<cstring>
using namespace std;
template <class X,class Y>
class student
{
    X rollno;
    Y name[20];
    public:
    void setvalue(X a,Y* b)
    {
     rollno=a;
     strcpy(name,b);
    }
    void getvalue()
    {
        cout<<"rollno= "<<rollno<<endl;
        cout<<"name is: "<<name;
    }
};
int main()
{
  char a[10]="vivek";
  student <int,char>s1;
  s1.setvalue(10,a);
  s1.getvalue();

    return 0;
}