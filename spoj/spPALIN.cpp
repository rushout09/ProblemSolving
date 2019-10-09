#include <iostream>
#include <string.h>
using namespace std;
string work(string s){
    int l,r;
    if(s.size()%2==0){
        l = (s.size()/2)-1;
        r = (s.size()/2);
    }
    else{
        l = (s.size()/2);
        r = (s.size()/2);
    }
    int f = 0;
    while(l>=0){
        if(s[l]!='9'){
            s[l]=s[l]+1;
            if(l!=r)
            s[r]=s[r]+1;
            f=1;
            break;
        }
        else{
            s[l]='0';
            s[r]='0';
        }
        l--;
        r++;
    }
    if(f==0){
        s[s.size()-1] = '1';
        s='1'+s;
    }
    return s;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        string a=s;
        int l,r;
        if(s.size()%2==0){
            l = (s.size()/2)-1;
            r = (s.size()/2);
        }
        else{
            l = (s.size()/2);
            r = (s.size()/2);
        }
        while(l>=0){
            a[r++] = a[l--];
        }
        if(a.compare(s)<=0){
            a = work(a);
        }
        cout<<a<<endl;         
    }
}