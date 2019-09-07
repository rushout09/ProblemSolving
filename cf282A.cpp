#include <bits/stdc++.h>
using namespace std;
int main(){
    int x = 0;
    int n;
    cin>>n;
    while(n--){
        string s;
        cin>>s;
        for(int i=0;i<s.size();i++){
            if(s[i]=='+'){
                x++;
                break;
            }
            if(s[i]=='-'){
                x--;
                break;
            }
        }
    }
    cout<<x;
}