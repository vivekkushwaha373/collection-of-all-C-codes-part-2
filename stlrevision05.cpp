#include<iostream>
    #include<queue>
using namespace std;
int main()
{
    priority_queue<int>s;
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    while(!s.empty())
    {
       cout<<s.top()<<" ";
       s.pop();
 
    }
    cout<<endl;
    priority_queue<int,vector<int>,greater<int>>x;
    x.push(1);
    x.push(2);
    x.push(3);
    x.push(4);
    x.push(5);
    x.push(6);
    while(!x.empty())
    {
        cout<<x.top()<<" ";
        x.pop();
    }
    return 0;
}