#include<iostream>
#include <algorithm>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++)
        cin>>arr[i];
        sort(arr,arr+n,greater<int>());
        int count = 0;
        for(int i=2;i<n;i++){
            if(arr[i]>=1){
                count++;
            }
        }
        int ans = min(count,arr[1]-1);
        cout<<ans<<endl;
    }
}