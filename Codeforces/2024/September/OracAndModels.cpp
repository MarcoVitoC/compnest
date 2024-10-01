#include <bits/stdc++.h>
#define ll long long
#define all(x) x.begin(), x.end()
using namespace std;

void solve() {
    int n;
    cin >> n;

    vector<int> s(n + 1);
    for (int i=1; i<=n; i++) {
        cin >> s[i];
    }

    int ans = 1;
    vector<int> dp(n + 1, 1);
    for (int i=2; i<=n; i++) {
        int mx = 0;
        for (int j=1; j*j<=i; j++) {
            if (i % j == 0 && s[i] > s[j]) {
                mx = max(mx, dp[j]);
            }

            if (i % (i / j) == 0 && s[i] > s[i / j]) {
                mx = max(mx, dp[i / j]);
            }
        }

        dp[i] += mx;
        ans = max(ans, dp[i]);
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