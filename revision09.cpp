#include<iostream>
#include<forward_list>
using namespace std;
int main()
{
forward_list<int>s1;
for(int i=0;i<10;i++)
s1.push_front(i+1);
for(int i=0;i<10;i++)
cout<<s1[i]<<" ";
    return 0;
}