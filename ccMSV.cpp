#include <iostream>
using namespace std;
 int main(){
     int t;
     cin>>t;
     while(t--){
         int n;
         cin>>n;
         int ar[n];
         for(int i=0;i<n;i++)
         cin>>ar[i];
         int max = 0;
         for(int i=0;i<n;i++){
             int count = 0;
             for(int j=0;j<i;j++){
                 if(ar[j]%ar[i]==0){
                     count++;
                 }
             }
             if(count>max)
             max = count;
         }
         cout<<max<<endl;
     }
 }