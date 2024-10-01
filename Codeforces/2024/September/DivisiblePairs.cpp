#include <bits/stdc++.h>
#define ll long long
#define all(x) x.begin(), x.end()
using namespace std;

void solve() {
    ll n, x, y, a, ans = 0;
    cin >> n >> x >> y;

    map<pair<int, int>, ll> cnt;
    for (int i=0; i<n; i++) {
        cin >> a;

        int rmx = a % x, rmy = a % y;
        int cx = (x - rmx) % x;

        ans += cnt[{cx, rmy}];
        cnt[{rmx, rmy}]++;
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