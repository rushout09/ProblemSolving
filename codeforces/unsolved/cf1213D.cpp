#include <iostream>
using namespace std;
int main(){
    int n,k;
    cin>>n>>k;
    int arr[51]={0}, brr[51] = {0},crr[51]={0};
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        arr[x]++; 
    }
    int f = 0;
    for(int i=50;i>0;i--){
        if(arr[i]>=k){
            f=1;
            cout<<0;
            break;
        }
        else if(i*2<=51){
            brr[i] = (crr[i*2]+crr[(i*2)+1]) + (brr[i*2]+brr[(i*2)+1]);
            crr[i] = arr[i] + crr[i*2] + crr[(i*2)+1];
        }
    }
    if(f==0){
        for(int i=25;i>0;i--){
            if(crr[i]>=k){
                f=1;
                cout<<brr[i]-arr[i];
                break;
            }
        }
    }
    
}
