#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    
    for(int i=0;i<n;i++){
        // printing 1st half of row
        for(int  j=1;j<=n-i;j++){
            cout<<j;
        }
        
        // printing space in row
        for(int j=0;j<2*i-1;j++){
            cout<<" ";
        }
        
        // printing the 2nd half of row
        if(i == 0){
            for(int j=n-1-i;j>=1;j--){
            cout<<j;
            }
        }else{
            for(int j=n-i;j>=1;j--){
                cout<<j;
            }
        }
        
        // printing in next line now
        cout<<endl;
    }
    return 0;
}