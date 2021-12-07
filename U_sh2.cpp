#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, a, b, sum = 0 ;
    cin >> n >> a >> b ;

    for ( int i = 1 ; i <= n ; i ++ )
    {
        int sum_digit = 0 ;
        for ( int j = i ; j != 0 ; )
        {
            int h = j % 10 ;
            sum_digit = sum_digit + h ;
            j = j / 10 ;
        }
        if ( sum_digit >= a && sum_digit <= b )
        {
            sum = sum + i ;
        }
    }
    cout << sum ;
    return 0;
}
