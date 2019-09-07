#include <iostream>
using namespace std;
int main(){
    int q;
    cin>>q;
    while(q--){
        int n;
        cin>>n;
        int minx = -100000, miny = -100000, maxx = 100000, maxy = 100000;
        for(int i=0;i<n;i++){
            int x,y,b,d,f,u;
            cin>>x>>y>>b>>d>>f>>u;
            if(b==0)
            minx = max(minx,x);
            if(d==0)
            maxy = min(maxy,y);
            if(f==0)
            maxx = min(maxx,x);
            if(u==0)
            miny = max(miny,y);
        }
        if(miny>maxy || minx>maxx)
        cout<<0<<endl;
        else
        {
            cout<<1<<" "<<minx<<" "<<miny<<endl;
        }
        
    }
}