#include<iostream>
#include<iomanip>
#include<algorithm>
#include<cmath>
using namespace std;
int main()
{   int t ;
	cin>>t;	
	while(t--)  //for(int i=1;i<=t;i++)
	{ 
	  int n;
	  cin>>n;
	 int a[n];
	 for( int i=1;i<=n ; i++)
	 {
	   cin>>a[i];
     }
	 int b=INT_MAX;
	 for(int i=1; i<=n; i++)
     {
	   for( int j=i+1; j<=n ;j++)
		{
		  b=min(b,(a[i]+a[j]+j-i));
		}
     }
	 cout<<b<<"\n";
	}  
}
