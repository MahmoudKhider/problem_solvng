#include<bits/stdc++.h>
using namespace std;
 
 
int main()
{ 
int x;
cin>>x;	
	while(x--){
		int a,b;
		cin>>a>>b;
		if(b>a){
			int n=b-a;
			if(n%2==0){
				cout<<2<<"\n";
			}else{
				cout<<1<<"\n";
			}
		}else if(a==b){
			cout<<0<<"\n";
		}else if(a>b){
			int r=a-b;
				if(r%2==0){
				cout<<1<<"\n";
			}else{
				cout<<2<<"\n";
			}
		}
	}
   return 0;
}
