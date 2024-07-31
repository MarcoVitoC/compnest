#include <bits/stdc++.h>
#define ll long long
#define all(x) x.begin(), x.end()
using namespace std;

void solve() {
    int n, k;
    cin >> n >> k;

    int ans = n;
    for (int i=1; i*i<=n; i++) {
        if (n % i != 0) continue;

        if (i <= k) ans = min(ans, n / i);
        if (n / i <= k) ans = min(ans, i);
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