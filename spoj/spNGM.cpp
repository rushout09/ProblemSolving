#include <iostream>
using namespace std;
 int main(){
     unsigned long long n;
     cin>>n;
     if(n%10==0){
         cout<<2;
     }
     else{
         cout<<1<<endl;
         cout<<n%10;
     }
 }