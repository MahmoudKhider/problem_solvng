#include <iostream>
using namespace std;
int main()
{
    int n ;
    cin >> n ;
    long long arr[n] ;
   

    for ( int i = 0 ; i < n ; i ++ ){
        cin >> arr [i] ;
    }
     int mid=(arr[n]+1)/2;
    int flag = 0 ;

    for ( int i = 0 ; i < n ; i ++ ){
        if ( arr[i] != arr[n-i-1]){
            flag = 1 ;
        }
    }

    if ( flag == 1 )
        cout << "NO" ;
    else
        cout << "YES" ;
    return 0;
}
