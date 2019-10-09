#include <iostream>
using namespace std;
 int main(){
     int a1,a2,k1,k2,n;
     cin>>a1>>a2>>k1>>k2>>n;
     int sum = (a1*k1 + a2*k2) - n;
     sum = (a1+a2)-sum>0?(a1+a2-sum):0;
     cout<<sum<<" ";
     int c=0;
     if(k1<k2){
         while(n-(k1)>=0 && a1>0){
             n = n - (k1);
             c++;
             a1--;
         }
         while(n-(k2)>=0 && a2>0){
             n = n- (k2);
             c++;
             a2--;
         }
     }
     else{
         while(n-(k2)>=0 && a2>0){
             n = n- (k2);
             c++;
             a2--;
         }
         while(n-(k1)>=0 && a1>0){
             n = n - (k1);
             c++;
             a1--;
         }
     }
     cout<<c;
 }