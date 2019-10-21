#include <iostream>
#include <unordered_set>
#include <math.h>
#define ll long long int
using namespace std;
int minBase(string s){
    char c = '0';
    for(int i=0;i<s.size();i++){
        if(s[i]>c){
            c=s[i];
        }
    }
    if(c>'0' && c<='9'){
        return c-'0'+1;
    }
    return (c-'A'+10+1);
}
ll decimalValue(string s, int base){
    ll ans = 0;
    for(int i=0;i<s.size();i++){
        if(s[i]>='0' && s[i]<='9')
        ans = ans + (s[i]-'0')*pow(base,s.size()-i-1);
        else
        ans = ans + (s[i]-'A' + 10)*pow(base,s.size()-i-1);
    }
    return ans;
}
 int main(){
     int t;
     cin>>t;
     while(t--){
         int n;
         cin>>n;
         int b[n];
         string y[n];
         int f = 0;
         unordered_set<ll> values[n];
         for(int i=0;i<n;i++){
             cin>>b[i]>>y[i];
         }
         for(int i=0;i<n;i++){
             if(b[i]!=-1){
                 int d = decimalValue(y[i],b[i]);
                 values[i].insert(d);
             }
             else{
                 int m = minBase(y[i]);
                 for(int i=m;i<=36;i++){
                     int d = decimalValue(y[i],i);
                     values[i].insert(d);
                 }
             }
         }
         unordered_set<ll>::iterator itr=values[0].begin();
         for(itr=values[0].begin();itr!=values[0].end();itr++){
             for(int j=1;j<n;j++){
                 if(values[j].find(*itr)!=values[j].end()){
                     f=1;
                     break;
                 }
             }
             if(f==0){
                 break;
             }
         }
         if(f==0){
             cout<<*itr<<endl;
         }
         else{
             cout<<-1<<endl;
         }
         
     }
 }