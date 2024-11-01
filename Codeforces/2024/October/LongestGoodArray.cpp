#include <bits/stdc++.h>
#define ll long long
#define all(x) x.begin(), x.end()
using namespace std;

void solve() {
    ll l, r;
    cin >> l >> r;

    ll x = 1, y = r, ans = 0;
    while (x <= r) {
        ll m = x + (r - x) / 2;
        ll sum = m * (m - 1) / 2;

        if (l + sum <= y) {
            ans = m;
            x = m + 1;
        } else {
            r = m - 1;
        }
    }
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