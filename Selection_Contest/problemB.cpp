//B: Water Lily

#include <bits/stdc++.h>
#define endl '\n'
using namespace std;
int main()
{
    double H,L; cin >> H >> L;
  
    /*
    The Formula
    H+x | L
    -> (H+x)(H+x) = L*L + x*x
    -> H*H + 2*H*x + x*x = L*L + x*x
    -> 2*H*x = L*L - H*H
    -> (L*L - H*H)/2*H = x
    */
  
    double x = (L*L - H*H)/(2*H); //depth 
    printf("%.13f", x);
    return 0;
}
