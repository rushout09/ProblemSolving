#include <iostream>
using namespace std;
int reverse(int n){
    int r = 0;
    while(n){
        r = r*10 + n%10;
        n/=10;
    }
    return r;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int a,b;
        cin>>a>>b;
        a = reverse(a);
        b = reverse(b);
        int c = a+b;
        c = reverse(c);
        cout<<c<<endl;
    }
}