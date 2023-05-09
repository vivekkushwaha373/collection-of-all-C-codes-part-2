#include<iostream>
using namespace std;
void selectionsort(int ptr[],int n)
{int min,temp,j,x;
for(int i=0;i<=n;i++)
{
    min=ptr[i];
    for(j=i+1;j<=n;j++)
    {
    if(min>ptr[j])
    {min=ptr[j];
    x=j;
    }

    }
    if(min==ptr[i])
    continue;
    else
    {temp=ptr[i];
    ptr[i]=min;
    ptr[x]=temp;}
}
}
void printmyarray(int ptr[],int n)
{
    for(int i=0;i<=n;i++)
    {
        cout<<ptr[i]<<" ";
    }
}
int main()
{
   int arr[10]={4,3,2,6,7,1,13,12,8,5};
   selectionsort(arr,9);
   printmyarray(arr,9);


    return 0;
}