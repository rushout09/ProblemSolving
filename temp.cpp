#include <iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        int n,f,k;
        cin>>n>>f>>k;
        char c;
        cin>>c;
        string s;
        cin>>s;
        int count = 0;
        for(int i=0;i<k;i++){
            if(s[i]==c)
            count++;
        }
        int i = n-1, ops = 0;
        while(count<f && i>0){
            ops++;
            if(s[(i+k)%n]==c){
                count--;
            }
            if(s[i]==c){
                count++;
            }
            i--;
        }
        if(count==f){
            cout<<ops<<endl;
        }
        else{
            cout<<-1<<endl;
        }
    }
    
    return 0;
}
