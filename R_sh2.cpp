#include <iostream>
#include<iomanip>
#include<cmath>
using namespace std;
 
int main(){
 int a,b,sum;
 
 for(int i=1; i<=100;i++){
 	cin>>a>>b;
 	if(a||b<=0){
 		
 	break;
	 }
	 
	 sum+=i;
	 cout<<i +"sum ="+sum;
 }
	return 0;
}
