#include<bits/stdc++.h>
using namespace std;
 
 
int main()
{ 
int x;
cin>>x;	
int sum;
	while(x--){
		int a;
		cin>>a;
		sum=0;
		int arr[a];
		for(int i=0;i<a;i++){
			cin>>arr[i];
		}
		
		for(int i=0;i<a;i++){
			if(arr[i]%2!=0){
			sum++;
			}
		}
		if(sum == 0){
			cout<<"NO"<<endl;
		}else if(a%2==0&&sum==a){
			cout<<"NO"<<endl;
		}else{
			cout<<"YES"<<endl;
		}
}

   return 0;
}
