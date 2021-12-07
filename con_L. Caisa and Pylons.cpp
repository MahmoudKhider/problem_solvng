#include<bits/stdc++.h>
using namespace std;
 
 
int main()
{
int n;
cin>>n;
  int arr[n+1];
  arr[0]=0;
	  for(int i=1; i<=n;i++)
	  cin>>arr[i];
		  int energe=0;
		  int dollar=arr[0];
    for(int i=0;i<n;i++){
  	energe+=arr[i]-arr[i+1];
  	if(energe<0){
  		dollar+=abs(energe);
  		energe=0;
	  }
   }
   cout<<dollar;
   return 0;
}
