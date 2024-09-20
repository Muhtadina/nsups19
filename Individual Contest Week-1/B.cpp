//B

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int A,B,X; cin >> A >> B >> X;
    int T = A+B;
    if(X>=A && X<T)
        cout << "YES";
    else
        cout << "NO";
    return 0;
}
