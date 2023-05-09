// #include<bits/stdc++.h>
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
vector<int>s1;
for(int i=0;i<5;i++)
s1.push_back(i+1);
for(int i=0;i<s1.size();i++)

cout<<s1[i]<<" ";
cout<<endl;
reverse(s1.begin(),s1.end());
for(int i=0;i<s1.size();i++)

cout<<s1[i]<<" ";
cout<<endl;
cout<<"max size= "<<s1.max_size()<<endl;//number of element it can hold;
cout<<"size= "<<s1.size()<<endl;//size of the array;
cout<<"capacity= "<<s1.capacity()<<endl;//capacity of the arrray;
fill(s1.begin(),s1.end(),1);
cout<<"size= "<<s1.size()<<endl;
cout<<"cpapcity= "<<s1.capacity()<<endl;
for(int i=0;i<s1.size();i++)
cout<<s1[i]<<" ";
s1.resize(3);
cout<<endl;
// s1.insert(s1.begin(),1);
cout<<"size= "<<s1.size()<<endl;
s1.insert(s1.begin(),8);
for(int i=0;i<s1.size();i++)
cout<<s1[i]<<" ";
cout<<endl;
// s1.clear();
s1.erase(s1.begin());
for(int i=0;i<s1.size();i++)
cout<<s1[i]<<" ";
cout<<endl;
cout<<"size= "<<s1.size()<<endl;
s1.shrink_to_fit();
cout<<"capacity= "<<s1.capacity()<<endl;
s1.assign(10,15);
for(int i=0;i<s1.size();i++)
cout<<s1[i]<<" ";
    return 0;
}