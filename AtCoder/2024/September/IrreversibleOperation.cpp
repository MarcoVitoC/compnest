#include <bits/stdc++.h>
#define ll long long
#define all(x) x.begin(), x.end()
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    string S;
    cin >> S;

    ll ans = 0, cntB = 0;
    for (char c: S) {
        if (c == 'B') cntB++;
        else ans += cntB;
    }
    cout << ans << endl;

    return 0;
}