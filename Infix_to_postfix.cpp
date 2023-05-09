#include<bits/stdc++.h>
using namespace std;
class Infix
{
    char *ptr;
    char *str;
    
    int m=-1,n=-1;
    public:
    allocate(string s)
    {
     ptr=new char[s.length()+1];
     str=new char[s.length()+1];
   
    }
    
    Infix_to_postfix(string s)
    {
    for(int i=0;i<s.length();i++)
    {
        if(ifoperator(s[i]))
        {
            if(n==-1)
            {
                n++;
                str[n]=s[i];
            }
            else
            {
            while(1)
            {
           if(presidence(str[n])<presidence(s[i]))
          {
            
             
             n++;
             str[n]=s[i];
             break;
             
          }
           else
           {
             if(n==(-1))
             {
             n++;
             str[n]=s[i];
             break;
             }
            
            m++;
            cout<<n<<" "<<str[n]<<" ";
            ptr[m]=str[n];
            n--;
            
           }
            }
           }
         
        }
      
        else
        {
           m++;
           ptr[m]=s[i];
        }
    }
      while(n!=-1)
        {
            m++;
            ptr[m]=str[n];
            n--;
        }
        ptr[s.length()]='\0';
        str[++n]='\0';
        cout<<endl;
        cout<<ptr<<" "<<str;
        delete[]ptr;
        delete[]str;
    }
    int ifoperator(char v)
    {
      
      if(v=='+' || v=='-' || v=='*'||v=='/')
      return 1;
      else
      return 0;
    }
    int presidence(char v)
    {
     
      if(v=='-'|| v=='+')
      return 1;
      if(v=='/'||v=='*')
      return 2;
      
    }
};

int main()
{
    string s="x-y/z-k*d";
    
    Infix x;
    x.allocate(s);
    x.Infix_to_postfix(s);
    return 0;
}
