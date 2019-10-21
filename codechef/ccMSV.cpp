#include <iostream>
#include <unordered_map>
using namespace std;
 int main(){
     int t;
     cin>>t;
     while(t--){
         unordered_map<int, int> map;
         int n;
         cin>>n;
         int ar[n];
         int max = 0;
         for(int i=0;i<n;i++){
             cin>>ar[i];
             if(map.find(ar[i])!=map.end()){
                 if(max<map[ar[i]]){
                     max = map[ar[i]];
                 }
             }
             int x = 1;
             while(x*x<=ar[i]){
                 if(ar[i]%x==0){
                     if(map.find(x)==map.end()){
                         map[x] = 1;
                     }
                     else{
                         map[x] = map[x]+1;
                     }
                     if(x*x!=ar[i]){
                        if(map.find(ar[i]/x)==map.end()){
                            map[ar[i]/x] = 1;
                        }
                        else{
                            map[ar[i]/x] = map[ar[i]/x]+1;
                        }
                     }
                 }
                 x++;
             }
         }
         cout<<max<<endl;
     }
 }