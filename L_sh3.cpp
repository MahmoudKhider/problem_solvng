#include <iostream>
#include<iomanip>
#include<cmath>
using namespace std;

int main(){
   int n,x,d,sum,min=0;
   cin>>n;
   int a[d];
  for(int i=0;i<n;i++){
  	cin>>x;	
  }
  for(int i=1;i<=x;i++){
  	cin>>a[i];
  	for(int j=2;j<x;j++){
  		for(int k=1;k<j;k++ ){
		 
  		sum=sum+(a[0]+a[1]+j-k);
  		if(sum<=min){
  			min=sum;
		  }
		  
	  }
	 cout<<min;
	  
	  }
  	
  }
return 0;
}
