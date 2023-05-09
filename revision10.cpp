#include<bits/stdc++.h>
using namespace std;
int main()
{   
    
    priority_queue<int,vector<int>,greater<int>>x;//greater element has priority
    x.push(1);
    x.push(10);
    x.push(5);
    x.push(12);
    x.push(7);
    while(x.empty()==0)
    {
        cout<<x.top()<<" ";
        x.pop();
    }
//top is valid in priority queue 
//top is invalid in queue
    return 0;
}