#include <bits/stdc++.h>
#define ll long long
#define all(x) x.begin(), x.end()
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int n;
    cin >> n;

    vector<int> h1(n + 1), h2(n + 1);
    for (int i=1; i<=n; i++) cin >> h1[i];
    for (int i=1; i<=n; i++) cin >> h2[i];

    vector<vector<ll>> dp(3, vector<ll>(n + 1));
    dp[0][1] = 0;
    dp[1][1] = h1[1];
    dp[2][1] = h2[1];
    for (int i=2; i<=n; i++) {
        dp[0][i] = max({dp[0][i - 1], dp[1][i - 1], dp[2][i - 1]});
        dp[1][i] = max(dp[0][i - 1], dp[2][i - 1]) + h1[i];
        dp[2][i] = max(dp[0][i - 1], dp[1][i - 1]) + h2[i];
    }
    cout << max({dp[0][n], dp[1][n], dp[2][n]}) << endl;

    return 0;
}