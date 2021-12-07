#include <iostream>
#include<iomanip>
#include<cmath>
using namespace std;
 
int main(){
 long long x,y;
 cin>>x;
 for(int i=1;i<=x;i++){
    cin>>y;
    if(y==0){
        cout<<"0";
    }
    for(int j=1;y!=0;j++){
        int s=y%10;
        y=y/10;
        cout<<s<<" ";
   }
 
    cout<<"\n";
 }
 
	return 0;
}
