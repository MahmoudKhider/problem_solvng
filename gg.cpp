#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;
int main() {
   double a,b,c;
  cin>>a>>b>>c;
 if (a<=b && a<=c){
 	cout<<a;
 } 
 else if(b<=a && b<=c){
 	cout<<b;
 }
 else{
 	cout<<c;
 }
  if (a>=b && a>=c){
 	cout<<" "<<a;
 } 
 else if(b>=a && b>=c){
 	cout<<" "<<b;
 }
 else{
 	cout<<" "<<c;
 }
 
 
 return 0;
 }




