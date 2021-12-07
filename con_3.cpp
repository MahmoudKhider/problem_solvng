#include <iostream>
using namespace std;
int main()
{
    int a , b ;
    cin >> a >> b ;
    int c = 0 ;
    for ( int i = 1 ; i <= 100 ; i++ )
    {
        a = a * 3 ;
        b = b * 2 ;
        c++ ;
        if ( a > b )
            break ;
    }
    cout << c ;
    return 0;
}
