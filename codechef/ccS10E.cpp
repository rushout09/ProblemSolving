#include <iostream>
using namespace std;
 int main(){
     int t;
     cin>>t;
     while(t--){
         int n;
         cin>>n;
         int arr[5];
         for(int i=0;i<5;i++){
             arr[i] = 751;
         }
         int i=0;
         int count = 0;
         for(int j=0;j<n;j++){
             int x;
             cin>>x;
             int min = 751;
             for(int k=0;k<5;k++){
                 if(arr[k]<min)
                 min=arr[k];
             }
             if(x<min){
                 count++;
             }
             arr[i++]=x;
             if(i%5==0)
             i=0;
         }
         cout<<count<<endl;
     }
 }