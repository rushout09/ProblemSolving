#include <iostream>
#include <stack>
using namespace std;
 int main(){
     while(true){
         int n;
         cin>>n;
         stack<int> st;
         if(n==0)
         break;
         int m = 1,f=0;
         int arr[n];
         for(int i=0;i<n;i++){
             cin>>arr[i];
         }
         for(int i=0;i<n;i++){
             int x = arr[i];
             if(x!=m){
                 if(!st.empty() && st.top()==m){
                     st.pop();
                     m++;
                     i--;
                 }
                 else if(!st.empty() && st.top()<x){
                     f=1;
                     break;
                 }
                 else{
                     st.push(x);
                 }
             }
             else{
                 m++;
             }
         }
         if(f==0){
             cout<<"yes"<<endl;
         }
         else{
             cout<<"no"<<endl;
         }
     }
 }