/* Segmented sieve implementation */

#include <iostream>
#include <vector>
#include <cstring>
#define MAXN 100001
#define ll long long int
using namespace std;
bool arr[MAXN];
vector<int> primes;
void simpleSieve(){
    memset(arr,true,sizeof(arr));
    arr[0] = arr[1] = false;
    for(int i=2;i*i<=MAXN;i++){
        if(arr[i]){
            for(int j=i*2;j<MAXN;j+=i){
                arr[j] = false;
            }
            primes.push_back(i);
        }
    }
}
void segmentedSieve(ll m, ll n){
    bool arr[n-m+1];
    memset(arr,true,sizeof(arr));
    for(ll i=0;i<primes.size();i++){
        ll loLimit = (m/primes[i])*primes[i];
        if(loLimit<m)
        loLimit+=primes[i];
        for(ll j = loLimit;j<=n;j+=primes[i]){
            if(j!=primes[i])
            arr[j-m]=false;
        }
    }
    for(ll i=m;i<=n;i++){
        if(arr[i-m]){
            if(i!=1)
            cout<<(i)<<endl;
        }
    }
}

int main(){
    simpleSieve();
    int t;
    cin>>t;
    while(t--){
        ll m,n;
        cin>>m>>n;
        segmentedSieve(m,n);
    }
}