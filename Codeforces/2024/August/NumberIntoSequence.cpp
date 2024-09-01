#include <bits/stdc++.h>
#define ll long long
#define all(x) x.begin(), x.end()
using namespace std;

void solve() {
    ll n;
    cin >> n;

    vector<pair<ll , int>> vp;
    for (ll i=2; i*i<=n; i++) {
        int cnt = 0;
        while (n % i == 0) {
            n /= i;
            cnt++;
        }

        if (cnt > 0) vp.push_back({i, cnt});
    }
    if (n > 1) vp.push_back({n, 1});

    ll k = -1, p = -1;
    for (auto pf: vp) {
        if (pf.second > k) {
            k = pf.second;
            p = pf.first;
        }
    }

    cout << k << endl;
    vector<ll> a(k, p);
    for (auto pf: vp) {
        if (pf.first == p) continue;

        for (int i=0; i<pf.second; i++) {
            a.back() *= pf.first;
        }
    }

    for (ll x: a) {
        cout << x << " ";
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