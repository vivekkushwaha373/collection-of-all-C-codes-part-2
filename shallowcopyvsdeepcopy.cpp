#include<iostream>
#include<cstring>
using namespace std;
class student 
{
char *a;

public:
student()
{

}
student(char *str)
{
    a=(char*)malloc(strlen(str)+1);
    strcpy(a,str);
}
student(student &c)
{
    a=(char*)malloc(strlen(c.a)+1);
    strcpy(a,c.a);
}
void change(char *str)
{
    // free(a);
    // a=(char*)malloc(strlen(str)+1);
    strcpy(a,str);
}
void display(){
cout<<a<<endl;

}
student& operator=(student &s)
{
    if(a==s.a)
    {
        return *this;
    }
    free(a);
  a=(char*)malloc(strlen(s.a)+1);
  strcpy(a,s.a);
  return *this;

}
};
int main()
{
    student s1("harry");
    s1.display();
    student s2=s1;
     student s3,s4;
    
    s1.change("zoya");// shallow copy
    s2.display();
    s3=s4=s1;
    s3.display();
    // s1.change()
    s4.display();
    return 0;
}