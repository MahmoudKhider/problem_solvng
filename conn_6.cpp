#include <bits/stdc++.h>
#include <iostream>
using namespace std;
int main()
{
    int frq[26]={0};
    string sh; cin >> sh;
    for ( int i=0; i<sh.size(); i++ ){
        int x = sh[i] - 'a';
        ++frq[x];
    }
    int solo =0;
    for ( int i=0; i <= 25; i++ ){
        if ( frq[i]==1 )
            solo += 1;
    }
    if ( solo > 1 )
        cout << "NO";
    else
        cout << "YES";
    return 0;
}
