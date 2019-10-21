#include <iostream>
using namespace std;
int main(){
    int a1,a2,a3,a4;
    cin>>a1>>a2>>a3>>a4;
    int f=0;
    if(a1+a2==a3+a4 || a1+a3==a2+a4 || a1+a4==a2+a3 || a1==(a4+a2+a3) || a4==(a1+a2+a3) || a2==(a1+a4+a3)|| a3==(a1+a2+a4)){
        f=1;
    }
    if(f)
    cout<<"YES";
    else
    cout<<"NO";
}