//A

#include <bits/stdc++.h>
#define endl '\n'
using namespace std;
int main()
{
    int t; cin >> t;
    while(t--)
    {
        int a,b,c=0,n; cin >> n;
        if(n==1 || n==2)
            cout << c << endl;
        else if(n%2!=0)
        {
            cout << n/2 << endl;
        }
        else if(n%2==0)
        {
            cout << (n/2)-1 << endl;
        }
    }
    return 0;
}
