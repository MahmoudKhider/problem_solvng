#include <iostream>
#include<iomanip>
#include<cmath>
using namespace std;
 
int main(){
 long long x,c,sum=0;
 
 cin>>x;
 string s;
 cin>>s;
 long long a[x];
 long long deg=0;
 
 
 for(int i=0; i<x;i++){
 while(c!=0){
 	deg=c%10;
 	a[i]=deg;
 	c/=10;
 	break;
 }

for(int j=0;j<x;j++)
{
	sum+=a[j]-'0';
}
}
cout<<sum<<endl;

	return 0;
}
