#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
vector<int>s={1,2,3};
s.push_back(2);
for(int i:s)
{
    cout<<s[i]<<" ";
}
cout<<endl;
cout<<"size = "<<s.size()<<" "<<" capacity= "<<s.capacity();

    return 0;
}