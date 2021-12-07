#include <iostream>
#include<iomanip>
#include<cmath>
using namespace std;
 
int main()
{
int h,n;
cin>>h>>n;
int a[h];

for(int i=0;i<h;i++){

  cin>>a[i];
}
int c1=0;
int c2=0;
int c;
for(int i=0;i<h;i++){

  if(a[i]<=n){
  c1+=1;
  }else{
  c2+=2;
  }
  
}
c=c1+c2;
cout<<c;
    return 0;
}
