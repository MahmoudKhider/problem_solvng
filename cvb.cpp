#include <bits/stdc++.h>
using namespace std;

int main()
{
    int day1, mon1, year1, day2, mon2, year2;
    
    cin >> day1 >> mon1 >> year1 >> day2 >> mon2 >> year2;
    
    int Years, Months, Days;
    
    if ( day1 > day2 ){
        Days = (30-day1 )+(day2);
        -- mon2;
    }
    else
        Days = day2 - day1;
    cout << Days << " ";
    if ( Days > 1 ) cout << "Days ";
    else cout << "Day ";

    if ( mon1 > mon2 ){
        Months = ( 12 - mon1 ) + mon2;
        -- year2;
    }
    else
        Months = mon2 - mon1;
    cout << Months << " ";
    if ( Months > 1 )
	 cout << "Months ";
    else cout << "Month ";

    Years = year2 - year1;
    cout << Years << " ";
    if ( Years > 1 ) 
	cout << "Years ";
    else 
	cout << "Year ";
    return 0;
}
