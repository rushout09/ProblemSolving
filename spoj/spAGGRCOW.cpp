#include <iostream>
#include <algorithm>
using namespace std;
int arr[100000];
int n,c;
int F(int x){
    int noOfCowsPlaced = 1, lastPlaced = arr[0];
    for(int i=1;i<n;i++){
        if(arr[i]-lastPlaced>=x){
            if(++noOfCowsPlaced==c)
            return 1;
            lastPlaced = arr[i];
        }
    }
    return 0;
}
 int main(){
     int t;
     cin>>t;
     while(t--){
         
         cin>>n>>c;
         for(int i=0;i<n;i++){
             cin>>arr[i];
         }
         sort(arr,arr+n);
         int start = 0, end = arr[n-1]-arr[0]+1,mid;
         while(end-start>1){
             mid = (start+end)/2;
             if(F(mid)){
                 start = mid;
             }
             else{
                 end = mid;
             }
             
         }
         cout<<start<<endl;
     }
 }