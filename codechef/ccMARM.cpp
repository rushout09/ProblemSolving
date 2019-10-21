#include <iostream>
#define ll long long int
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        ll n,k;
        cin>>n>>k;
        ll arr[n];
        for(ll i=0;i<n;i++){
            cin>>arr[i];
        }
        ll rem =  k%n;
        ll r = k/n;
        if(r>=3){
            for(ll i=0;i<3;i++){
                for(ll j=0;j<n;j++){
                    arr[j] = arr[j] ^ arr[n-j-1];
                }
            }
        }
        r=r%3;
        for(ll i=0;i<r;i++){
            for(ll j=0;j<n;j++){
                arr[j] = arr[j] ^ arr[n-j-1];
            }
        }
        for(ll i=0;i<rem;i++){
            arr[i] = arr[i] ^ arr[n-i-1];
        }
        for(ll i=0;i<n;i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
}