#include <iostream>
using namespace std;
int main(){
    int b,g,n;
    cin>>b>>g>>n;
    int count = 0;
    int B = min(n,b);
    int G = n-B;
    while(B>=0 && G<=g){
        count++;
        B--;
        G++;
    }
    cout<<count;
}