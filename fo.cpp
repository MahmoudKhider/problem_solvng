#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main() {
  int x;
  cin>>x;
 int i,a=0,b=0,c=0,d=0;
 int num;
 for(i=0;i<x;i++){
 	cin>>num;
 	if(num%2==0){
 		a++;
	 }
	else if(num%2!=0){
		b++;
	}
   if(num>0){
		c++;
	}
	else if(num<0){
		d++;
	}
 }
 cout<<"Even: "<<a<<"\n";
 cout<<"Odd: "<<b<<"\n";
 cout<<"Positive: "<<c<<"\n";
 cout<<"Negative: "<<d<<"\n";
 
 return 0;
 }




