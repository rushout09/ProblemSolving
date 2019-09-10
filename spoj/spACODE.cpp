#include <iostream>
#define ll long long int
using namespace std;
int main(){
    while(true){
        string s;
        cin>>s;
        if(s.size()==1 && s[0]=='0')
        break;
        ll dp[s.size()+1];
        dp[0] = 1;
        dp[1] = 1;
        int f = 0;
        for(int i=1;i<s.size();i++){
            if(s[i]=='0' && (s[i-1]=='1' || s[i-1]=='2')){
                dp[i+1] = dp[i-1];
            }
            else if(s[i]=='0'){
                f=1;
                break;
            }
            else if(s[i-1]=='1' && (s[i]>='1' && s[i]<='9')){
                dp[i+1] = dp[i-1]+dp[i];
            }
            else if(s[i-1]=='2' && (s[i]>='1' && s[i]<='6')){
                dp[i+1] = dp[i-1]+dp[i];
            }
            else{
                dp[i+1] = dp[i];
            }
        }
        if(f==0)
        cout<<dp[s.size()]<<endl;
        else
        cout<<'0'<<endl;

    }
}