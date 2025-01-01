#include <bits/stdc++.h>
#define ll long long
#define all(x) x.begin(), x.end()
using namespace std;

void solve() {
    ll n, m, k;
    cin >> n >> m >> k;

    vector<int> a(m);
    for (auto &ai: a) cin >> ai;

    ll ans = 0;
    vector<int> q(k);
    for (auto &qi: q) {
        cin >> qi;
        ans += qi;
    }

    string res = "";
    ll sum = (n * (n + 1)) / 2;
    for (int i=0; i<m; i++) {
        bool ok = binary_search(all(q), a[i]);

        if (ok) {
            res += ((ans - a[i] >= sum - a[i]) ? '1' : '0');
        } else {
            res += ((ans >= sum - a[i]) ? '1' : '0');
        }
    }
    cout << res << endl;
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