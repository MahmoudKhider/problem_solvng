#include <iostream>
#include<iomanip>
#include<cmath>
using namespace std;

int main(){
int s,c;

cin>>s;
for(int i=1,k=0;i<=s;i++,k=0){
	for(c=1; c<=s-i;c++){
		cout<<" ";
	}
	while(k!=2*i-1){
		cout<<"*";
		++k;
	}
   cout<<endl;
}
return 0;
}
