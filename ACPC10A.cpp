#include <iostream>
using namespace std;
int main(){
    int a,b,c;
    while(cin>>a>>b>>c){
        if(a==0 || b==0 || c==0)
        break;
        if(b%a==0 && c%b==0 && c%a==0 && b/a!=0 && c/b!=0){
            cout<<"GP "<<c*(c/b)<<endl;
        }
        else if(c-b!=0 && b-a!=0){
            cout<<"AP "<<c+(c-b)<<endl;
        }
    }
}