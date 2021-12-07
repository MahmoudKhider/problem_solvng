#include <iostream>
#include<iomanip>
#include<cmath>
using namespace std;

int main(){
   long long n,k,x=0;
   cin>>n;
   int a[n];
   for(int i=0;i<n;i++){
   	
    cin>>a[i];
    if(a[i]>0){
    	x=1;
    	
	}else if(a[i]<0){
		x=2;
		
	}else{
		x=0;
	}
	 cout<<x<<" ";
   }
  
return 0;
}
