#include <iostream>
#include<iomanip>
#include<cmath>
using namespace std;

int main(){
   int n;
   cin>>n;                           //4
   int a[n];                       
  for(int i=0;i<n;i++){                 
  	cin>>a[i];                   //4 2 6 8
  	          //i=3
  }for(int i=n-1;i>=0;i--){
  	for(int j=0; j<i;j++){    //2 4 6 8
  		if(a[j]>a[j+1]){
		  
  		swap(a[j],a[j+1]);
	  }
  }
}
for(int i=0;i<n;i++)
cout<<a[i]<<" ";
return 0;
}
