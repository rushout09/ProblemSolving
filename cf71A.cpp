#include <iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        if(s.size()>10){
            int c = s.size()-2;
            s = s[0] + to_string(c) + s[s.size()-1];
        }
        cout<<s<<endl;
    }
}