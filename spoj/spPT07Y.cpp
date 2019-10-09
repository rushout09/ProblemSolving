#include <iostream>
#include <vector>
#include <cstring>
using namespace std;
bool dfs(int root, int u, vector<int> v[], bool vis[]){
    if(vis[u]==true)
        return false;
    vis[u] = true;
    for(int i=0;i<v[u].size();i++){
        if(v[u][i]!=root){
            if(!dfs(u, v[u][i], v, vis))
            return false;
        }
    }
    return true;
}
 int main(){
     int n,m;
     cin>>n>>m;
     vector<int> v[n];
     bool vis[n];
     memset(vis,false,sizeof(vis));
     for(int i=0;i<m;i++){
         int x,y;
         cin>>x>>y;
         v[x-1].push_back(y-1);
         v[y-1].push_back(x-1);
     }
     int f = 0;
     if(!dfs(-1, 0, v, vis)){
         f=1;   
     }
     else{
         for(int i=0;i<n;i++){
            if(vis[i]!=true)
            {
                f=1;
                break;
            }
        }
     }
     if(f==1){
         cout<<"NO";
     }
     else{
         cout<<"YES";
     }
 }