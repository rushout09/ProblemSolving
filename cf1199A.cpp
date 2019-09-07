#include <iostream>
using namespace std;
int main(){
    int n,x,y;
    cin>>n>>x>>y;
    int arr[n];
    for(int i=0;i<n;i++)
    cin>>arr[i];
    int i = 0;
    int j = i;
    int min = arr[0];
    while(j<=n-1 && j<=i+y){
        if(min>arr[j]){
            i=j;
            min = arr[i];
        }
        j++;
    }
    cout<<i+1;
}