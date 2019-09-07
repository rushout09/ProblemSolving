#include <iostream>
#include <unordered_map>
#define ll long long int
using namespace std;
unordered_map<ll,ll> mp;
ll findCoin(ll n){
    if(n==0) return 0;
    if(mp.find(n)==mp.end()){
        mp[n] = max(n, findCoin(n/4)+findCoin(n/3)+findCoin(n/2));
        return mp[n];
    }
    else{
        return mp[n];
    }
}
int main(){
    int n;
    while(cin>>n){
        cout<<findCoin(n)<<endl;
    }
}