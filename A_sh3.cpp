#include <iostream>
#include<iomanip>
#include<cmath>
using namespace std;

int main(){
long long s,sum=0;
int arr[s];
cin>>s;
for(int i=1;i<=s;i++){
	cin>>arr[i];
	sum=sum+arr[i];
}
cout<<abs(sum);
return 0;
}
