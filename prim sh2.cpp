#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main() {
long long a,isprime;
cin>>a;
for(int i=2;i<=a;i++){
	isprime=0;
	for(int j=2;j<=i/2;j++){
	if(i%j==0){
	
	isprime=1;
	break;
}
}
if(isprime==0){
cout<<i<<" ";
}
}
return 0;
}
