#include<bits/stdc++.h>
using namespace std;
 
 
int main()
{ 
string x;
cin>>x;
	for(int i=0;i<x.length();i++){
	if(x[0]>=97){
		x[0]=x[0]-32;
	}
	}
	cout<<x;
   return 0;
}
