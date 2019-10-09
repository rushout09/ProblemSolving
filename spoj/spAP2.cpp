#include <iostream>
#define ll long long int
using namespace std;
 int main(){
     ll t;
     cin>>t;
     while(t--){
         ll a,b,c;
         cin>>a>>b>>c;
         ll ans = (c*2)/(a+b);
         ll d = (b-a)/(ans-5);
         a -= 2*d;
         cout<<ans<<endl;
         for(int i=0;i<ans;i++){
             cout<<(a+(i*d))<<" ";
         }
         cout<<endl;
     }

 }