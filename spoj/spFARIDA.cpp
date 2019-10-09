#include <iostream>
#define ll unsigned long long
using namespace std;
int main(){
    int t;
    cin>>t;
    int j = 0;
    while(j!=t){
        int n;
        cin>>n;
        ll arr[n+1];
        arr[0] = 0;
        for(int i=1;i<=n;i++){
            cin>>arr[i];
        }
        for(int i=2;i<=n;i++){
            arr[i] = max(arr[i]+arr[i-2],arr[i-1]);
        }
        j++;
        cout<<"Case "<<j<<": "<<arr[n]<<endl;
    }
}