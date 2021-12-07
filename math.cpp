#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;
int main() {
 double a,b,c;
 char q ='=';
 char s;
 
 cin>>a>>s>>b>>q>>c;
 if(s=='+'){
 	if((a+b)==c)
 	cout<<"Yes";
 	else
 	cout<<a+b;;
 }
    if(s=='-'){
 	if((a-b)==c)
 	cout<<"Yes";
 	else
 	cout<<a-b;
 }
  if(s=='*'){
 	if((a*b)==c)
 	cout<<"Yes";
 	else
 	cout<<a*b;
 }
 }




