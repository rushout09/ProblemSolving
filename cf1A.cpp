#include <iostream>
using namespace std;
#define ll long long int
int main(){
    ll n,m,x;
    cin>>n>>m>>x;
    ll a = n%x==0?n/x:(n/x)+1;
    ll b = m%x==0?m/x:(m/x)+1;
    cout<<a*b;
}