#include <iostream>
using namespace std;
 int main(){
     int t;
     cin>>t;
     while(t--){
         string s;
        cin>>s;
        int arr[s.size()];
        for(int i=0;i<s.size();i++)
        arr[i]=0;
        int f = 0;
        for(int i=0;i<s.size();i++){
            if(s[i]!='.'){
                int t = s[i]-'0';
                int l = max(0,i-t);
                int r = min((int)s.size()-1,i+t);
                for(int j=l;j<=r;j++){
                    if(arr[j]==1){
                        f=1;
                        break;
                    }
                    arr[j]++;
                }
            }
            if(f==1)
            break;
        }
        if(f==0){
            cout<<"safe"<<endl;
        }
        else{
            cout<<"unsafe"<<endl;
        }
     }
 }