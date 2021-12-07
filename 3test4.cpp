#include <iostream>
#include<iomanip>
#include<cmath>
using namespace std;
int main() {
	 long long n,b,d,sum=0,s=0;
 
	 cin>>n>>b>>d;
	 for(int i=0;i<n;i++){
	int x;
	cin>>x;
	if(x<=b){
		sum+=x;
	}
	if(sum>d){
		s+=1;
		sum=0;
	}
 
	 } 
cout<<s;
	return 0;
}
