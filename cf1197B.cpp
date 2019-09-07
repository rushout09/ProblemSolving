#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    cin>>arr[i];
    int i=0;
    while(i!=n-1 && arr[i]<arr[i+1])
    i++;
    while(i!=n-1 && arr[i+1]<arr[i])
    i++;
    if(i==n-1)
    cout<<"YES";
    else
    {
        cout<<"NO";
    }
    
}