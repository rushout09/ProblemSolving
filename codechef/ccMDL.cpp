#include <iostream>
#include <climits>
using namespace std;
 int main(){
     int t;
     cin>>t;
     while(t--){
         int n;
         cin>>n;
         int a[n];
         int mi=INT_MAX,ma=INT_MIN,ii,ia;
         for(int i=0;i<n;i++){
             cin>>a[i];
             if(a[i]>ma){
                 ma=a[i];
                 ia = i;
             }
             if(a[i]<mi){
                 mi=a[i];
                 ii=i;
             }
         }
         if(ii<ia)
            cout<<mi<<" "<<ma<<endl;
        else
            cout<<ma<<" "<<mi<<endl;
     }
 }