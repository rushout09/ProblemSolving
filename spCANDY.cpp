#include <iostream>
using namespace std;
int main(){
    int n;
    while(cin>>n){
        if(n==-1)break;
        int arr[n];
        int sum = 0;
        for(int i=0;i<n;i++){
            cin>>arr[i];
            sum+=arr[i];
        }
        if(sum%n==0){
            int c = 0;
            int avg = sum/n;
            for(int i=0;i<n;i++){
                if(arr[i]>avg){
                    c+=arr[i]-avg;
                }
            }
            cout<<c<<endl;
        }
        else{
            cout<<-1<<endl;
        }
    }
}