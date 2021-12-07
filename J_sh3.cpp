#include<iostream>
#include<iomanip>
#include<algorithm>
#include<cmath>
using namespace std;
int main()
{   long long t,c=0;
	cin>>t;	
  long long a[t];
   long long b=INT_MAX;
  for(long long i=0;i<t;i++){
  	cin>>a[i];
  	b=min(b,a[i]);
  }
  for(long long i=0;i<t;i++){
  
  	if(b==a[i]){
	  
  	c=c+1;
  }
 
}

if(c%2==0){
	cout<<"Unlucky";
}
else{
	cout<<"Lucky";
}
}
