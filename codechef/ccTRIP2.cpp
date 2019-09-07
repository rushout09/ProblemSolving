#include <bits/stdc++.h>
using namespace std;
int n,k;
bool isFit(int arr[], int i){
    if(i==n)
    return true;
    if(arr[i]!=-1){
        if((i-1<0 && arr[i-1]==arr[i]) || (i+1>=n && arr[i+1]==arr[i])){
            return false;
        }
        else{
            return isFit(arr,i+1);
        }
    }
    else{
        for(int j=1;j<=k;j++){
            int f = 0;
            if(i-1>=0){
                if(arr[i-1]==j)
                f=1;
            }
            if(i+1<n){
                if(arr[i+1]==j)
                f=1;
            } 
            if(f==0){
                arr[i] = j;
                if(isFit(arr,i+1))
                return true;
                arr[i] = -1;
            }
        }
        return false;
    }
}
int main(){
    int t;
    cin>>t;
    while(t--){
        cin>>n>>k;
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        if(isFit(arr, 0)){
            cout<<"YES"<<endl;
            for(int i=0;i<n;i++){
                cout<<arr[i]<<" ";
            }
            cout<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
}