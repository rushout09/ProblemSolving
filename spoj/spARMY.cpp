#include <iostream>
#include <climits>
using namespace std;
 int main(){
     int t;
     cin>>t;
     while(t--){
         int n,m;
         cin>>n>>m;
         int nmax=INT_MIN,mmax=INT_MIN;
         for(int i=0;i<n;i++){
             int x;
            cin>>x;
             if(nmax<x)
             nmax = x;
         }
         for(int i=0;i<m;i++){
             int x;
            cin>>x;
             if(mmax<x)
             mmax = x;
         }
         if(nmax>=mmax){
             cout<<"Godzilla"<<endl;
         }
         else{
             cout<<"MechaGodzilla"<<endl;
         }
     }
 }