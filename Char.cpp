#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;
int main() {
  char X;
  int D,B;
  cin>>X;
  if(X>='A'&&X<='Z'){
  D=X;
  D=D+32;
  X=D;
  cout<<X;
  }else if(X>='a'&&X<='z'){
  B=X;
  B=B-32;
  X=B;
 cout<<X;
}
 return 0;
 }




