#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;
int main() {
 unsigned long a,b,c,d;
 cin>>a>>b>>c>>d;
 long long x=a*b*c*d;
 if(a>=2 && b>=2 && c>=2 && d>=2)
 cout<<(x%100);
 
 }


