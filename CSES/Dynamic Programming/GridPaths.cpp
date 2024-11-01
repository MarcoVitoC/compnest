#include <bits/stdc++.h>
#define ll long long
#define all(x) x.begin(), x.end()
using namespace std;

const int M = 1e9 + 7;

bool isInBound(int n, int k) {
    return k >= 0 && k < n;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int n;
    cin >> n;

    vector<string> grid(n);
    for (int i=0; i<n; i++) {
        cin >> grid[i];
    }

    vector<vector<ll>> dp(n, vector<ll>(n));
    dp[0][0] = (grid[0][0] == '.');
    for (int i=0; i<n; i++) {
        for (int j=0; j<n; j++) {
            if (grid[i][j] == '*') continue;

            if (isInBound(n, i - 1)) dp[i][j] += dp[i - 1][j];
            if (isInBound(n, j - 1)) dp[i][j] += dp[i][j - 1];
            dp[i][j] %= M;
        }
    }
    cout << dp[n - 1][n - 1] << endl;

    return 0;
}