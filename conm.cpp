#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, d;
     cin >> n >> d;
    while ( n-- ){
        char c ; int number;
        cin >> c >> number;
        if( c == '+' )
            d += number;
        else if ( c == '-' ){
            if ( d >= number )
                d -= number;
            else if ( number > d )
                d == 0;
        }
    }
    cout << d;
    return 0;
}
