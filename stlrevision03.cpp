#include<iostream>
#include<deque>
using namespace std;
int main()
{
deque<int>s1;
s1.push_back(1);
s1.push_back(2);
s1.push_back(3);
s1.push_back(4);
s1.push_back(6);
s1.push_back(7);
cout<<s1.front()<<endl;
cout<<s1.back()<<endl;
cout<<s1.size();
while(!s1.empty())
{
 cout<<s1.front()<<" ";
 s1.pop_front();
}
    return 0;
}