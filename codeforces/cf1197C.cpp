#include <iostream>
#include <algorithm>
#define ll long long int
using namespace std;
int main(){
    int n,k;
    cin>>n>>k;
    ll arr[n];
    for(int i=0;i<n;i++)
    cin>>arr[i];
    ll brr[n-1];
    for(int i=1;i<n;i++)
    brr[i-1]= arr[i]-arr[i-1];
    sort(brr,brr+n-1);
    ll sum = 0;
    for(int i=0;i<n-k;i++)
    sum+=brr[i];
    cout<<sum;
}