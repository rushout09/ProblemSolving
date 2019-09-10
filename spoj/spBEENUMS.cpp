#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    while(n>=0){
        int sum = 1;
        int i = 1;
        while(sum<n){
            sum += (i*6);
            i++;
        }
        if(sum==n)
        cout<<"Y";
        else
        {
            cout<<"N";
        }
        cout<<endl;
        
        cin>>n;
    }
}