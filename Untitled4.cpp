#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;
int main() {
   int n;
   cin>>n;
   int y=n/365;
   int m=(n%365)/30;
   int d=(n%365)%30;
    cout<<y<<" years\n";
    cout<<m<<" months\n";
    cout<<d<<" days\n";
 return 0;
 }
