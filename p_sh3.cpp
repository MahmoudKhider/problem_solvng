#include <iostream>
#include<iomanip>
#include<cmath>
using namespace std;
 
int main()
{
	bool c=true;
long long N,k=0;
cin>>N;
long long a[N];

for(int i=0;i<N;i++){
	cin>>a[i];
	
	if(a[i]%2==0){
		a[i]=a[i/2];
			k++;
		c=true;
	}else{
		c=false;
	
	}
}
if(c=true){
	cout<<k;
}else{
	cout<<0;
}

}
