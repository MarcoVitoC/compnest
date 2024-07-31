#include <bits/stdc++.h>
#define ll long long
#define all(x) x.begin(), x.end()
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int n, a, b, c;
    cin >> n >> a >> b >> c;

    vector<int> dp(n + 5, -1);
    dp[0] = 0;
    for (int i=0; i<=n; i++) {
        if (dp[i] == -1) continue;

        if (i + a <= n) dp[i + a] = max(dp[i + a], dp[i] + 1);
        if (i + b <= n) dp[i + b] = max(dp[i + b], dp[i] + 1);
        if (i + c <= n) dp[i + c] = max(dp[i + c], dp[i] + 1);
    }
    cout << dp[n] << endl;

    return 0;
}