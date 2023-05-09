#include<iostream>
using namespace std;
class student
{
  public:
  int t;
  
  student()
  {
    cout<<"Enter the value of t: ";
    cin>>t;
  }
  void f1( )
  {
      if(t==1)
      printf("tum bsdk ho\n");
      if(t==2)
      printf("Tum bsdk wala kam mat karo nahito tum bsdk baan gayoge");
      if(t==3)
      cout<<"i love you zara";
      if(t==4)
      cout<<"I love you savita bhabhi";
      if(t==5)
      cout<<"I love you mallu aunty";
      if(t==6)
      cout<<"I love you zoya";
      if(t==7)
      cout<<"I love you zahira";
      if(t==8)
      cout<<"I love you mansi bhabhi";
      else
      cout<<"Bsdk tune value 8 se gyada kyu dala ad ladki nahi milegi";
  }
  

};

int main()
{
student s1;

 try
{

throw s1;

// throw s2;
}
catch(student C)
{
    C.f1();
}
return 0;
}