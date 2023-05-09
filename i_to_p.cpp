#include<iostream>
using namespace std;
class Infix
{
   char *str;
   char *ptr;
   int m,n;
   public:
   Infix(string x)
   {
      str=new char[x.length()+1];
      ptr=new char[x.length()+1];
      
      m=-1;
      n=-1;
   }
   infix_to_postfix(string x)
   {
    for(int i=0;i<x.length();i++)
    {
      if(Isoperator(x[i]))
      {
        if(m==-1)
        {
            str[++m]=x[i];
        }
        else
        {
           if(precedence(str[m])<precedence(x[i]))
           {
            str[++m]=x[i];
           }
           else
           {
            ptr[++n]=str[m];
            str[m]=x[i];
           }
        }
      }
      else
      {
        ptr[++n]=x[i];
      }
    }
    if(m!=-1)
    {
        while(m!=-1)
        {
          ptr[++n]=str[m];
          m--;
        }
    }
   }
   precedence(char b)
   {
   if(b=='+' || b=='-')
   return 1;
   if(b=='/' || b=='*')
   return 2;
   }
   Isoperator(char y)
   {
   if(y=='*' || y=='/'|| y=='+'|| y=='-')
   return 1;
   else
   return 0;
   }
   printinfix()
   {
     for(int i=0;i<n+1;i++)
     {
        cout<<ptr[i];
     }
   }
   Calculateinfix()
   {
    
   }
};
int main()
{
string s="2*3+5";
Infix x(s);
x.infix_to_postfix(s);
x.printinfix();
x.Calculateinfix();
}