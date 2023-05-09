#include<iostream>
using namespace std;
int main()
{
    int arr[2]={0,2};
    int brr[2][2]={{1,2},{3,4}};
    cout<<"address of zero "<<arr<<endl;
    cout<<"address of 2 "<<arr+1<<endl;
    cout<<"value of zero "<<*arr<<endl;
    cout<<"value of 2 is "<<*(arr+1)<<endl;
    cout<<"address of 1st row is "<<(brr)<<endl;
    cout<<"address of 2nd row is "<<brr+1<<endl;
    cout<<"address of 1st element of the first row "<<(*brr)<<endl;
    cout<<"address of 2nd element of the first row "<<(*brr+1);
    cout<<"value of 1st element of the first row "<<*(*brr)<<endl;
    cout<<"value of 2nd element of the first row "<<*(*brr+1);
    cout<<"address of 1st element of the second row "<<*(brr+1)<<endl;
    cout<<"address of 2nd element of the second row "<<(*(brr+1)+1)<<endl;
    cout<<"address of 1st element of the second row "<<*(*(brr+1))<<endl;
    cout<<"address of 2nd element of the second row "<<*(*(brr+1)+1)<<endl;
    return 0;
}