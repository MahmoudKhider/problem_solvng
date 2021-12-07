#include <iostream>
#include<iomanip>
#include<cmath>
using namespace std;
 
int main(){
 int n,m,sum=0;

for(int i=1;i<=100;i++){
 cin>>n>>m;
 if(n>m){
    swap(n,m);
 }
 if(n<=0||m<=0){
    break;
    cout<<"no";
 } for(int j=n;j<=m;j++){
     
     sum=sum+j;
 cout<<j<<" ";
 
 
 }
 
 cout<<"sum ="<<sum<<endl;
 
}
	return 0;
}
