#include <bits/stdc++.h>
#define ll long long
#define all(x) x.begin(), x.end()
using namespace std;

void solve() {
    int n, m;
    cin >> n >> m;

    vector<int> k(n);
    for (int &ki: k) cin >> ki;
    sort(all(k), greater<int>());

    vector<int> c(m);
    for (int &ci: c) cin >> ci;

    ll ans = 0, p = 0;
    for (int x: k) {
        ans += ((p <= x - 1) ? min(c[p++], c[x - 1]) : c[x - 1]);
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