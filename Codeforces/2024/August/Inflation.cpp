#include <bits/stdc++.h>
#define ll long long
#define all(x) x.begin(), x.end()
using namespace std;

ll bs(vector<ll>& p, ll ps, int i, int k) {
    ll l = 1, r = 1e11, x = 0;
    while (l <= r) {
        ll m = l + (r - l) / 2;

        if (p[i] * 100 <= k * (ps + m)) {
            x = m;
            r = m - 1;
        } else {
            l = m + 1;
        }
    }

    return x;
}

void solve() {
    int n, k;
    cin >> n >> k;

    vector<ll> p(n);
    for (ll &pi: p) cin >> pi;

    ll ans = 0;
    double icLimit = k * 1.0 / 100;
    for (int i=1; i<n; i++) {
        ll ps = 0;
        for (int j=0; j<i; j++) {
            ps += p[j];
        }

        double ic = p[i] * 1.0 / ps;
        if (ic > icLimit) {
            ll x = bs(p, ps, i, k);
            ans += x;
            p[0] += x;
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