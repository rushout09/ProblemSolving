#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    int nOdd = 0, nEve = 0;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        if(arr[i]%2==0)
        nEve++;
        else
        nOdd++;
    }
    cout<<min(nOdd,nEve);

}