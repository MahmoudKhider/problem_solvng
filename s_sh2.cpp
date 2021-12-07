#include <iostream>
#include<iomanip>
#include<cmath>
using namespace std;

int main(){
int n,m,s,sum=0;
cin>>s;
for(int i=1;i<=s;i++){
    cin>>n>>m;
    if(n>m){
        swap(n,m);
    }for(int j=n+1;j<m;j++){
        if(j%2!=0){
          sum+=j;
          
        }
  
    } cout<<sum<<endl;
    sum=0;
    
}
return 0;
}
