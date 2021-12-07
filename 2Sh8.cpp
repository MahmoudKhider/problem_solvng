#include <iostream>
using namespace std;
int main() {
int a,r=0,c;
cin>>a;
 c=a;
do{
	
 r=r*10;
 r=r + (a%10);
 a=a/10;
}while(a !=0);
 cout<<r<<endl;
 
 if( r == c){
 
 	cout<<"YES";
 }
 	 else{
	  
 	cout<<"NO";
 }
 	return 0;

}


