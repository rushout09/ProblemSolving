#include <iostream>
using namespace std;
int main(){
    while(true){
        int n;
        cin>>n;
        if(n==0)
        break;
        int arr[n];
        for(int i=0;i<n;i++)
        cin>>arr[i];
        int f = 0;
        for(int i=0;i<n;i++){
            if(arr[arr[i]-1]!=i+1){
                f=1;
                break;
            }
        }
        if(f==1){
            cout<<"not ambiguous"<<endl;
        }
        else{
            cout<<"ambiguous"<<endl;
        }
    }
}