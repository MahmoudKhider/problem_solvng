#include <iostream>
#include<iomanip>
#include<cmath>
using namespace std;

int main(){
   int n,min,c=0;
   cin>>n;
   int a[n];
   for(int i=0;i<n;i++)
    cin>>a[i];
    
     min=a[0];
for(int i=0;i<n;i++){

    if(a[i]<min){
   	 	
    min=a[i];
    c=i;
	}
}


cout<<min<<" "<<c+1;
return 0;
}
