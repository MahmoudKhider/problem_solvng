#include <iostream>
#include<iomanip>
#include<cmath>
using namespace std;
 
int main(){
int n; long long a[1005]; int pos1=0; int pos2=0;

cin >>n;

for (int i = 0; i<n; i++) {

cin >> a[i];

}

long long max; long long min;

max = a[0]; min = a[0];

for (int i = 0; i<n; i++) {

if (max<a[i]) {
  max =a[i];

  pos1=i;

}

if (min>a[i]) {

min = a[i];

pos2 = 1;


}

}

swap(a[pos1],a[pos2]);

for (int i = 0; i<n; i++) {
cout << a[i] << " ";

}

cout << "\n";

return 0;
}
