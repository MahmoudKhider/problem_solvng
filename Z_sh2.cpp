	#include <bits/stdc++.h>
	using namespace std;
	int main()
	{
	  int k,s,z,c=0;
	  cin>>k>>s;
	  for(int x=0;x<=k;x++){
	  	for(int y=0;y<=k;y++){
	  		 z=s-(x+y);
	  		if(z>=0&&z<=k)
	  	c++;
		  }
		   
	  }
	 
	 cout<<c;
	}
