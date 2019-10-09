#include <iostream>
#include <algorithm>
using namespace std;
 int main(){
     int q;
     cin>>q;
     while(q--){
         int n;
         cin>>n;
         int arr[n];
         int brr[12] = {0};

         for(int i=0;i<n;i++){
             int x;
             cin>>x;
             if(x>2048)
             {
                 continue;
             }
             int c = 0;
             while(x){
                 x=x>>1;
                 c++;
             }
             brr[c-1]++;
         }
         for(int i=0;i<=10;i++){
             brr[i+1]+=brr[i]/2;
         }
         if(brr[11]>=1)
         cout<<"YES"<<endl;
         else
         cout<<"NO"<<endl;
     }
 }