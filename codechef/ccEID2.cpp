#include <iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int a,b,c,x,y,z;
        cin>>a>>b>>c>>x>>y>>z;
        int f = 0;
        if((a>b && x<=y)||(a<b && x>=y)||(a>c && x<=z)||(a<c && x>=z))
        f=1;
        if((a>b && x<=y)||(a<b && x>=y)||(b>c && y<=z)||(b<c && y>=z))
        f=1;
        if((c>b && z<=y)||(c<b && z>=y)||(a>c && x<=z)||(a<c && x>=z))
        f=1;
        if((a==b && x!=y)||(a==c && x!=z)||(b==c && y!=z))
        f=1;
        if(f==0)
        cout<<"FAIR"<<endl;
        else
        cout<<"NOT FAIR"<<endl;

    }
}