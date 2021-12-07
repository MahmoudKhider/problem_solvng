#include <iostream>
using namespace std;
int main() {
 long long a,b,c,d;
 cin>>a>>b>>c>>d;
 int h=0;
 for(int i=a;i<=b;i++){
 	if(i%c==0 && i%d!=0){
 		h++;
	 }
 }
 cout<<h;
}

