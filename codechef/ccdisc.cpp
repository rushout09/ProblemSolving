#include <iostream>
#include <string.h>
using namespace std;
 int main(){
     int t;
     cin>>t;
     while(t--){
         string s;
         cin>>s;
         if(s.size()==1)
         {
             cout<<s<<endl;
             continue;
         }
         string t = "";
         if(s[1]=='0'){
             int j=2;
             while(j<s.size() && s[j]=='0'){
                 j++;
             }
             if(j==s.size())
             t=t+'0';
             else
             {
                 for(j;j<s.size();j++)
                 t=t+s[j];
             }

         }
         else{
             int i=0;
             while(i<s.size()-1 && s[i]<=s[i+1]){
                 t=t+s[i];
                 i++;
             }
             i++;
             while(i<s.size()){
                 t=t+s[i];
                 i++;
             }
         }
         cout<<t<<endl;
     }
 }