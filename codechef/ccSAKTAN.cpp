#include <iostream>
#define ll long long int 
using namespace std;
 int main(){
     int t;
     cin>>t;
     while(t--){
         int n,m,q;
         cin>>n>>m>>q;
         int row[n]={0},col[m]={0};
         ll oddr = 0, oddc = 0,ever = 0, evec = 0;
         for(int i=0;i<q;i++){
             int x,y;
             cin>>x>>y;
             row[x-1]++;
             col[y-1]++;
         }
         for(int i=0;i<n;i++){
             if(row[i]%2==0){
                 ever++;
             }
             else
             oddr++;
         }
         for(int i=0;i<m;i++){
             if(col[i]%2==0){
                 evec++;
             }
             else
             oddc++;
         }
         ll ans = (evec*oddr)+(ever*oddc);
         cout<<ans<<endl;
     }
 }