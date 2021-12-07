#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;
int main() {
 int a ,b ,c ,d ,e ,f;
int n;

cin>>a>>b>>c>>d>>e>>f;
cin>>n;
if(n==a){

 cout<<b<<" "<<c<<" "<<d<<" "<<e<<" "<<f<<" "<<a;
}else if(n==b &&n>=1){
cout<<c<<" "<<d<<" "<<e<<" "<<f<<" "<<a<<" "<<b;
}else if(n==c &&n>=1){
 cout<<d<<" "<<e<<" "<<f<<" "<<a<<" "<<b<<" "<<c;
}else if(n==d &&n>=1){
cout<<e<<" "<<f<<" "<<a<<" "<<b<<" "<<c<<" "<<d;
}else if(n==e &&n>=1){
cout<<f<<" "<<a<<" "<<b<<" "<<c<<" "<<d<<" "<<e;
}else{
cout<<a<<" "<<b<<" "<<c<<" "<<d<<" "<<e<<" "<<f;
 }
}
