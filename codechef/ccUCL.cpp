#include <iostream>
#include <vector>
#include <map>
#include <algorithm>
using namespace std;
struct team{
    int points = 0;
    int goalDiff = 0;
};
bool sortMe(pair<string,struct team> &a,pair<string,struct team> &b){
    if(a.second.points<b.second.points)
    return true;
    else if(a.second.points>b.second.points)
    return false;
    else{
        if(a.second.goalDiff<b.second.goalDiff)
        return true;
        else
        {
            return false;
        }
        
    }

}
int main(){
    int t;
    cin>>t;
    while(t--){
        map<string, struct team> mp;
        for(int i=0;i<12;i++){
            string s1,v,s2;
            int g1,g2;
            cin>>s1>>g1>>v>>g2>>s2;
            if(g1>g2){
                mp[s1].points = mp[s1].points + 3;
            }
            else if(g2>g1){
                mp[s2].points = mp[s2].points + 3;
            }
            else{
                mp[s1].points = mp[s1].points + 1;
                mp[s2].points = mp[s2].points + 1;
            }
            mp[s1].goalDiff  += (g1-g2);
            mp[s2].goalDiff  += (g2-g1);
        }
        map<string, struct team>::iterator it = mp.begin();
        vector<pair<string,struct team>> v;
        for(it = mp.begin();it!=mp.end();it++){
            v.push_back(make_pair(it->first, it->second));
        }
        sort(v.begin(), v.end(), sortMe);
        cout<<v[3].first<<" "<<v[2].first<<endl;

    }
}