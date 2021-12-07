#include <iostream>
#include <iomanip>
#include <math.h>
#include <bits/stdc++.h>
using namespace std;
int main() {
	int i,max;
	cin>>i;
	int num[i];
for(int h=0;h<i;h++){
	cin>>num[h];
}
max=num[0];
for(int h=1;h<i;h++){

  if(num[h]>max)
  	max=num[h];

}
 cout<<max;
}
