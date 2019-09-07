#include <bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    int c = 1;
    int f = 1;
    for(int i=0;i<s.size();i++){
        if(i!=s.size()-1 && s[i]==s[i+1]){
            c++;
        }
        else{
            c=1;
        }
        if(c>=7){
            f=0;
            break;
        }
    }
    if(f)
    cout<<"NO";
    else
    cout<<"YES";
}