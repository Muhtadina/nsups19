//D

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t; cin >> t;
    while(t--)
    {
        int legs; cin >> legs;
        int c = 0;
        while(legs>=4)
        {
            legs = legs - 4;
            c++;
        }
        if(legs==2)
            cout << c+1 << endl;
        else
            cout << c << endl;
    }
    return 0;
}
