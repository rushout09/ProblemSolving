#include <iostream>
using namespace std;
 int main(){
     int t;
     cin>>t;
     while(t--){
         int x,y;
         cin>>x>>y;
         int arr[x][y];
         for(int i=0;i<x;i++){
             for(int j=0;j<y;j++){
                 cin>>arr[i][j];
             }
         }
         int mm = 0;
         for(int i=1;i<x;i++){
             for(int j=0;j<y;j++){
                 int m = arr[i][j];
                 if(j-1>=0){
                     m = max(m,arr[i][j]+arr[i-1][j-1]);
                 }
                 if(j+1<y){
                     m = max(m,arr[i][j]+arr[i-1][j+1]);
                 }
                 m = max(m,arr[i-1][j]+arr[i][j]);
                 arr[i][j] = m;
                 if(mm<m)
                 mm=m;
             }
         }
         cout<<mm<<endl;
     }
 }