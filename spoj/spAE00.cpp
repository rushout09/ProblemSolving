#include <iostream>
using namespace std;
 int main(){
     int n;
     cin>>n;
     int sum = 0,i=1;
     while(i*i<=n){
         sum+=n/i-i+1;
         i++;
     }
     cout<<sum;
 }