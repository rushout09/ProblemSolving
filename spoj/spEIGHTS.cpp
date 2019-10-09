#include <iostream>
#define ll unsigned long long
using namespace std;
 int main(){
     ll t;
     cin>>t;
     while(t--){
         ll x;
         cin>>x;
         ll ans = (192+(x-1)*250);
         cout<<ans<<endl;
     }
 }