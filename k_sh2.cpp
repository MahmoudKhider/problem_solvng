#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main() {
long long a;
cin>>a;
for(int i=1;i<=a;i++){
if(a%i==0)
cout<<i<<endl;
}
return 0;
}
