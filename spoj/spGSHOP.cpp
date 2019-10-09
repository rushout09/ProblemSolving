#include <iostream>
#include <algorithm>
using namespace std;
 int main(){
     int t;
     cin>>t;
     while(t--){
         int n,k;
         cin>>n>>k;
                
         int arr[n];
         for(int i=0;i<n;i++){
             cin>>arr[i];
             if(arr[i]<0 && k>0){
                 arr[i] = -arr[i];
                 k--;
             }
             else if(arr[i]==0 && k>0){
                 k=0;
             }
         }
         sort(arr,arr+n);
         if(k>0 && k%2!=0)
             arr[0] = -arr[0];
         long long sum = 0;
         for(int i=0;i<n;i++){
             sum+=arr[i];
         }
         cout<<sum<<endl;
     }
 }