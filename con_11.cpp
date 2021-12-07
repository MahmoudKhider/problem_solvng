#include<bits/stdc++.h>
using namespace std;
 
 
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int f[3]={0};
    string str;
    for (int i=0;i<3;i++)
    {
        cin>>str;
        if (str[1]=='>')
            f[str[0]-'A']++;
        else
            f[str[2]-'A']++;
    }
    if (f[0]==f[1] || f[0]==f[2] )
        {cout<<"Impossible";}
    else
    {
        str[f[0]]='A';
        str[f[1]]='B';
        str[f[2]]='C';
        cout<<str;
    }
 
return 0;
 
}

