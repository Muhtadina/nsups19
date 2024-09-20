//E
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t; cin >> t;
    while(t--)
    {
        int row; cin >> row;
        char beat[row][4];
        stack<int> H;
        for(int i=0; i<row; i++)
        {
            for(int j=0; j<4; j++)
            {
                cin >> beat[i][j];
            }
        }
        for(int i=0; i<row; i++)
        {
            for(int j=0; j<4; j++)
            {
                if(beat[i][j]=='#')
                    H.push(j+1);
            }
        }
        while(!H.empty())
        {
            int top = H.top();
            cout << top << " ";
            H.pop();
        }
        cout << endl;
    }
    return 0;
}
