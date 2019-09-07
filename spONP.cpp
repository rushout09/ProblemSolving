#include <iostream>
#include <stack>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        stack<char> st;
        for(int i=0;i<s.size();i++){
            if(s[i]=='('){
                st.push(s[i]);
            }
            else if(s[i]==')'){
                while(st.top()!='('){
                    cout<<st.top();
                    st.pop();
                }
                st.pop();
            }
            else if(s[i]=='+'){
                while(!st.empty() && st.top()!='(' && st.top()!='+'){
                    cout<<st.top();
                    st.pop();
                }
                st.push(s[i]);
            }
            else if(s[i]=='-'){
                while(!st.empty() && st.top()!='(' && (st.top()!='-' || st.top()!='+')){
                    cout<<st.top();
                    st.pop();
                }
                st.push(s[i]);
            }
            else if(s[i]=='*'){
                while(!st.empty() && st.top()!='('&& (st.top()=='/' || st.top()=='^')){
                    cout<<st.top();
                    st.pop();
                }
                st.push(s[i]);
            }
            else if(s[i]=='/'){
                while(!st.empty() && st.top()!='('&& (st.top()=='^')){
                    cout<<st.top();
                    st.pop();
                }
                st.push(s[i]);
            }
            else if(s[i]=='^'){
                st.push(s[i]);
            }
            else{
                cout<<s[i];
            }
        }
        cout<<endl;
    }
}