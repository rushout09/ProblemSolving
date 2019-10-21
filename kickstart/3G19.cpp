#include <iostream>
#define ll long long int
using namespace std;
ll A[21],B[21];
ll count(ll AS, ll BS, ll H, int i, int n){
    if(i==n && AS>=H && BS>=H){
        return 1;
    }
    else if(i<n){
        return count(AS+A[i],BS,H,i+1,n)+count(AS,BS+B[i],H,i+n,n)+count(AS+A[i],BS+B[i],H,i+1,n);
    }
    return 0;
}
int main(){
    int t;
    cin>>t;
    int l=1;
    while(t--){
        int n;
        ll H;
        cin>>n>>H;
        for(int i=0;i<n;i++)
        cin>>A[i];
        for(int i=0;i<n;i++)
        cin>>B[i];
        ll c = count(0,0,H,0,n);
        cout<<"Case #"<<l<<": "<<c<<endl;
        l++;
    }
}