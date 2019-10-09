#include <iostream>
using namespace std;
 int main(){
     int q;
     cin>>q;
     while(q--){
         int x,y,z;
         cin>>x>>y>>z;
         if(x==0||y==0||x+y+z<3)
         {
             cout<<"0"<<endl;
             continue;
         }
         if(x<y){
            int e = y-x;
            y=y-e;
            z+=e;
         }
         else{
            int e = x-y;
            x=x-e;
            z+=e;
         }
         if(x<=z){
            cout<<x<<endl;
         }
         else{
             x=x+y+z;
             x=x/3;
             cout<<x<<endl;
         }
     }
 }