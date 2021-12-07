#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;
int main() {
   long long a,b,c;
    cin>>a>>b>>c;
    if((a<=b)&&(b<=c))
    cout<<a<<"\n"<<b<<"\n"<<c<<"\n\n"<<a<<"\n"<<b<<"\n"<<c<<"\n";
    else  if((a<=b)&&(b>=c))
    cout<<a<<"\n"<<c<<"\n"<<b<<"\n\n"<<a<<"\n"<<b<<"\n"<<c<<"\n";
    else  if((b<=a)&&(a<=c))
    cout<<b<<"\n"<<a<<"\n"<<c<<"\n\n"<<a<<"\n"<<b<<"\n"<<c<<"\n";
    
     else  if((b<=a)&&(a>=c))
    cout<<b<<"\n"<<c<<"\n"<<a<<"\n\n"<<a<<"\n"<<b<<"\n"<<c<<"\n";
    else  if((c<=b)&&(b<=a))
    cout<<c<<"\n"<<b<<"\n"<<a<<"\n\n"<<a<<"\n"<<b<<"\n"<<c<<"\n";
    else  if((c<=b)&&(b>=a))
    cout<<c<<"\n"<<a<<"\n"<<b<<"\n\n"<<a<<"\n"<<b<<"\n"<<c<<"\n";
    
    
 }
