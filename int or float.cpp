#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;
int main() {
 
 float x;
 cin>>x;
  
  int a= ceil(x);
  if (x==a){
  	cout<<"int "<<x;
  }else{
  	cout<<"float"<<" "<<int(float (x))<<" " <<x - int(float(x));
  }
 return 0;
 }




