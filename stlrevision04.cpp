#include<iostream>
#include<stack>
using namespace std;
int main()
{
    stack<int>s1;
    s1.push(1);
    s1.push(2);
    s1.push(3);
    s1.pop();
    while(!s1.empty())
    {
        cout<<s1.top();
        s1.pop();
    }
    
    return 0;
}