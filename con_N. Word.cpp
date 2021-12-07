#include<bits/stdc++.h>
using namespace std;
 
 
int main()
{
	string s;
	cin>>s;
	int low=0,up=0;
	for(int i=0;i<s.length();i++){
		if(s[i]<97){
			up++;
		}else{
			low++;
		}
		
	}
	if(up>low){
		for(int i=0;i<s.length();i++){
			if(s[i]>=97){
				s[i]=s[i]-32;
			}
		}
	}else{
		for(int i=0;i<s.length();i++){
			if(s[i]<97){
				s[i]=s[i]+32;
			}
		
	}
}
cout<<s;
   return 0;
}
