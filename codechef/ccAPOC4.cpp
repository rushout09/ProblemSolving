#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            cout<<n-j<<" ";
        }
        for(int j=i+1;j<n;j++){
            cout<<n-i<<" ";
        }
        for(int j=i;j<n-1;j++){
            cout<<n-i<<" ";
        }
        for(int j=i;j>0;j--){
            cout<<n-j+1<<" ";
        }
        cout<<endl;
    }
    for(int i=0;i<n-1;i++){
        for(int j=n;j>i+1;j--)
        cout<<j<<" ";
        for(int j=0;j<=i;j++)
        cout<<i+2<<" ";
        for(int j=0;j<i;j++)
        cout<<i+2<<" ";
        for(int j=i+2;j<=n;j++)
        cout<<j<<" ";
        cout<<endl;
    }
}