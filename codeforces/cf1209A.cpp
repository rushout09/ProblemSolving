#include <iostream>
#include <algorithm>
using namespace std;
 int main(){
     int n;
     cin>>n;
     int arr[n];
     int brr[101];
     for(int i=0;i<n;i++){
         cin>>arr[i];
     }
     sort(arr,arr+n);
     int c = 0;
     for(int i=0;i<n;i++){
         if(arr[i]==0)
         continue;
         for(int j=i+1;j<n;j++){
             if(arr[j]!=0 && arr[j]%arr[i]==0){
                 arr[j]=0;
             }
         }
        c++;
         arr[i]=0;
     }
     cout<<c;
 }