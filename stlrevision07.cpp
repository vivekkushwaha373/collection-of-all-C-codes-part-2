#include<iostream>
#include<map>
using namespace std;
int main()
{
multimap<int,string>s;
s.insert(pair<int,string>(2,"hello"));
s.insert(pair<int,string>(4,"zayy"));
s.insert(pair<int,string>(8,"how"));
s.insert(pair<int,string>(5,"are"));
s.insert(pair<int,string>(8,"ao"));
for(auto i=s.begin();i!=s.end();i++)
{
    cout<<i->first<<" "<<i->second<<" "<<endl;
}
cout<<"Size = "<<s.size()<<endl;
    return 0;
}