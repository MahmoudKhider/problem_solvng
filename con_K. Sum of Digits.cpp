#include <bits/stdc++.h>
#include <string>
using namespace std;
 
 
int main()
{
    string n;
    cin>>n;
    int c=0,x=11;
    if(n.length()<2){
    	cout<<0;
    	return 0;
	}
	while(x>=10){
		x=0;
		for(int i=0;i<n.length();i++){
		x+=(n[i]-'0');
		}
			n= to_string(x);
			c++;
	}
	cout<<c;
return 0;
}
