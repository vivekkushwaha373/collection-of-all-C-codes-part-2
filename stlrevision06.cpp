#include<iostream>
#include<set>
using namespace std;
int main()
{
set<int>s;s
s.insert(2);
s.insert(3);
s.insert(7);
s.insert(5);
s.insert(5);
s.insert(7);
cout<<s.count(1)<<endl;
cout<<s.size()<<endl;
set<int>::iterator i=s.find(2);
cout<<*i<<" "<<endl;
for(auto i:s)
{
    cout<<i<<" ";
}
    return 0;
}