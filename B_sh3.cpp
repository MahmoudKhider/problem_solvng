#include <iostream>
#include<iomanip>
#include<cmath>
using namespace std;

int main(){
   long long n,x,s,p=0;
   cin>>n;
   int a[n];
   for(int i=0;i<n;i++){
    cin>>a[i];
   }
   cin>>x;
   for(int j=0;j<n;j++){
    if(x==a[j]){
        s=j;
        p=1;
        break;
    }
    }

   if(p==1){
    cout<<s;
   }else if (p==0) {
   cout<<"-1";
   }
return 0;
}
