#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main() {
long long a,b,max=0;
cin>>a>>b;
if(b>a){

for(int i=1;i<=b;i++){
if(a%i==0 && b%i==0 && max<i)
max=i;
}
cout<<max;
}else if(a>b){
	for(int i=1;i<=a;i++){
     if(a%i==0 &&b%i==0 && max<i)
     max=i;
	}
	cout<<max;
}
else if(a=b){
	
	cout<<a;
}
return 0;
}
