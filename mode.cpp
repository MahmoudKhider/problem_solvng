#include <iostream>
#include <iomanip>

using namespace std;
int main() {
 long long a,b,c,d,x;
 cin>>a>>b>>c>>d;
 x=((a%100)*(b%100)*(c%100)*(d%100))%100;
 
 if(x<10){
 
 cout<<"0"<<x;
}
 else{
 
 cout<<x;
}
 }
