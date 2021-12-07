#include<iostream>
using namespace std;
int main()
{
    int n; cin >> n;
    string s; cin >>s;
    int c_Anton = 0, c_Danik = 0;
    for ( int i=0; i< s.size(); i++ )
    {
        if ( s[i] == 'A' )
            c_Anton ++;
        else if ( s[i] == 'D' )
            c_Danik ++;
    }
    if ( c_Anton > c_Danik )
        cout <<"Anton";
    else if ( c_Danik > c_Anton )
        cout << "Danik";
    else
        cout << "Friendship";
    return 0;
}
