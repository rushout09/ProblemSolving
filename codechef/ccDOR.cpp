#include <iostream>
#include <climits>
#define ll unsigned long long int
using namespace std;
 int main(){
     int t;
     cin>>t;
     while(t--){
         ll l,r;
         cin>>l>>r;
         int i=63;
         ll ans=0;
         int f = 0;
         for(i=63;i>=0;i--){
             if(f==0 && ((1LL<<i&r)==(1LL<<i&l))){
                 if((1LL<<i&r)==(1LL<<i))
                    ans = ans|(1LL<<i);
             }
             else{
                 f=1;
                 ans = ans | (1LL<<i);
             }
         }
         cout<<ans<<endl;
     }
 }