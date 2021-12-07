#include <iostream>
#include<iomanip>
#include<cmath>
using namespace std;
 
int main()
{
long long a,f=0,c=1,n;
cin>>a;
int arr[a];
for(int i=0;i<a;i++){

  n=f+c; //1
  f=c; //1
  c=n; //1
  

}
	cout<<c-f;
}
