//A

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t; cin >> t;
    while(t--)
    {
        int n, c=0; cin >> n;
        string s;
        cin >> s;
        for(int i=0; i<n; i++)
        {
            if(s[i]=='m' && s[i+1]=='a' && s[i+2]=='p'){
                c++;
                i+=2;
            }
            else if(s[i]=='p' && s[i+1]=='i' && s[i+2]=='e'){
                c++;
                i+=2;
            }
        }
        cout << c << endl;
    }
    return 0;
}
