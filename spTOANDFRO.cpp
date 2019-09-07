#include <iostream>
using namespace std;
 int main(){
     int n;
     cin>>n;
     while(n){
         string s;
         cin>>s;
         char mat[s.size()/n][n];
         int k = 0;
         for(int i=0;i<s.size()/n;i++){
             int j = 0;
             while(j<n){
                 mat[i][j++] = s[k++];

             }
             i++;
             if(i<s.size()/n){
                 while(j>0){
                     mat[i][--j] = s[k++];
                 }
             }
         }         
         for(int i=0;i<n;i++){
             for(int j=0;j<s.size()/n;j++){
                 cout<<mat[j][i];
             }
         }
         cout<<endl;
         cin>>n;
     }
     return 0;
 }