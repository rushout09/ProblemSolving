#include <iostream>
#include <unordered_set>
using namespace std;
int happy(int n){
    int r = 0;
    while(n){
        r = r + (n%10)*(n%10);
        n/=10;
    }
    return r;
}
 int main(){
     int n;
     cin>>n;
     int x = n, count = 0, f=0;
     unordered_set<int> st;
     st.insert(n);
     while(x!=1){
         count++;
         x = happy(x);
         if(st.find(x)!=st.end()){
             f=1;
             break;
         }
         st.insert(x);
     }
     if(f)
     cout<<-1;
     else
     cout<<count;
 }