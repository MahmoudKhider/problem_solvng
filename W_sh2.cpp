	#include <bits/stdc++.h>
	using namespace std;
	int main()
	{
	  int N,e=1;
	  cin>>N;
	  for(int i=0; i<N;i++){
	  	for(int j=i;j<N-1;j++){
	  		cout<<" ";
		  }
		for(int k=0;k<e;k++){
			cout<<"*";
		}  
		cout<<"\n";
		e+=2;
	  }
	  int m=2*N-1;
	  
	  for(int i=1; i<=N;i++){
	  	
	  	for(int j=1;j<=m;j++){
	  		cout<<"*";
		  }
		  	cout<<endl;
		  	m=m-2;
		for(int k=1;k<=i;k++){
			cout<<" ";
		}  
	
	  }
	  
	}
