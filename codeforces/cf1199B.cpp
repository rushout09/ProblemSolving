#include <iostream>
#include <iomanip>
using namespace std;
int main(){
    double h,l;
    cin>>h>>l;
    double x = ((l*l)-(h*h))/(2*h);
    //cout<<(x/100000000)*100000000<<endl;
    cout<<fixed;
    cout<<setprecision(13)<<x;
}