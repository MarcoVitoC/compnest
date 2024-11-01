#include <bits/stdc++.h>
#define ll long long
#define all(x) x.begin(), x.end()
using namespace std;

void solve() {
    int l, r;
    cin >> l >> r;

    int L, R;
    cin >> L >> R;

    int tL = max(l, L), tR = min(r, R);
    if (tL > tR) {
        cout << 1 << endl;
        return;
    }

    int ans = abs(tL - tR);
    if (l < tL || L < tL) ans++;
    if (r > tR || R > tR) ans++;
    
    cout << ans << endl;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int t;
    cin >> t;

    while (t--) {
        solve();
    }

    return 0;
}