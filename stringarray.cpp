#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    char magazine[10][6];
    char note[10][6];
    int n;
    int m;
    
    cout<<"enter the no of words in magazine: ";
    cin>>m;
    cout<<"enter the no of words in note: ";
    cin>>n;
    int count=0;
    for(int i=0;i<m;i++)
    {   
        cout<<"enter the "<<i+1<<" value: ";
        cin>>magazine[i];
    }
    for(int i=0;i<n;i++)
    {
        cout<<"enter the "<<i+1<<" value: ";
        cin>>note[i];
    }
    for(int j=0;j<n;j++)
    {
        for(int i=0;i<m;i++)
        {
            if(strcmp(note[j],magazine[i])==0)
            {count++;
            }
        }
        cout<<endl<<count;
    }
    
if(count==n)
{
    cout<<"Yes";
}
else
{
    cout<<"No";
}

    return 0;
}
