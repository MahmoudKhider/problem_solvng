#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;
int main() {
 int l1,r1,l2,r2;
 cin>>l1>>r1>>l2>>r2;
 if((l2>=l1)&&(l2<=r1))
 cout<<max(l1,l2)<<" "<<min(r1,r2);
 else if((l1>=l2)&&(l1<=r2))
 cout<<max(l1,l2)<<" "<<min(r1,r2);
 else
 cout<< -1;
 }




