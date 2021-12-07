#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, a=1,x=0;
    cin >> n;
    for(int i=0;i<n;i++ ){
    	while(x<3){
    		cout<<a++<<" ";
    		x++;
		}
		x=0;
		cout<<"PUM"<<"\n";
		a=a+1;
	}

   
    return 0;
}
