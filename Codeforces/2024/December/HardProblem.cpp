#include <bits/stdc++.h>
#define ll long long
#define all(x) x.begin(), x.end()
using namespace std;

void solve() {
    ll m, a, b, c;
    cin >> m >> a >> b >> c;

    ll r1 = 0, r2 = 0;
    r1 += min(m, a);
    r2 += min(m, b);
    if (r1 < m) {
        ll need = m - r1;
        r1 += min(c, need);
        c -= min(c, need);
    }
    if (r2 < m) {
        ll need = m - r2;
        r2 += min(c, need);
        c -= min(c, need);
    }
    
    cout << r1 + r2 << endl;
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