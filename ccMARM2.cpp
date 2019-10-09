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
        for(int i=0;i<k;i++){
            arr[i%n] = arr[i%n] ^ arr[n-(i%n)-1];
        }
        for(int i=0;i<n;i++){
            cout<<arr[i]<<" ";
        }
    }
}