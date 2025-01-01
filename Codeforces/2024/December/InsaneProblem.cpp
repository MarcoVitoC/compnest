#include <bits/stdc++.h>
#define ll long long
#define all(x) x.begin(), x.end()
using namespace std;

ll ceil(ll a, ll b) {
    return (a + b - 1) / b;
}

void solve() {
    ll k, l1, r1, l2, r2;
    cin >> k >> l1 >> r1 >> l2 >> r2;

    ll ans = 0, p = 1;
    while (p <= 1e9) {
        ll l = max(l1, ceil(l2, p));
        ll r = min(r1, r2 / p);

        if (l <= r) ans += (r - l + 1);
        p *= k;
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