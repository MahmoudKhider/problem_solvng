#include <iostream>
#include<iomanip>
#include<cmath>
using namespace std;

int main(){

 long long n,l,w,h;
cin>>n;
for(int i=1;i<=n;i++){
  cin>>l>>w>>h;
   if(l<=20 &&w<=20 &&h<=20){
    cout<<"GOOD"<<endl;
   }
else{

cout<<"BAD"<<endl;}
}
return 0;
}


