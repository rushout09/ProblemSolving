#include <iostream>
#define ll long long int
using namespace std;
bool isPoss(ll n){
    if(n==1)
    return true;
    if(n%20==0 && n%10==0){
        return (isPoss(n/20) || isPoss(n/10));
    }
    if(n%20==0)
    return isPoss(n/20);
    if(n%10==0)
    return isPoss(n/10);
    return false;
}
 int main(){
     int t;
     cin>>t;
     while(t--){
         ll n;
         cin>>n;
         int f = 0;
         if(!isPoss(n)){
             cout<<"No"<<endl;
         }
         else{
             cout<<"Yes"<<endl;
         }
     }
 }