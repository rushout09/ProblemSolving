#include <iostream>
#include <math.h>
#define ll long long int
using namespace std;
 int main(){
     int t;
     cin>>t;
     while(t--){
         ll a,b,c;
         cin>>a>>b>>c;
         ll ans = a+c;
         ll count = 0;
         while(ans>b && c>=0){
             count++;
             ans--;
             b++;
             c--;
         }
         cout<<count<<endl;
     }
 }