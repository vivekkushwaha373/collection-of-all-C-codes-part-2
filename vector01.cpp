#include<iostream>
#include<vector>
#include<iterator>
using namespace std;
int main()
{
    vector<int> v;
    for(int i=1;i<5;i++)
    v.push_back(i*2);
    for(int i=0;i<v.size();i++)
    cout<<v.at(i)<<endl;
    cout<<"size of the vector: "<<v.size()<<endl;
    cout<<"capacity of the vector: "<<v.capacity()<<endl;
    v.resize(3);
    cout<<"resize funtion is called: "<<endl;
    cout<<"size of the vector: "<<v.size()<<endl;
    cout<<"capacity of the vector: "<<v.capacity()<<endl;
    cout<<"add to shrink is called: "<<endl;
    v.shrink_to_fit();
    cout<<"size of the vector: "<<v.size()<<endl;
    cout<<"capacity of the vector: "<<v.capacity()<<endl;
    if(v.empty()==1)
    {
    cout<<"array is empty"<<endl;
    }
    else
    {
    cout<<"array is not empty"<<endl;    
    }
    //formation of iterator
    vector<int >::iterator s;
    s=v.begin();
    for(int i=0;i<v.size();i++)
    {
        cout<<s[i]<<endl;
    }
    vector<int> v2;
    v2.assign(3,10);//will assign 10 thrice;
    v.swap(v2);
    cout<<"vectors are swapped now: "<<endl;
    for(int i=0;i<v.size();i++)
    cout<<v.at(i)<<endl;

    v2.assign(2,1);
      for(int i=0;i<v2.size();i++)
    cout<<v2.at(i)<<endl;
    vector<int>:: iterator x;
    // x=v.begin();
    v.insert(v.begin(),6);
    x=v.begin();
    cout<<x[0]<<endl;
    cout<<x[2]<<endl;
    cout<<v.front()<<endl;
    cout<<v.back();
    return 0;
} 

