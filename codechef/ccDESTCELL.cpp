#include <bits/stdc++.h>
#include <cstring>
using  namespace std;
int arr[1001][1001];
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        int k = (n*m);
        for(int i=0;i<k;i++){
            memset(arr,0,sizeof(arr));
            int l = 0;
            int c = 0;
            while(l<(n*m)){
                if(arr[l/m][l%m]==0){
                    arr[l/m][l%m]=1;
                    c++;
                }
                if(arr[l%n][l/n]==0){
                    arr[l%n][l/n] = 1;
                    c++;
                }
                l+=(i+1);
            }
            cout<<c<<" ";
        }
        cout<<endl;
    }
}