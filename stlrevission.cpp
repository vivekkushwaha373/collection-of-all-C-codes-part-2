#include<iostream>
#include<algorithm>
#include<array>
using namespace std;
int main()
{

array<int,6>s={1,2,3,4,5,6};
cout<<"size of array"<<s.size();
cout<<endl;
for(int i=0;i<s.size();i++)
{
    cout<<s[i]<<" ";
}
cout<<endl;
cout<<"Is it empty?---> "<<s.empty()<<endl;
cout<<"First element----->"<<s.front()<<endl;
cout<<"Back element----->"<<s.back()<<endl;
fill(s.begin(),s.end(),1);
for(int i=0;i<s.size();i++)
{
    cout<<s[i]<<" ";
}
    return 0;
}