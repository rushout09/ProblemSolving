#include <iostream>
#include <vector>
#define ll long long int
using namespace std;
vector<ll> primes;
void genPrimes(){
    for(ll i=2;i<100000;i++){
        ll x = 0;
        int f = 0;
        while(x<primes.size()){
            if(i%primes[x++]==0 || i<x){
                f=1;
                break;
            }
        }
        if(f==0){
            primes.push_back(i);
        }
    }
}
bool isDiv(ll x){
    for(int i=0;i<primes.size();i++){
        if(x%primes[i]==0){
            return true;
        }
    }
    return false;
}
 int main(){
     int t;
     cin>>t;
     genPrimes();
     while(t--){
         ll x,y;
         cin>>x>>y;
         ll np = x-y;
         if(isDiv(np))
         cout<<"YES"<<endl;
         else
         cout<<"NO"<<endl;
     }
 }