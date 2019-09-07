#include <iostream>
using namespace std;
 int main(){
      int n,d,e;
      cin>>n>>d>>e;
      e = e*5;
      int ans = n;
      for(int i=0;i<=n;i=i+e){
          ans = min(ans,(n-i)%d);
      }
      cout<<ans;
 }