#include <iostream>
using namespace std;
 int main(){
     int t;
     cin>>t;
     while(t--){
         int a = 0, b = 0, c = 0;
         string s;
         char d;
         cin>>s;
         for(int i=0;i<s.size();i++){
             if(s[i]>='0' && s[i]<='9'){
                 a = a*10 + (s[i]-'0');
             }
             else{
                 a=0;
                 break;
             }
         }
         cin>>d;
         cin>>s;
         for(int i=0;i<s.size();i++){
             if(s[i]>='0' && s[i]<='9'){
                 b = b*10 + (s[i]-'0');
             }
             else{
                 b=0;
                 break;
             }
         }
         cin>>d;
         cin>>s;
         for(int i=0;i<s.size();i++){
             if(s[i]>='0' && s[i]<='9'){
                 c = c*10 + (s[i]-'0');
             }
             else{
                 c=0;
                 break;
             }
         }
         if(a==0){
             cout<<(c-b)<<" + "<<b<<" = "<<c<<endl;
         }
         else if(b==0){
             cout<<a<<" + "<<(c-a)<<" = "<<c<<endl;
         }
         else if(c==0){
             cout<<a<<" + "<<b<<" = "<<(a+b)<<endl;
         }
     }
 }