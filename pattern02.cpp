#include<iostream>
using namespace std;
int main()
{
for(int i=0;i<7;i++)
{
    for(int j=0;j<7;j++)
    {
      if(j>=i)
      {
        cout<<char(65+j-i);
      }
    }
    for(int j=0;j<2*i-1;j++)
{
   cout<<" ";
}
if(i==0)
{
  for(int j=1;j<7;j++)
  {
     cout<<char(71-j);
  }
}
else
{
for(int j=0;j<7;j++)
{
    if(j>=i)
   { 
 cout<<char(71-j);
   }

}
}
      cout<<endl;
}


return 0;
}