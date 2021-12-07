#include <iostream>
#include<iomanip>
#include<cmath>
using namespace std;

int main(){
 long long n,s;
cin>>n>>s;
int p=0;
for(int i=1;i<=10000;i++){
        n=n*3;
        s=s*2;

   if(n>s){
    p++;
    cout<<i;
    break;
   }
}
return 0;

}
