#include <iostream>
#define ll long long int
using namespace std;
int main(){
    ll n;
    cin>>n;
    int c = 0;
    while(n){
        if(n&1){
            c++;
        }
        if(c==2)
        break;
        n=n>>1;
    }
    if(c>1)
    cout<<"NIE";
    else
    cout<<"TAK";
}