#include <iostream>
#define ll long long int
using namespace std;
int main(){
    int q;
    cin>>q;
    while(q--){
        ll n,m;
        cin>>n>>m;
        ll c = 0;
        c = n/m;
        ll sum = 0;
        if(c>=10){
            if(m%10==0)
                sum=0;
            else if(m%5==0)
                sum = 25 * (c/10);
            else if(m%2==0)
                sum = 40 * (c/10);
            else
                sum = 45 * (c/10);
            c=c%10;
        }
        for(int i=1;i<=c;i++){
            //cout<<sum<<endl;
            sum+=(m*i)%10;
        }
        cout<<sum<<endl;
    }
}