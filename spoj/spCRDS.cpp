#include <iostream>
#include <cstring>
#define MOD 1000007
using namespace std;
int arr[1000001];
 int main(){
     int t;
     cin>>t;
     memset(arr,0,sizeof(arr));
     while(t--){
         int n;
         cin>>n;
         int ans = 0;
         if(arr[n]!=0){
             cout<<arr[n]<<endl;
             continue;
         }
         for(int i=1;i<=n;i++){
             ans = (ans%MOD + (2%MOD*i%MOD)%MOD + (i%MOD-1%MOD)%MOD)%MOD;
             arr[i] = ans;
         }
         arr[n]=ans;
         cout<<ans<<endl;
     }
 }