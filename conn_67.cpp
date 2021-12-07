#include <bits/stdc++.h>
#include <iostream>
using namespace std;
int main()
{
   long long n;
    cin >> n;
    long long a[n];
    
    for ( int i=0; i<n; i++ )
        cin >> a[i];
    sort( a, a+n);
    int x , aa , b;
    long long sum;
    cin >>x >> aa >> b;
    if ( x == 1 ){
        sum = a[aa-1] + a[b-1];
    }
    else if ( x == 2 ){
        sum = a[aa-1] - a[b-1];
    }
    else if ( x == 3 ){
      sum = a[aa-1] * a[b-1];
    }
    for ( int i=0; i<n; i++ ){
        cout << a[i] << " ";
    }
    cout << endl;
    cout << sum;
    return 0;

}
