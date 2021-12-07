#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;
int main() {
  long long A,B;
  char S;
  cin>>A >> S >>B;
  if(S=='+'){
  
  cout<<A+B;
}
 if(S=='-'){
	
  cout<<A-B;
}
  if (S=='*'){
  
  cout<<A*B;
}
if(S=='/'){
	cout<<A/B;
}
 
 return 0;
 }




