#include <bits/stdc++.h>
#define ll long long
#define all(x) x.begin(), x.end()
using namespace std;

const int MOD = 1e9 + 7;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    ll n, k;
    cin >> n >> k;

    vector<vector<ll>> dp(k + 5, vector<ll>(n + 5, 0));
    for (int j=1; j<=n; j++) {
        dp[1][j] = 1;
    }

    for (int i=2; i<=k; i++) { // for every length of k
        for (int j=1; j<=n; j++) { // count the divisors of 1 to n [log(n)]
            for (int l=j; l<=n; l+=j) {
                dp[i][l] += dp[i - 1][j] % MOD;
            }
        }
    }

    ll ans = 0;
    for (int j=1; j<=n; j++) {
        ans += dp[k][j];
    }
    cout << ans % MOD << endl;

    return 0;
}