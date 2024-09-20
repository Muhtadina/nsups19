//F
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t; cin >> t;
    while(t--)
    {
        int n,k,c=0; cin >> n >> k ;
        char cell[n];
        for(int i=0; i<n; i++)
        {
            cin >> cell[i];
        }
        for(int i=0; i<n; i++)
        {
            if(cell[i]=='B')
            {
                c++;
                for(int j=i; j<k; j++)
                {
                    cell[j]='W';
                }
                i=i+(k-1);
            }
        }
        cout << c << endl;
    }
    return 0;
}
