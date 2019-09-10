#include <iostream>
#include <cstring>
#define ll long long int
using namespace std;
ll tree[800001], lazy[800001];
void updateRange(ll node, ll start, ll end, ll l, ll r, ll val){
    if(lazy[node]!=0){
        tree[node] += (end-start+1)*lazy[node];
        if(start!=end){
            lazy[node*2] += lazy[node];
            lazy[node*2+1] += lazy[node];
        }
        lazy[node] = 0;
    }
    if(start > end || start > r || end < l)
    return;
    if(start>=l && end<=r){
        tree[node] += (end-start+1) * val;
        if(start!=end){
            lazy[node*2] += val;
            lazy[node*2 + 1] += val;
        }
        return;
    }
    ll mid = (start + end) / 2;
    updateRange(node*2, start, mid, l, r, val);
    updateRange(node*2+1, mid+1, end, l, r, val);
    tree[node] = tree[node*2] + tree[node*2 +1];
}
ll queryRange(ll node, ll start, ll end, ll l, ll r){
    if(start > end || r < start || end < l)
    return 0;
    if(lazy[node] != 0){
        tree[node] += (end-start+1)*lazy[node];
        if(start!=end){
            lazy[node*2] += lazy[node];
            lazy[node*2+1] += lazy[node];
        }
        lazy[node] = 0;
    }
    if(start >=l && end<=r){
        return tree[node];
    }
    ll mid = (start + end) / 2;
    ll p1 = queryRange(node*2,start,mid,l ,r);
    ll p2 = queryRange(node*2+1,mid+1,end,l ,r);
    return (p1+p2);
}
int main(){
    ll t;
    cin>>t;
    while(t--){
        ll n,c;
        cin>>n>>c;
        memset(tree,0,sizeof(tree));
        memset(lazy,0,sizeof(lazy));
        while(c--){
            int a;
            cin>>a;
            if(a==0){
                ll l,r,v;
                cin>>l>>r>>v;
                updateRange(1,1,n,l,r,v);
            }
            else{
                ll l,r;
                cin>>l>>r;
                cout<<queryRange(1,1,n,l,r)<<endl;
            }
        }
    }
}