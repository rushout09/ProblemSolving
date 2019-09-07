#include <iostream>
#include <stack>
using namespace std;
 int main(){
     int n;
     cin>>n;
     string s;
     cin>>s;
     stack<char> st;
     for(int i=0;i<n;i++){
         if(s[i]=='('){
             st.push(s[i]);
         }
         else{
             if(!st.empty() && st.top()=='('){
                 st.pop();
             }
             else{
                 st.push(s[i]);
             }
         }
     }
     if(st.size()==0){
         cout<<"Yes";
     }
     else if(st.size()==2){
         char c = st.top();
         st.pop();
         if(c!=st.top()){
             cout<<"Yes";
         }
         else{
             cout<<"No";
         }
     }
     else{
         cout<<"No";
     }
 }