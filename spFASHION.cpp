#include <iostream>
#include <algorithm>
using namespace std;
 int main(){
     int t;
     cin>>t;
     while(t--){
         int n;
         cin>>n;
         int arr[n],brr[n];
         for(int i=0;i<n;i++)cin>>arr[i];
         for(int i=0;i<n;i++)cin>>brr[i];
         sort(arr,arr+n);
         sort(brr,brr+n);
         long long int sum = 0;
         for(int i=0;i<n;i++)
         sum+=(arr[i]*brr[i]);
         cout<<sum<<endl;
     }
 }