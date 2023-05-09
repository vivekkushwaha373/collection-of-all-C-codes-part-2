#include<iostream>
using namespace std;
class Parenthesis
{
   
   char *str;
   int top=-1;
   public:
   Parenthesis(string s)
   {
   str=new char[s.length()]; 
   }
   int check(string s)
   {
   for(int i=0;i<s.length();i++)
   {
      if(s[i]=='(')
      Push(s[i]);
      if(s[i]==')')
      {
        if(top==-1)
        {
            return 0;
        }
        if(!Pmatch(pop()))
        return 0;
      }

   }
   if(IsEmpty())
   return 1;
   else
   return 0;
   }

   IsEmpty()
   {
    if(top==-1)
    return 1;
    else
    return 0;
   }
   Push(char v)
   {
      top++;
      str[top]=v;
   }
   char pop()
   {
   top--;
    return str[top+1]; 

   }


   int Pmatch(char m)
   {
    if(m=='(' )
    return 1;
    else
    return 0;
   }
};
int main()
{
string x="((a+b(v+)+))";
Parenthesis s(x);
if(s.check(x))
cout<<"Exact match: Pass";
else
cout<<"Error";

    return 0;
}