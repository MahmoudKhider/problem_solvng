#include<bits/stdc++.h>
using namespace std;
int main()
{
   int k,r,c;
   cin>>k>>r;
   for(int i=1;i<=12;i++){
   	  c=i*k;
   	  if(c%10==r|| c%10==0){
   	  	cout<<i;
   	  	  return 0;
		 }
		 
   }

}
