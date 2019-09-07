#include <iostream>
using namespace std;
int main(){
    int x;
    while(cin>>x){
        if(x==0)break;
        int sum = 0;
        for(int i=2;i<=x;i++){
            sum+=(i*i);
        }
        sum+=1;
        cout<<sum<<endl;
    }
}