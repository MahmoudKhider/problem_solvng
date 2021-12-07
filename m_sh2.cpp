#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main() {
int a,b;
cin>>a>>b;
int counter= 0;
for(int i=a;i<=b;i++){
        bool flage =true;
        int w = i;

     while(w!=0){
     if((w%10)==4||(w%10)==7){

     }else{
     flage = false;
     break;
     }
w=w/10;
     }
if(flage == true){
    cout<<i<<" ";
    counter++;
}

}
if(counter==0){
cout<<"-1";
}
	return 0;
}
