#include<iostream>
using namespace std;
// forward declaration
class Dollar
{
  int a;
  public:
  Dollar(){}
  Dollar(int y)
  {
    a=y;
  }
  int Rint()
  {
    return a;
  }
    
 friend class rupee;
 
};

class rupee
{
  int a;
  public:
  rupee(Dollar S)
  {
    a=S.Rint();
  }
  rupee(){}
  rupee(int y)
  {
    a=y;
  }
  // friend class Dollar; 
  int Rchar(int y)
  {
    a=y;
  }
  void display()
 {
    cout<<a;
 }
};

int main()
{
  Dollar s1(2);
  rupee s2;
  s2=s1;
  s2.display();
  return 0;
}
