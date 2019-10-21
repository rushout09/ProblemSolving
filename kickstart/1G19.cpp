#include <bits/stdc++.h>
#define ll long long int
using namespace std;
 int main(){
     int t;
     cin>>t;
     int l=1;
     while(t--){
         ll n,m,q;
         cin>>n>>m>>q;
         unordered_map<int,int> mp;
         for(int i=0;i<m;i++){
             int x;
             cin>>x;
             int j=1;
             while(j*j<=x){
                 if(x%j==0){
                     if(mp.find(j)==mp.end()){
                         mp[j] = 1;
                     }
                     else{
                         mp[j] = 1 + mp[j];
                     }
                     int y = x/j;
                     if(y!=j){
                         if(mp.find(y)==mp.end()){
                             mp[y] = 1;
                         }
                         else{
                             mp[y] = 1 + mp[y];
                         }
                     }
                 }
                 j++;
             }
         }
         ll sum = 0;
         for(int i=0;i<q;i++){
             int r;
             cin>>r;
             sum+=(n/r);
             if(mp.find(r)!=mp.end())
             sum-=mp[r];
         }
         cout<<"Case #"<<l<<": "<<sum<<endl;
         l++;
     }
 }