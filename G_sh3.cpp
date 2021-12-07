#include <iostream>
#include<iomanip>
#include<cmath>
using namespace std;

int main(){
   int n;
   cin>>n;
   long long a[n];
   for(int i=0;i<n;i++){
    cin>>a[i];
}
int flag=0;
for(int i=0;i<n;i++){
	if(a[i]!=a[n-i-1]){
		flag=1;
	}
}
 if(flag==1)
 	cout<<"NO";
 else
 	cout<<"YES";
 

return 0;
}
