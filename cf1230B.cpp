#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,k;
    cin>>n>>k;
    string s;
    cin>>s;
    if(n==1 && k==1){
        cout<<0;
    }
    else if(n==1 && k==0)
    cout<<s;
    else{
        int i=0,c=0;
        for(i=0;i<n && c<k;i++){
            if(i==0 && s[i]!='1'){
                s[i]='1';
                c++;
            }
            else if(i!=0 && s[i]!='0'){
                s[i]='0';
                c++;
            }
        }
        cout<<s;
    }
}