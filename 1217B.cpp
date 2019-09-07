#include <iostream>
#include <climits>
#include <math.h>
using namespace std;
 int main(){
     int t;
     cin>>t;
     while(t--){
         int n,x;
         cin>>n>>x;
         int d[n],h[n];
         int max = INT_MIN, dmax, hmax;
         for(int i=0;i<n;i++){
             cin>>d[i]>>h[i];
             int sub = d[i]-h[i];
             if(max<sub){
                 max = sub;
                 dmax = d[i];
                 hmax = h[i];
             }
         }
         if(max<=0){
             cout<<-1<<endl;
         }
         else{
             int count = x/max;
             count--;
             x = x%max;
             x+=max;
             while(x>0){
                 count++;
                 x=x-dmax;
                 if(x>0){
                     x+=hmax;
                 }
             }
             cout<<count<<endl;
         }

     }
 }