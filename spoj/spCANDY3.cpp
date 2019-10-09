#include <iostream>
#define ll long long int
using namespace std;
 int main(){
     int t;
     cin>>t;
     while(t--){
         ll n;
         cin>>n;
         ll sum = 0;
         ll x;
         for(ll i=0;i<n;i++){
             cin>>x;
             sum = (sum + x)%n;
         }
         if(sum%n==0){
             cout<<"YES"<<endl;
         }
         else
         cout<<"NO"<<endl;
     }
 }