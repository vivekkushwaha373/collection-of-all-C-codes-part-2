#include<iostream>
#include<vector>
using namespace std;
int main()
{
  vector<int>s;
  s.push_back(1);
  s.push_back(1);
  s.push_back(3);
//   s.push_back(4);
  vector<int >x={1,2,3,4};
  s.swap(x);
  cout<<s.size()<<endl;
  cout<<s.capacity()<<endl;
  for(int i=0;i<s.size();i++)
  {
    cout<<s[i]<<" ";
  }
  cout<<endl;
  s.shrink_to_fit();
  cout<<s.front()<<endl;
  cout<<s.back();
    return 0;
}