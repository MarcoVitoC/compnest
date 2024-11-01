#include <bits/stdc++.h>
#define ll long long
#define all(x) x.begin(), x.end()
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int n;
    cin >> n;

    // # Greedy Approach
    // int ans = 0;
    // while (n) {
    //     int tmp = n, mxDigit = 0;
    //     while (tmp) {
    //         mxDigit = max(mxDigit, tmp % 10);
    //         tmp /= 10;
    //     }

    //     n -= mxDigit;
    //     ans++;
    // }
    // cout << ans << endl;

    // # DP Approach
    vector<int> dp(n + 1, 1e9);
    dp[0] = 0;
    for (int i=1; i<=n; i++) {
        string s = to_string(i);
        for (char c: s) {
            int digit = c - '0';
            if (digit != 0) {
                dp[i] = min(dp[i], dp[i - digit] + 1);
            }
        }
    }
    cout << dp[n] << endl;

    return 0;
}