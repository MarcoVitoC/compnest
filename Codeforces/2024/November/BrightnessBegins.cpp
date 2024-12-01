#include <bits/stdc++.h>
#define ll long long
#define all(x) x.begin(), x.end()
using namespace std;

const ll MAXK = 1e18;

void solve() {
    ll k;
    cin >> k;

    ll l = 2, r = 2 * MAXK, ans = 2 * MAXK;
    while (l <= r) {
        ll m = l + (r - l) / 2;
        ll sq = sqrt(m);

        if (m - sq < k) {
            l = m + 1;
        } else {
            ans = m;
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