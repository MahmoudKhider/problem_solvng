#include <iostream>
#include<iomanip>
#include<cmath>
using namespace std;
 
int main()
{
int a,x;
cin>>a>>x;
char Arr[a+x];
for(int i=0;i<=(a+x);i++){
    cin>>Arr[i];
}bool cut=false;
if(Arr[a]=='-'){
 
Arr[a]='0';
for(int i=0;i<=(a+x);i++){
    if(Arr[i]>=48&&Arr[i]<=57){
        cut=true;
    }else{
    cut=false;
    cout<<"No";
    break;
    }
}
if(cut==true)
    cout<< "Yes";
 
 
}else{
 cout<<"No";
}
 
 
 
    return 0;
}
