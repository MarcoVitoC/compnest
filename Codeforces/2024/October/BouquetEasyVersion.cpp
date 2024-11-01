#include <bits/stdc++.h>
#define ll long long
#define all(x) x.begin(), x.end()
using namespace std;

void solve() {
    ll n, m;
    cin >> n >> m;

    vector<ll> a(n);
    map<ll, ll> cnt;
    for (ll &ai: a) {
        cin >> ai;
        cnt[ai]++;
    }
    sort(all(a));

    ll ans = 0;
    for (int i=0; i<n; i++) {
        if (i > 0 && a[i] == a[i - 1]) continue;

        for (int j=0; j<=min(cnt[a[i]], m / a[i]); j++) {
            ll k = min(cnt[a[i] + 1], (m - j * a[i]) / (a[i] + 1));
            ll total = (j * a[i]) + (k * (a[i] + 1));

            if (total <= m) ans = max(ans, total);
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