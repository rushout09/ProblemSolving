#include <iostream>
using namespace std;
 int main(){
     int a,b;
     cin>>a>>b;
     cout<<b<<" "<<a<<endl;
     string s1 = "";
     while(b){
         int d = b%16;
         b = b/16;
         if(d>9){
             s1 = (char)(d+'A'-10) + s1;
         }
         else{
             s1 = (char)(d+'0') + s1;
         }
     }
     string s2 = "";
     while(a){
         int d = a%16;
         a = a/16;
         if(d>9){
             s2 = (char)(d+'A'-10) + s2;
         }
         else{
             s2 = (char)(d+'0') + s2;
         }
     }
     cout<<s1<<" "<<s2;

 }