	#include <bits/stdc++.h>
	using namespace std;
	int main()
	{
	  int N;
	  cin>>N;
	  int a=0,b=1;
	  if(N==1){
	  	cout<<"0";
	  }else{
	  	cout<<"0 1 ";
	  	for(int i=2;i<N;i++){
	  		int f=a+b;
	  		cout<<f<<" ";
	  		a=b;
	  		b=f;
		  }
	  }
	 
	  
	}
