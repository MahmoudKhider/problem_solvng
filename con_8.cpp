#include<bits/stdc++.h>
using namespace std;
int main()
{
  /* int a,b,c,d;
   cin>>a>>b>>c>>d;
   if(a==b&&a==c&&a==d){
   	cout<<"3";
   }else if(a==b&&a!=c&&a!=d){
   	cout<<"1";
   }else if(a!=b&&a==c&&a!=d){
   	cout<<"1";
   }else if(a!=b&&a!=c&&a==d){
   	cout<<"1";
  }else if(b!=a&&b==c&&b!=d){
   	cout<<"1";
   }else if(b!=a&&b!=c&&b==d){
   	cout<<"1";
   }else if(c!=a&&c!=b&&c==d){
   	cout<<"1";
   }else if(a==b&&a==c&&a!=d){
   	cout<<"2";
   }
   else if(a==b&&a==d&&a!=c){
   	cout<<"2";
   }else if(a==c&&a==d&&a!=b){
   	cout<<"2";
   }else if(b==c&&b==d&&b!=a){
   	cout<<"2";
   }
   	*/
   	
   	
   	int x=0;
   	int a[4];
   	for(int i=0; i<4;i++){
   		cin>>a[i];
	   }
	   sort(a,a+4);
	   for(int i=0;i<3;i++){
	   	if(a[i]==a[i+1]){
	   		x++;
		   }
	   	
	   }
   	cout<<x;
   
    return 0;
}

