#include <iostream>
using namespace std;
 int main(){
     int n;
     cin>>n;
     int x = 0;
     for(int i=0;i<n;i++){
         int y;
         cin>>y;
         x = x ^ y;
     }
     cout<<x;
 }