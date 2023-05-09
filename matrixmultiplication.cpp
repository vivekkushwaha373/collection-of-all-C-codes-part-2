#include<iostream>
using namespace std;
int main()
{
    int matrix1[3][3];
    int matrix2[3][3];
    int sum=0;
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            cout<<"enter your a["<<i<<"]j["<<j<<"] value: ";
            cin>>matrix1[i][j];
        }
    }
     for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            cout<<"enter your a["<<i<<"]j["<<j<<"] value: ";
            cin>>matrix2[i][j];
        }
    }
   cout<<" your matrrix1 is: "<<endl;
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
           
           cout<<matrix1[i][j]<<" "; 
        }
        cout<<endl;
    }
    cout<<" your matrrix2 is: "<<endl;
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
           
           cout<<matrix2[i][j]<<" "; 
        }
        cout<<endl;
    }
    cout<<"your matrix multiplication is:"<<endl;
    for(int k=0;k<3;k++)
    {
    // for(int m=0;m<3;m++)
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            sum=sum+matrix1[k][j]*matrix2[j][i];
            
        }
        cout<<sum<<" ";
        sum=0;
    }
    cout<<endl;
    }
    return 0;
}