#include <iostream>
#include<iomanip>
#include<cmath>
using namespace std;

int main(){
 long long n,m,x=0,v;
	cin>>n;
	m=n%10;
	while(n>10){
		n/=10;
		x=n;
	}
	v=m+x;
	cout<<v;
}
