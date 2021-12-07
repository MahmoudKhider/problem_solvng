#include<bits/stdc++.h>
using namespace std;
int main()
{
  
   	
   	int c, x=0;
   	cin>>c;
   	char a[c];
   	for(int i=0; i<c;i++){
   		cin>>a[i];
	   }
	  // sort(a,a+c);
	   for(int i=0;i<c-1;i++){
	   	if(a[i]==a[i+1]){
	   		x++;
		   }
	   	
	   }
   	cout<<x;
   
    return 0;
}

