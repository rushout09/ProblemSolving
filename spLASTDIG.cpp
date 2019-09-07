#include <iostream>
#include <math.h>
#define ll long long int
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        ll a,b;
        cin>>a>>b;
        if(b==0){
            cout<<1<<endl;
            continue;
        }
        a=a%10;
        if(a==0 || a==1 || a==5 || a==6){
            cout<<a<<endl;
        }
        else if(a==9 || a==4){
            b = b%2;
            if(b==1)
                cout<<a<<endl;
            else
                cout<<(a*a)%10<<endl;
        }
        else{
            b = b%4;
            if(b==0)
            b=4;
            cout<<(ll)pow(a,b)%10<<endl;
        }
    }
}