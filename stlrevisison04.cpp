#include<iostream>
#include<list>
using namespace std;
int main()
{
list<int>l1;
l1.push_front(1);
l1.push_back(3);
l1.push_back(4);
l1.push_back(7);
l1.push_back(5);
for(auto it=l1.begin();it!=l1.end();it++)
{
    cout<<*it<<" ";
}
    return 0;
}