#include <iostream>
using namespace std;
int n,m,c;
bool p[1000000][1000000];
bool possible(string s[],int i, int j){
    if(i>=n || j>=m){
        return false;
    }
    if(i==n-1 && j==m-1){
        c++;
        return true;
    }
    if(s[i][j]=='#'){
        return false;
    }
    if(possible(s,i+1,j) || possible(s,i,j+1)){
        if((i+1==n-1 && j==m-1) || (i==n-1 && j+1==m-1))
        s[i][j] = '#';
        return true;
    }
    else{
        return false;
    }
}
 int main(){
     cin>>n>>m;
     string s[n];
     for(int i=0;i<n;i++){
         cin>>s[i];
     }
     c = 0;
     possible(s,0,1);
     possible(s,1,0);
     cout<<c;
 }