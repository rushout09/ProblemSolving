#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    string s;
    cin>>s;
    int arr[10] = {0};
    int L = 0, R = 9, mL=0, mR=9;
    for(int i=0;i<n;i++){
        if(s[i]=='L'){
            while(arr[L]!=0)L++;
            arr[L++]=1;
        }
        else if(s[i]=='R'){
            while(arr[R]!=0)R--;
            arr[R--]=1;
        }
        else{
            int x = s[i]-'0';
            arr[x] = 0;
            L=0;
            R=9;
        }
    }
    for(int i=0;i<10;i++){
        cout<<arr[i];
    }
}