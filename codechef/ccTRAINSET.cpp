
#include <bits/stdc++.h>
using namespace std;
 int main(){
     int t;
     cin>>t;
     while(t--){
         int n;
         cin>>n;
         int i=0;
         int c1=0,c2=0,sum=0;
         while(i!=n){
             string s;
             cin>>s;
             if(i==0 || strcmp(s[i-1],s[i])==0){
                 int x;
                 cin>>x;
                 if(x==0)
                 c1++;
                 else
                 c2++;
             }
             else{
                 sum+=max(c1,c2);
                 c1=0;
                 c2=0;
             }
             i++;
         }
         sum+=max(c1,c2);
         cout<<sum<<endl;
     }
 }