#include <bits/stdc++.h>
#define ll long long
#define all(x) x.begin(), x.end()
using namespace std;

void solve() {
    int n, k;
    cin >> n >> k;

    int ans = 0;
    for (int x=n; x>=1; x--) {
        if (k <= 0) break;

        if (x <= k) k -= x, ans++;
        if (x != n && x <= k) k -= x, ans++;
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