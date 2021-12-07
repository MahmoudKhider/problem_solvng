#include <iostream>
using namespace std;
int main() {
long long a,e;
long long b=0;
cin>>a;
for(int i=1;i<=a;i++){
	cin>>e;
	if(e%2!=0)
	b++;
}
cout<<b;
}

