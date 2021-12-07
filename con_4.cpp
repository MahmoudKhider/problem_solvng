#include<iostream>
using namespace std;
int main()
{
   int a,b,c,n,v=0;
   cin>>n;
   
  
   for(int i=0; i<n;i++ ){
   	  cin>>a>>b>>c;
   	   if(a==1&&b==1&&c==1){
   	   	v++;
		}else if(a==1&&b==1&&c==0){
			v++;
		}else if(a==1&&b==0&&c==1){
			v++;
		}else if(a==0&&b==1&&c==1){
			v++;
		}else{
		v=v+0;
		}
   	   
   }
   cout<<v;
}
