#include <iostream>
using namespace std;
long long int count;
void merge(int *arr, int* left, int* right, int n, int m){
    int l=0,r=0,i=0;
    while(l<n && r<m){
        if(left[l]<=right[r]){
            arr[i++]=left[l++];
        }
        else{
            count+=(n-l);
            arr[i++]=right[r++];
        }
    }
    while(l<n){
        arr[i++] = left[l++];
    }
    while(r<m){
        arr[i++] = right[r++];
    }
}
void mergeSort(int *arr, int n){
    if(n>1){
        int mid = n/2;
        int left[mid];
        int right[n-mid];
        for(int i=0;i<mid;i++){
            left[i] = arr[i];
        }
        for(int i=mid;i<n;i++){
            right[i-(mid)] = arr[i];
        }
        mergeSort(left,mid);
        mergeSort(right, n-mid);
        merge(arr, left,right,mid,n-mid);
    }
    return;
}
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
        count = 0;
        mergeSort(arr,n);
        cout<<count<<endl;
    }
}