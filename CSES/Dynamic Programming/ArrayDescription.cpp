#include <bits/stdc++.h>
#define ll long long
#define all(x) x.begin(), x.end()
using namespace std;

const int M = 1e9 + 7;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int n, m;
    cin >> n >> m;

    vector<int> x(n);
    for (int &xi: x) cin >> xi;

    vector<vector<ll>> dp(n, vector<ll>(m + 1));
    for (int i=1; i<=m; i++) {
        dp[0][i] = (i == x[0] || x[0] == 0);
    }

    for (int i=1; i<n; i++) {
        if (x[i] != 0) {
            if (x[i] - 1 >= 1) dp[i][x[i]] = (dp[i][x[i]] + dp[i - 1][x[i] - 1]) % M;
            dp[i][x[i]] = (dp[i][x[i]] + dp[i - 1][x[i]]) % M;
            if (x[i] + 1 <= m) dp[i][x[i]] = (dp[i][x[i]] + dp[i - 1][x[i] + 1]) % M;
            continue;
        }

        for (int j=1; j<=m; j++) {
            if (j - 1 >= 1) dp[i][j] = (dp[i][j] + dp[i - 1][j - 1]) % M;
            dp[i][j] = (dp[i][j] + dp[i - 1][j]) % M;
            if (j + 1 <= m) dp[i][j] = (dp[i][j] + dp[i - 1][j + 1]) % M;
        }
    }

    ll ans = 0;
    for (int i=1; i<=m; i++) {
        ans += dp[n - 1][i];
    }
    cout << ans % M << endl;

    return 0;
}