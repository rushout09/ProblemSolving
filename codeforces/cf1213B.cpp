#include <iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        int min = arr[n-1];
        int c = 0;
        for(int i=n-2;i>=0;i--){
            if(arr[i]>min){
                c++;
            }
            if(arr[i]<min){
                min = arr[i];
            }
        }
        cout<<c<<endl;
    }
}