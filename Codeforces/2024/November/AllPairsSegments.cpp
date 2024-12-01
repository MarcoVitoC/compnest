#include <bits/stdc++.h>
#define ll long long
#define all(x) x.begin(), x.end()
using namespace std;

void solve() {
    int n, q;
    cin >> n >> q;

    map<ll, ll> cnt;
    vector<ll> x(n + 1);
    for (ll i=1; i<=n; i++) {
        cin >> x[i];

        // point x[i] contained in exactly i * (n - i + 1) - 1 intervals
        cnt[i * (n - i + 1) - 1]++;
    }

    for (ll i=1; i<n; i++) {
        // add the number of points between x[i] and x[i + 1] that contained in i * (n - i) intervals
        cnt[i * (n - i)] += (x[i + 1] - x[i] - 1);
    }

    vector<ll> k(q + 1);
    for (ll i=1; i<=q; i++) {
        cin >> k[i];
    }

    for (int i=1; i<=q; i++) {
        cout << cnt[k[i]] << " ";
    }
    cout << endl;
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