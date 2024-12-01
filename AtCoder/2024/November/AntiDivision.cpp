#include <bits/stdc++.h>
#define ll long long
#define all(x) x.begin(), x.end()
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    ll A, B, C, D;
    cin >> A >> B >> C >> D;
    
    ll l = lcm(C, D);

    // total of (A - 1) or B - (multiple of C + multiple of D - duplicate)
    ll cntB = B - ((B / C) + (B / D) - (B / l));
    ll cntA = (A - 1) - (((A - 1) / C) + ((A - 1) / D) - ((A - 1) / l));
    cout << cntB - cntA << endl;

    return 0;
}