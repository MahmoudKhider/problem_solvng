#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main() {
long long a;
cin>>a;
long long s;
for(int i=1;i<=a;i++){
	cin>> s;

long long f=1;
for(int d=1;d<=s;d++){
    f=f*d;	

}

cout<<f<<endl;
}
return 0;
}
