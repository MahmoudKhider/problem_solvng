#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;
int main() {
   long long a,b,c;
    cin>>a>>b>>c;
    if((a<=b)&&(a<=c))
    {
      if(b<=c)
	  cout<<a<<"\n"<<b<<"\n"<<c<<"\n\n"<<a<<"\n"<<b<<"\n"<<c<<"\n";
	  else
	  cout<<a<<"\n"<<c<<"\n"<<b<<"\n\n"<<a<<"\n"<<b<<"\n"<<c<<"\n";	
	}
	else if((b<=a)&&(b<=c)){
		if(a<=c)
		cout<<b<<"\n"<<a<<"\n"<<c<<"\n\n"<<a<<"\n"<<b<<"\n"<<c<<"\n";
		else
		cout<<b<<"\n"<<c<<"\n"<<a<<"\n\n"<<a<<"\n"<<b<<"\n"<<c<<"\n";
	}
	else{
		if(a<=b)
		cout<<c<<"\n"<<a<<"\n"<<b<<"\n\n"<<a<<"\n"<<b<<"\n"<<c<<"\n";
		else
		cout<<c<<"\n"<<b<<"\n"<<a<<"\n\n"<<a<<"\n"<<b<<"\n"<<c<<"\n";
	}
  return 0;  
 }
