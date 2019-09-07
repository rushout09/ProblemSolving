#include <iostream>
#include <unordered_map>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        float result = n;
        for(int i=2;i*i<=n;i++){
            if(n%i==0){
                while(n%i==0)
                n/=i;
                result *= (1.0 - (1.0 / (float)(i)));
            }
        }
        if(n>1)
        result *= (1.0 - (1.0 / (float)(n)));
        cout<<(int)result<<endl;
    }
}