#include <iostream>
#include<iomanip>
#include<cmath>
using namespace std;

int main(){
int n;
cin>>n;
int a[n];
int flag=0;
for(int i=0;i<n;i++){
    cin>>a[i];
    for(int j=1;j<=n;j++){
        if(a[i]!=a[i+j]){
            flag=0;
        }else if(a[i]==a[i+j]){
        flag=1;
        }

        }
    }if(flag==0){
   cout<<"YES";
   } else {
    cout<<"NO";

    }

return 0;
}
