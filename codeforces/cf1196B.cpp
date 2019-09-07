#include <iostream>
#include <vector>
#define ll long long int
using namespace std;
int main(){
    ll t;
    cin>>t;
    while(t--){
        ll n,k;
        cin>>n>>k;
        ll arr[n];
        vector<ll> st;
        ll nOdd=0;
        for(int i=0;i<n;i++){
            cin>>arr[i];
            if(arr[i]%2!=0){
                st.push_back(i);
                nOdd++;
            }
        }
        if((nOdd-k)>=0 && (nOdd-k)%2==0){
            cout<<"YES"<<endl;
            for(int i=0;i<k-1;i++){
                cout<<st[i]+1<<" ";
            }
            cout<<n<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
}