#include <iostream>
#include<iomanip>
#include<cmath>
using namespace std;
 
int main(){
int t,c=0,m=0;
cin>>t;
 while(t--){
 	int n;
 	cin>>n;
 	int a[n];
 		for(int i=0;i<n;i++){
 			cin>> a[i];
 			c=0;
 			 for(int j=i; j<n;j++){
 			 	c+=a[j];
 			 	m+=c;
			  }
		 }	
		 cout<<m;
 }
	return 0;
}
