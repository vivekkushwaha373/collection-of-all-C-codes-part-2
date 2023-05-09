#include<iostream>
using namespace std;
class student 
{
int a;
public:
student()
{

}
student(int y)
{
a=y;
}
void display()
{
  cout<<a;
}
// friend void operator=(student,int);
};

int main()
{
  student s2;
  student s1=6;
  s2=7;
  s1.display();
  s2.display();
  return 0;
}
/*#include<iostream>
using namespace std;
class student
{
  int a;
  public:
  friend operator==(student,student);
  student(int y)
  {
    a=y;
  }
  student()
  {

  }
};
operator==(student s1,student y)
{
  if(y.a<s1.a)
  cout<<"yes it is greater";
  else
  {
    if(y.a==s1.a)
    cout<<"equal";
    else
  cout<<"it is less";
  }
}
int main()
{
  student s1(9);
  student s2(10);
  s2==s1;
  cout<<(9||2);
  return 0;
}*/


/*

#include<iostream>
using namespace std;
class student 
{
int a;
public:
fun(int y)
{
  a=y;
}
void display()
{
  cout<<a;
}
operator<<(ostream &o)
{
  o<<a;
}
};
int main()
{
  student s1;
  s1.fun(8);
  s1<<cout;  

  return 0;
}


*/


/*

#include<iostream>
using namespace std;
class student 
{
int a;
public:
fun(int y)
{
  a=y;
}
void display()
{
  cout<<a;
}
friend void fun();
};
void fun()
{
student s1;
s1.a=10;
cout<<s1.a;
}
int main()
{
//  student s1;  
//  s1.fun(9);
 fun();
//  s1.display();
  return 0;
}


*/
