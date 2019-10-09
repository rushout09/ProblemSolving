#include <iostream>
#include <math.h>
using namespace std;
 int main(){
     while(true){
         double l;
         cin>>l;
         if(l==0)
         break;
         double pi = 3.141592654;
         double ans = (1.0/(2.0*pi))*(l*l);
         printf("%.2f\n",ans);
     }
 }