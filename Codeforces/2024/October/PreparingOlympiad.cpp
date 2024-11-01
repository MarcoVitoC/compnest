#include <bits/stdc++.h>
#define ll long long
#define all(x) x.begin(), x.end()
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int n, l, r, x;
    cin >> n >> l >> r >> x;

    vector<ll> c(n);
    for (ll &ci: c) cin >> ci;

    int ans = 0;
    for (int i=0; i<(1 << n); i++) {
        ll sum = 0, mn = 1e7, mx = 0;
        for (int j=0; j<n; j++) {
            int bit = (i >> j) & 1;

            if (bit == 0) continue;
            sum += c[j];
            mn = min(mn, c[j]);
            mx = max(mx, c[j]);
        }

        if (sum >= l && sum <= r && (mx - mn) >= x) ans++;
    }
    cout << ans << endl;

    return 0;
}