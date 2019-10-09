#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    int t;
    cin>>t;
    for(int i=1;i<=t;i++){
        int s,n;
        cin>>s>>n;
        int arr[n];
        for(int j=0;j<n;j++){
            cin>>arr[j];
        }
        sort(arr,arr+n, greater<int>());
        int sum = 0,j;
        for(j=0;j<n;j++){
            if(sum>=s){
                break;
            }
            sum+=arr[j];
        }
        cout<<"Scenario #"<<i<<":"<<endl;
        if(sum<s){
            cout<<"impossible"<<endl;
        }
        else{
            cout<<j<<endl;
        }
    }
}