#include <iostream>
using namespace std;
 int main(){
     int t;
     cin>>t;
     string s;
     cin>>s;
     int n=0,z=0;
     for(int i=0;i<t;i++){
         if(s[i]=='n')
         n++;
         if(s[i]=='z')
         z++;
     }
     while(n--){
         cout<<"1 ";
     }
     while(z--){
         cout<<"0 ";
     }
 }