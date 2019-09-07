#include <iostream>
using namespace std;
 int main(){
     int t;
     cin>>t;
     while(t--){
         int n;
         cin>>n;
         int s = 0;
         while(n){
             n/=5;
             s+=n;
         }
         cout<<s<<endl;
     }
 }