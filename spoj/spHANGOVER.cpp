#include <iostream>
using namespace std;
int main(){
    while(true){
        float c;
        cin>>c;
        if(c==0)
        break;
        float a =0.0;
        int i = 2;
        while(a<c){
            a = a + (1.0/(float)i);
            i++;
        }
        cout<<(i-2)<<" card(s)"<<endl;
    }
}